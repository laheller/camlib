// Main header file for Camlib - these are not Standard PTP definitions
// Copyright 2022 by Daniel C (https://github.com/petabyt/camlib)
#ifndef PTP_LIB_H
#define PTP_LIB_H

#include <stdio.h>
#include <stdint.h>

#include "ptp.h"

// Used in bindings, can be set to Git stamp
#ifndef CAMLIB_VERSION
	#ifdef __DATE__
		#define CAMLIB_VERSION __DATE__
	#else
		#define CAMLIB_VERSION "Unknown"
	#endif
#endif

// Max timeout for response
#define PTP_TIMEOUT 1000

// Conforms to POSIX 2001, some compilers may not have it
#ifndef CAMLIB_SLEEP
	#include <unistd.h>
	//int usleep(unsigned int usec);
	#define CAMLIB_SLEEP(ms) usleep(ms * 1000)
#endif

// Logging mechanism, define it yourself or link in log.c
void ptp_verbose_log(char *fmt, ...);

#define PTPLOG dont_use_me_im_deprecated

// Optional, used by frontend in bindings
#ifndef CAMLIB_PLATFORM
	#ifdef WIN32
		#define CAMLIB_PLATFORM "windows"
	#else
		#define CAMLIB_PLATFORM "linux"
	#endif
#endif

// 4mb recommended default buffer size
#define CAMLIB_DEFAULT_SIZE 8000000

#ifdef ML_TRANSPARENCY_PIXEL
	#error "replace ML_TRANSPARENCY_PIXEL with PTP_LV_TRANSPARENCY_PIXEL"
#endif
#ifndef PTP_LV_TRANSPARENCY_PIXEL
	#define PTP_LV_TRANSPARENCY_PIXEL 0x0
#endif

// Generic Camlib errors, not PTP return codes
enum PtpGeneralError {
	PTP_OK = 0,
	PTP_NO_DEVICE = -1,
	PTP_NO_PERM = -2,
	PTP_OPEN_FAIL = -3,
	PTP_OUT_OF_MEM = -4,
	PTP_IO_ERR = -5,
	PTP_RUNTIME_ERR = -6,
	PTP_UNSUPPORTED = -7,
	PTP_CHECK_CODE = -8,
};

enum PtpLiveViewType {
	PTP_LV_NONE = 0,
	PTP_LV_EOS = 1,
	PTP_LV_CANON = 2,
	PTP_LV_ML = 3,
	PTP_LV_EOS_ML_BMP = 4,
};

// Detect device type - each category should have similar opcodes
enum PtpVendors {
	PTP_DEV_EMPTY = 0,
	PTP_DEV_EOS = 1,
	PTP_DEV_CANON = 2,
	PTP_DEV_NIKON = 3,
	PTP_DEV_SONY = 4,
	PTP_DEV_FUJI = 5,
	PTP_DEV_PANASONIC = 6,
};

// Wrapper types for vendor specific image formats
enum ImageFormats {
	IMG_FORMAT_ETC = 0,
	IMG_FORMAT_RAW = 1,
	IMG_FORMAT_STD = 2,
	IMG_FORMAT_HIGH = 3,
	IMG_FORMAT_RAW_JPEG = 4,
};

enum BindCaptureType {
	PTP_CAPTURE_REMOTE = 1,
	PTP_CAPTURE_CAMERA = 2,
};

enum PtpConnType {
	PTP_IP,
	PTP_USB,
};

struct PtpRuntime {
	int active_connection;
	int connection_type;

	// The transaction ID and session ID is managed by the
	// packet generator functions
	int transaction;
	int session;

    uint8_t *data;
    int data_length;

	// 512 is common, although sometimes the backend can manage more
	int max_packet_size;

	// Info about current connection, used to detect the vendor, supported opodes
	int device_type;
	struct PtpDeviceInfo *di;

	// For Windows compatibility, this is set to indicate lenth for a data packet
	// that will be sent after a command packet. Will be set to zero when ptp_send_bulk_packets is called.
	int data_phase_length;

	// For networking
	int fd;
	int evfd;
};

// Generic command structure - not a packet
// Meant to be a bridge to the other packet types.
struct PtpCommand {
	int code;

	uint32_t params[5];
	int param_length;

	int data_length;
};

// Helper packet reader functions
uint8_t ptp_read_uint8(void **dat);
uint16_t ptp_read_uint16(void **dat);
uint32_t ptp_read_uint32(void **dat);
void ptp_read_string(void **dat, char *string, int max);
int ptp_read_uint16_array(void **dat, uint16_t *buf, int max);
int ptp_read_uint32_array(void **dat, uint16_t *buf, int max);
int ptp_wide_string(char *buffer, int max, char *input);

// Helper packet writer functions
void ptp_write_uint8(void **dat, uint8_t b);
int ptp_write_string(void **dat, char *string);

int ptp_write_unicode_string(char *dat, char *string);
int ptp_read_unicode_string(char *buffer, char *dat, int max);

// Packet builder functions:
// Typically, command packet is sent first (cmd), followed by a data packet
// If any payload is required. The transaction ID
int ptp_new_data_packet(struct PtpRuntime *r, struct PtpCommand *cmd);
int ptp_new_cmd_packet(struct PtpRuntime *r, struct PtpCommand *cmd);

// Packets start with a uint32 representing the length of the packet.
// In some cases, we want to append more data to the packet, so the length
// value must be updated
void ptp_update_data_length(struct PtpRuntime *r, int length);

// Used only by ptp_open_session
void ptp_update_transaction(struct PtpRuntime *r, int t);

// Duplicate array, return malloc'd buffer
struct UintArray * ptp_dup_uint_array(struct UintArray *arr);

// Returns info from the response structure currently in the buffer
int ptp_get_return_code(struct PtpRuntime *r);
int ptp_get_data_length(struct PtpRuntime *r);
uint32_t ptp_get_param(struct PtpRuntime *r, int index);
int ptp_get_param_length(struct PtpRuntime *r);
int ptp_get_last_transaction(struct PtpRuntime *r);

// Get ptr of packet payload, after header (includes parameters)
uint8_t *ptp_get_payload(struct PtpRuntime *r);
int ptp_get_payload_length(struct PtpRuntime *r);

// Generic cmd send and get response - in place of a macro
int ptp_generic_send(struct PtpRuntime *r, struct PtpCommand *cmd);
int ptp_generic_send_data(struct PtpRuntime *r, struct PtpCommand *cmd, void *data, int length);

// Generic runtime setup - allocate default memory
void ptp_generic_reset(struct PtpRuntime *r);
void ptp_generic_init(struct PtpRuntime *r);
void ptp_generic_close(struct PtpRuntime *r);

int ptp_get_event(struct PtpRuntime *r, struct PtpEventContainer *ec);

// Will access r->di, a ptr to the device info structure.
// See tests/ for examples on how to do this.
int ptp_device_type(struct PtpRuntime *r);
int ptp_check_opcode(struct PtpRuntime *r, int op);
int ptp_check_prop(struct PtpRuntime *r, int code);

// Write r->data to a file called DUMP
int ptp_dump(struct PtpRuntime *r);

#include "cl_data.h"
#include "cl_backend.h"
#include "cl_ops.h"
#include "cl_enum.h"
#include "cl_bind.h"

#endif
