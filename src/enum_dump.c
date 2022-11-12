// autogenerated file
#include "enum.h"
struct PtpEnum ptp_enums[] = {
{PTP_OC, PTP_VENDOR_GENERIC, "GetDeviceInfo", 0x1001},
{PTP_OC, PTP_VENDOR_GENERIC, "OpenSession", 0x1002},
{PTP_OC, PTP_VENDOR_GENERIC, "CloseSession", 0x1003},
{PTP_OC, PTP_VENDOR_GENERIC, "GetStorageIDs", 0x1004},
{PTP_OC, PTP_VENDOR_GENERIC, "GetStorageInfo", 0x1005},
{PTP_OC, PTP_VENDOR_GENERIC, "GetNumObjects", 0x1006},
{PTP_OC, PTP_VENDOR_GENERIC, "GetObjectHandles", 0x1007},
{PTP_OC, PTP_VENDOR_GENERIC, "GetObjectInfo", 0x1008},
{PTP_OC, PTP_VENDOR_GENERIC, "GetObject", 0x1009},
{PTP_OC, PTP_VENDOR_GENERIC, "GetThumb", 0x100A},
{PTP_OC, PTP_VENDOR_GENERIC, "DeleteObject", 0x100B},
{PTP_OC, PTP_VENDOR_GENERIC, "SendObjectInfo", 0x100C},
{PTP_OC, PTP_VENDOR_GENERIC, "SendObject", 0x100D},
{PTP_OC, PTP_VENDOR_GENERIC, "InitiateCapture", 0x100E},
{PTP_OC, PTP_VENDOR_GENERIC, "FormatStore", 0x100F},
{PTP_OC, PTP_VENDOR_GENERIC, "ResetDevice", 0x1010},
{PTP_OC, PTP_VENDOR_GENERIC, "SelfTest", 0x1011},
{PTP_OC, PTP_VENDOR_GENERIC, "SetObjectProtection", 0x1012},
{PTP_OC, PTP_VENDOR_GENERIC, "PowerDown", 0x1013},
{PTP_OC, PTP_VENDOR_GENERIC, "GetDevicePropDesc", 0x1014},
{PTP_OC, PTP_VENDOR_GENERIC, "GetDevicePropValue", 0x1015},
{PTP_OC, PTP_VENDOR_GENERIC, "SetDevicePropValue", 0x1016},
{PTP_OC, PTP_VENDOR_GENERIC, "ResetDevicePropValue", 0x1017},
{PTP_OC, PTP_VENDOR_GENERIC, "TerminateOpenCapture", 0x1018},
{PTP_OC, PTP_VENDOR_GENERIC, "MoveObject", 0x1019},
{PTP_OC, PTP_VENDOR_GENERIC, "CopyObject", 0x101A},
{PTP_OC, PTP_VENDOR_GENERIC, "GetPartialObject", 0x101B},
{PTP_OC, PTP_VENDOR_GENERIC, "InitiateOpenCapture", 0x101C},
{PTP_RC, PTP_VENDOR_GENERIC, "Undefined", 0x2000},
{PTP_RC, PTP_VENDOR_GENERIC, "OK", 0x2001},
{PTP_RC, PTP_VENDOR_GENERIC, "GeneralError", 0x2002},
{PTP_RC, PTP_VENDOR_GENERIC, "SessionNotOpen", 0x2003},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidTransactionID", 0x2004},
{PTP_RC, PTP_VENDOR_GENERIC, "OperationNotSupported", 0x2005},
{PTP_RC, PTP_VENDOR_GENERIC, "ParameterNotSupported", 0x2006},
{PTP_RC, PTP_VENDOR_GENERIC, "IncompleteTransfer", 0x2007},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidStorageId", 0x2008},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidObjectHandle", 0x2009},
{PTP_RC, PTP_VENDOR_GENERIC, "DevicePropNotSupported", 0x200A},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidObjectFormatCode", 0x200B},
{PTP_RC, PTP_VENDOR_GENERIC, "StoreFull", 0x200C},
{PTP_RC, PTP_VENDOR_GENERIC, "ObjectWriteProtected", 0x200D},
{PTP_RC, PTP_VENDOR_GENERIC, "StoreReadOnly", 0x200E},
{PTP_RC, PTP_VENDOR_GENERIC, "AccessDenied", 0x200F},
{PTP_RC, PTP_VENDOR_GENERIC, "NoThumbnailPresent", 0x2010},
{PTP_RC, PTP_VENDOR_GENERIC, "SelfTestFailed", 0x2011},
{PTP_RC, PTP_VENDOR_GENERIC, "PartialDeletion", 0x2012},
{PTP_RC, PTP_VENDOR_GENERIC, "StoreNotAvailable", 0x2013},
{PTP_RC, PTP_VENDOR_GENERIC, "SpecByFormatUnsupported", 0x2014},
{PTP_RC, PTP_VENDOR_GENERIC, "NoValidObjectInfo", 0x2015},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidCodeFormat", 0x2016},
{PTP_RC, PTP_VENDOR_GENERIC, "UnknownVendorCode", 0x2017},
{PTP_RC, PTP_VENDOR_GENERIC, "CaptureAlreadyTerminated", 0x2018},
{PTP_RC, PTP_VENDOR_GENERIC, "DeviceBusy", 0x2019},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidParentObject", 0x201A},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidDevicePropFormat", 0x201B},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidDevicePropValue", 0x201C},
{PTP_RC, PTP_VENDOR_GENERIC, "InvalidParameter", 0x201D},
{PTP_RC, PTP_VENDOR_GENERIC, "SessionAlreadyOpened", 0x201E},
{PTP_RC, PTP_VENDOR_GENERIC, "TransactionCanceled", 0x201F},
{PTP_RC, PTP_VENDOR_GENERIC, "SpecOfDestinationUnsupported", 0x2020},
{PTP_OC, PTP_VENDOR_FUJI, "SendObjectInfo", 0x900C},
{PTP_OC, PTP_VENDOR_FUJI, "Unknown1", 0x900D},
{PTP_OC, PTP_VENDOR_FUJI, "SendObject", 0x901D},
{PTP_EC, PTP_VENDOR_GENERIC, "Undefined", 0x4000},
{PTP_EC, PTP_VENDOR_GENERIC, "CancelTransaction", 0x4001},
{PTP_EC, PTP_VENDOR_GENERIC, "ObjectAdded", 0x4002},
{PTP_EC, PTP_VENDOR_GENERIC, "ObjectRemoved", 0x4003},
{PTP_EC, PTP_VENDOR_GENERIC, "StoreAdded", 0x4004},
{PTP_EC, PTP_VENDOR_GENERIC, "StoreRemoved", 0x4005},
{PTP_EC, PTP_VENDOR_GENERIC, "DevicePropChanged", 0x4006},
{PTP_EC, PTP_VENDOR_GENERIC, "ObjectInfoChanged", 0x4007},
{PTP_EC, PTP_VENDOR_GENERIC, "DeviceInfoChanged", 0x4008},
{PTP_EC, PTP_VENDOR_GENERIC, "RequestObjectTransfer", 0x4009},
{PTP_EC, PTP_VENDOR_GENERIC, "StoreFull", 0x400A},
{PTP_EC, PTP_VENDOR_GENERIC, "DeviceReset", 0x400B},
{PTP_EC, PTP_VENDOR_GENERIC, "StorageInfoChanged", 0x400C},
{PTP_EC, PTP_VENDOR_GENERIC, "CaptureComplete", 0x400D},
{PTP_EC, PTP_VENDOR_GENERIC, "UnreportedStatus", 0x400E},
{PTP_OF, PTP_VENDOR_GENERIC, "Undefined", 0x3000},
{PTP_OF, PTP_VENDOR_GENERIC, "Association", 0x3001},
{PTP_OF, PTP_VENDOR_GENERIC, "Script", 0x3002},
{PTP_OF, PTP_VENDOR_GENERIC, "Executable", 0x3003},
{PTP_OF, PTP_VENDOR_GENERIC, "Text", 0x3004},
{PTP_OF, PTP_VENDOR_GENERIC, "HTML", 0x3005},
{PTP_OF, PTP_VENDOR_GENERIC, "DPOF", 0x3006},
{PTP_OF, PTP_VENDOR_GENERIC, "AIFF", 0x3007},
{PTP_OF, PTP_VENDOR_GENERIC, "WAV", 0x3008},
{PTP_OF, PTP_VENDOR_GENERIC, "MP3", 0x3009},
{PTP_OF, PTP_VENDOR_GENERIC, "AVI", 0x300A},
{PTP_OF, PTP_VENDOR_GENERIC, "MPEG", 0x300B},
{PTP_OF, PTP_VENDOR_GENERIC, "ASF", 0x300C},
{PTP_OF, PTP_VENDOR_GENERIC, "UndefinedImage", 0x300D},
{PTP_OF, PTP_VENDOR_GENERIC, "EXIF", 0x300E},
{PTP_OF, PTP_VENDOR_GENERIC, "TIFF_EP", 0x300F},
{PTP_OF, PTP_VENDOR_GENERIC, "FlashPix", 0x3010},
{PTP_OF, PTP_VENDOR_GENERIC, "BMP", 0x3011},
{PTP_OF, PTP_VENDOR_GENERIC, "CIFF", 0x3012},
{PTP_OF, PTP_VENDOR_GENERIC, "Reserved0", 0x3013},
{PTP_OF, PTP_VENDOR_GENERIC, "GIF", 0x3014},
{PTP_OF, PTP_VENDOR_GENERIC, "JFIF", 0x3015},
{PTP_OF, PTP_VENDOR_GENERIC, "CD", 0x3016},
{PTP_OF, PTP_VENDOR_GENERIC, "PICT", 0x3017},
{PTP_OF, PTP_VENDOR_GENERIC, "PNG", 0x3018},
{PTP_OF, PTP_VENDOR_GENERIC, "Reserved1", 0x3019},
{PTP_OF, PTP_VENDOR_GENERIC, "TIFF_IT", 0x301A},
{PTP_OF, PTP_VENDOR_GENERIC, "JP2", 0x301B},
{PTP_OF, PTP_VENDOR_GENERIC, "JPX", 0x301C},
{PTP_OF, PTP_VENDOR_GENERIC, "Firmware", 0xb802},
{PTP_OF, PTP_VENDOR_GENERIC, "WIF", 0xb881},
{PTP_OF, PTP_VENDOR_GENERIC, "Audio", 0xb900},
{PTP_OF, PTP_VENDOR_GENERIC, "WMA", 0xb901},
{PTP_OF, PTP_VENDOR_GENERIC, "OGG", 0xb902},
{PTP_OF, PTP_VENDOR_GENERIC, "AAC", 0xb903},
{PTP_OF, PTP_VENDOR_GENERIC, "Audible", 0xb904},
{PTP_OF, PTP_VENDOR_GENERIC, "FLAC", 0xb906},
{PTP_OF, PTP_VENDOR_GENERIC, "SamsungPlaylist", 0xb909},
{PTP_OF, PTP_VENDOR_GENERIC, "Video", 0xb980},
{PTP_OF, PTP_VENDOR_GENERIC, "WMV", 0xb981},
{PTP_OF, PTP_VENDOR_GENERIC, "MP4", 0xb982},
{PTP_OF, PTP_VENDOR_GENERIC, "3GP", 0xb984},
{PTP_OF, PTP_VENDOR_GENERIC, "MP2", 0xb983},
{PTP_PC, PTP_VENDOR_GENERIC, "BatteryLevel", 0x5001},
{PTP_PC, PTP_VENDOR_GENERIC, "FocalLength", 0x5008},
{PTP_PC, PTP_VENDOR_GENERIC, "FocalDistance", 0x5009},
{PTP_PC, PTP_VENDOR_GENERIC, "FocusMode", 0x500a},
{PTP_PC, PTP_VENDOR_GENERIC, "DateTime", 0x5011},
{PTP_ST, PTP_VENDOR_GENERIC, "Undefined", 0x0},
{PTP_ST, PTP_VENDOR_GENERIC, "FixedROM", 0x1},
{PTP_ST, PTP_VENDOR_GENERIC, "RemovableROM", 0x2},
{PTP_ST, PTP_VENDOR_GENERIC, "FixedRAM", 0x3},
{PTP_ST, PTP_VENDOR_GENERIC, "RemovableRAM", 0x4},
{PTP_FT, PTP_VENDOR_GENERIC, "Undefined", 0x0},
{PTP_FT, PTP_VENDOR_GENERIC, "GenericFlat", 0x1},
{PTP_FT, PTP_VENDOR_GENERIC, "GenericHei", 0x2},
{PTP_FT, PTP_VENDOR_GENERIC, "DCF", 0x3},
{PTP_AC, PTP_VENDOR_GENERIC, "ReadWrite", 0x0},
{PTP_AC, PTP_VENDOR_GENERIC, "Read", 0x1},
{PTP_AC, PTP_VENDOR_GENERIC, "ReadDelete", 0x2},
{PTP_ENUM, 0, "USB_REQ_RESET", 0x66},
{PTP_ENUM, 0, "USB_REQ_STATUS", 0x67},
{PTP_ENUM, 0, "USB_REQ_GET_STATUS", 0x00},
{PTP_ENUM, 0, "USB_REQ_CLEAR_FEATURE", 0x01},
{PTP_ENUM, 0, "USB_REQ_SET_FEATURE", 0x03},
{PTP_ENUM, 0, "USB_DP_HTD", 0x0},
{PTP_ENUM, 0, "USB_DP_DTH", 0x80},
{PTP_ENUM, 0, "USB_RECIP_DEVICE", 0x00},
{PTP_ENUM, 0, "USB_RECIP_INTERFACE", 0x01},
{PTP_ENUM, 0, "USB_RECIP_ENDPOINT", 0x02},
{PTP_ENUM, 0, "USB_TYPE_CLASS", 0x20},
{PTP_OC, PTP_VENDOR_CANON, "ViewFinderOn", 0x900b},
{PTP_OC, PTP_VENDOR_CANON, "ViewFinderOff", 0x900c},
{PTP_OC, PTP_VENDOR_CANON, "GetViewFinderImage", 0x901d},
{PTP_OC, PTP_VENDOR_GENERIC, "EOS_InitiateViewfinder", 0x9151},
{PTP_OC, PTP_VENDOR_GENERIC, "EOS_TerminateViewfinder", 0x9152},
{PTP_OC, PTP_VENDOR_GENERIC, "EOS_GetViewFinderData", 0x9153},
{PTP_OC, PTP_VENDOR_GENERIC, "EOS_RemoteReleaseOn", 0x9128},
{PTP_OC, PTP_VENDOR_GENERIC, "EOS_RemoteReleaseOff", 0x9129},
{PTP_OC, PTP_VENDOR_GENERIC, "EOS_SetDevicePropValueEx", 0x9110},
{PTP_PC, PTP_VENDOR_CANON, "BeepCode", 0xD001},
{PTP_PC, PTP_VENDOR_CANON, "ViewFinderMode", 0xD003},
{PTP_PC, PTP_VENDOR_CANON, "ImageQuality", 0xD006},
{PTP_PC, PTP_VENDOR_CANON, "ImageSize", 0xD008},
{PTP_PC, PTP_VENDOR_CANON, "FlashMode", 0xD00a},
{PTP_PC, PTP_VENDOR_CANON, "TvAvSetting", 0xD00c},
{PTP_PC, PTP_VENDOR_CANON, "MeteringMode", 0xd010},
{PTP_PC, PTP_VENDOR_CANON, "MacroMode", 0xd011},
{PTP_PC, PTP_VENDOR_CANON, "FocusingPoint", 0xd012},
{PTP_PC, PTP_VENDOR_CANON, "WhiteBalance", 0xd013},
{PTP_PC, PTP_VENDOR_CANON, "ISOSpeed", 0xd01c},
{PTP_PC, PTP_VENDOR_CANON, "Aperture", 0xd01c},
{PTP_PC, PTP_VENDOR_CANON, "ShutterSpeed", 0xd01e},
{PTP_PC, PTP_VENDOR_CANON, "ExpComp", 0xd01f},
{PTP_PC, PTP_VENDOR_CANON, "Zoom", 0xd02a},
{PTP_PC, PTP_VENDOR_CANON, "SizeQuality", 0xd02c},
{PTP_PC, PTP_VENDOR_CANON, "FlashMemory", 0xd031},
{PTP_PC, PTP_VENDOR_CANON, "CameraModel", 0xd032},
{PTP_PC, PTP_VENDOR_CANON, "CameraOwner", 0xd033},
{PTP_PC, PTP_VENDOR_CANON, "UnixTime", 0xd032},
{PTP_PC, PTP_VENDOR_CANON, "ViewFinderOut", 0xD036},
{PTP_PC, PTP_VENDOR_CANON, "RealImageWidth", 0xD039},
{PTP_PC, PTP_VENDOR_CANON, "PhotoEffect", 0xD040},
{PTP_PC, PTP_VENDOR_CANON, "AssistLight", 0xD041},
{PTP_PC, PTP_VENDOR_CANON, "EOS_VF_Output", 0xD1B0},
{PTP_PC, PTP_VENDOR_CANON, "EOS_EVFMode", 0xD1B1},
{PTP_PC, PTP_VENDOR_CANON, "EOS_DOFPrev", 0xD1B2},
{PTP_PC, PTP_VENDOR_CANON, "EOS_VFSharp", 0xD1B3},
{PTP_PC, PTP_VENDOR_GENERIC, "EOS_CaptureDest", 0xD11C},

};int ptp_enums_length = 188;
