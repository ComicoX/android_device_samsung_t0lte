# Release name
PRODUCT_RELEASE_NAME := t0lte

# Inherit device configuration
$(call inherit-product, device/samsung/smdk4412-common/common.mk)
$(call inherit-product, device/samsung/t0lte/t0lte.mk)

# Inherit from the common Open Source product configuration
$(call inherit-product, $(SRC_TARGET_DIR)/product/aosp_base_telephony.mk)

# Boot animation
TARGET_SCREEN_HEIGHT := 1280
TARGET_SCREEN_WIDTH := 720

# Inherit some common stuff.
$(call inherit-product, vendor/havoc/config/common.mk)

# Device identifier. This must come after all inclusions
PRODUCT_DEVICE := t0lte
PRODUCT_NAME := havoc_t0lte
PRODUCT_BRAND := samsung
PRODUCT_MODEL := GT-N7105
PRODUCT_MANUFACTURER := samsung
