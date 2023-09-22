// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Raspberry Pi Pico"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (1408 * 1024)

// Enable networking.
#define MICROPY_PY_NETWORK                  (1)
#define MICROPY_PY_NETWORK_HOSTNAME_DEFAULT "Pico"

// Wiznet HW config.
#define MICROPY_HW_WIZNET_SPI_ID            (0)
#define MICROPY_HW_WIZNET_SPI_BAUDRATE      (20 * 1000 * 1000)
#define MICROPY_HW_WIZNET_SPI_SCK           (18)
#define MICROPY_HW_WIZNET_SPI_MOSI          (19)
#define MICROPY_HW_WIZNET_SPI_MISO          (16)
#define MICROPY_HW_WIZNET_PIN_CS            (17)
#define MICROPY_HW_WIZNET_PIN_RST           (22)
// Connecting the INTN pin enables RECV interrupt handling of incoming data.
#define MICROPY_HW_WIZNET_PIN_INTN          (21)

#define MICROPY_HW_USB_MANUFACTURER_STRING      "IC"
#define MICROPY_HW_USB_PRODUCT_FS_STRING        "CardReader"
#define MICROPY_HW_USB_CDC_INTERFACE_STRING     "Board CDC"

//#define MICROPY_ENABLE_COMPILER                 (0)
//#define MICROPY_PY_BUILTINS_COMPILE             (0)
//#define MICROPY_PY_BUILTINS_EXECFILE            (0)