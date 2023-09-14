// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Raspberry Pi Pico"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (1408 * 1024)

#define MICROPY_HW_USB_MANUFACTURER_STRING      "IC"
#define MICROPY_HW_USB_PRODUCT_FS_STRING        "CardReader"
#define MICROPY_HW_USB_CDC_INTERFACE_STRING     "Board CDC"

//#define MICROPY_ENABLE_COMPILER                 (0)
//#define MICROPY_PY_BUILTINS_COMPILE             (0)
//#define MICROPY_PY_BUILTINS_EXECFILE            (0)