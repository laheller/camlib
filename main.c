#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <camlib.h>
#include <backend.h>
#include <ptp.h>
#include <operations.h>

struct PtpRuntime r;

void print_bytes(uint8_t *bytes, int n) {
	for (int i = 0; i < n; i++) {
		if (bytes[i] > 31 && bytes[i] < 128) {
			printf("'%c' ", bytes[i]);
		} else {
			printf("%02X ", bytes[i]);
		}
	}

	puts("");
}

void test();

int main() {
	r.data = malloc(4096);
	r.transaction = 0;
	r.session = 0;
	r.data_length = 4096;

	struct PtpDeviceInfo di;

	if (ptp_device_init()) {
		puts("Device init error");
		return 0;
	}

	ptp_get_device_info(&r, &di);

	printf("Return code: 0x%X\n", ptp_get_return_code(&r));

	ptp_device_info_json(&di, (char*)r.data, r.data_length);
	printf("%s\n", (char*)r.data);

	ptp_device_close();

	return 0;
}

