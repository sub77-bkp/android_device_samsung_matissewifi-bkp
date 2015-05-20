# Copyright (C) 2014 The CyanogenMod Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

# bootanimation
TARGET_BOOTANIMATION_SIZE := 1280x800

# Inherit from our custom product configuration
$(call inherit-product, vendor/omni/config/common_tablet.mk)

# Inherit from matissewifi device
$(call inherit-product, device/samsung/matissewifi/matissewifi.mk)

# Screen density
PRODUCT_AAPT_CONFIG := normal hdpi xhdpi
PRODUCT_AAPT_PREF_CONFIG := xhdpi

# Device identifier. This must come after all inclusions
PRODUCT_RELEASE_NAME := matissewifi
PRODUCT_DEVICE := matissewifi
PRODUCT_NAME := omni_matissewifi
PRODUCT_BRAND := samsung
PRODUCT_MODEL := SM-T530

#Set build fingerprint / ID / Prduct Name ect.
PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=SM-T530 TARGET_DEVICE=matissewifi BUILD_FINGERPRINT=samsung/matissewifixx/matissewifi:4.4.2/KOT49H/T530XXU1ANH7:user/release-keys PRIVATE_BUILD_DESC="matissewifixx-user 4.4.2 KOT49H T530XXU1ANH7 release-keys"

