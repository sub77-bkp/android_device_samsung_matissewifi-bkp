#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    // framebuffer device
    "/sys/class/graphics/fb0",

    // storage devices
    "/sys/block/mmcblk0",
    "/sys/devices/msm_sdcc.1",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p14", // boot
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p24", // cache
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p2", // modem
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p21", // persist
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p23", // system
    "/sys/devices/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p26", // userdata
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    // input
    "/sys/devices/gpio_keys.84/input*",
    "/sys/devices/virtual/input*",
    "/sys/devices/f9927000.i2c/i2c-5/5-004a/input/input*",
    "/sys/devices/virtual/misc/uinput",

    // adb
    "/sys/class/tty/ptmx",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/bus/usb",

    // USB Drive is in here
    "/sys/devices/platform/msm_hsusb_host*",

    // for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/misc/ion",

    // Encryption
    "/sys/devices/virtual/misc/device-mapper",
    "/sys/devices/virtual/qseecom/qseecom",

    NULL
};
