# cmake file for Raspberry Pi Pico
set(PICO_BOARD "pico")

set(MICROPY_PY_NETWORK_WIZNET5K W5500)
set(MICROPY_PY_LWIP 1)

# Board specific version of the frozen manifest
set(MICROPY_FROZEN_MANIFEST ${MICROPY_BOARD_DIR}/manifest.py)
