/*
 * Copyright (C) 2017 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <android-base/file.h>
#include <android-base/strings.h>

#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>

#include <init_t0lte.h>

using android::base::GetProperty;
using android::base::ReadFileToString;
using android::base::Trim;

void vendor_load_properties(void)
{
    std::string bootloader = android::base::GetProperty("ro.bootloader", "");
    if (bootloader.find("I317") != std::string::npos) {
        /* SGH-i317 (AT&T) */
        android::init::property_set("ro.product.model", "SGH-I317");
        android::init::property_set("ro.product.device", "t0lteatt");
        android::init::property_set("ro.build.description", "t0lteuc-user 4.4.2 KOT49H I317UCUCNJ1 release-keys");
        android::init::property_set("ro.build.fingerprint", "samsung/t0lteuc/t0lteatt:4.4.2/KOT49H/I317UCUCNJ1:user/release-keys");
        android::init::property_set("ro.build.product", "t0lteatt");
    } else if (bootloader.find("I605") != std::string::npos) {
        /* SCH-I605 (Verizon) */
        android::init::property_set("ro.product.model", "SCH-I605");
        android::init::property_set("ro.product.device", "t0ltevzw");
        android::init::property_set("ro.build.description", "t0ltevzw-user 4.4.2 KOT49H I605VRUFND7 release-keys");
        android::init::property_set("ro.build.fingerprint", "Verizon/t0ltevzw/t0ltevzw:4.4.2/KOT49H/I605VRUFND7:user/release-keys");
        android::init::property_set("ro.build.product", "t0ltevzw");
    } else if (bootloader.find("T889") != std::string::npos) {
        /* SGH-T889 (T-Mobile) */
        android::init::property_set("ro.product.model", "SGH-T889");
        android::init::property_set("ro.product.device", "t0ltetmo");
        android::init::property_set("ro.build.description", "t0ltetmo-user 4.3 JSS15J T889UVUCMK7 release-keys");
        android::init::property_set("ro.build.fingerprint", "samsung/t0ltetmo/t0ltetmo:4.3/JSS15J/T889UVUCMK7:user/release-keys");
        android::init::property_set("ro.build.product", "t0ltetmo");
    } else if (bootloader.find("L900") != std::string::npos) {
        /* SCH-L900 (Sprint) */
        android::init::property_set("ro.product.model", "SPH-L900");
        android::init::property_set("ro.product.device", "t0ltespr");
        android::init::property_set("ro.build.description", "t0ltespr-user 4.4.2 KOT49H L900VPUCNE2 release-keys");
        android::init::property_set("ro.build.fingerprint", "samsung/t0ltespr/t0ltespr:4.4.2/KOT49H/L900VPUCNE2:user/release-keys");
        android::init::property_set("ro.build.product", "t0ltespr");
    } else if (bootloader.find("E250S") != std::string::npos) {
        /* SHV-E250S (SK Telecom) */
        android::init::property_set("ro.product.model", "SHV-E250S");
        android::init::property_set("ro.product.device", "t0lteskt");
        android::init::property_set("ro.build.description", "t0lteskt-user 4.4.2 KOT49H E250SKSUKNI2 release-keys");
        android::init::property_set("ro.build.fingerprint", "samsung/t0lteskt/t0lteskt:4.4.2/KOT49H/E250SKSUKNI2:user/release-keys");
        android::init::property_set("ro.build.product", "t0lteskt");
    } else if (bootloader.find("E250K") != std::string::npos) {
        /* SHV-E250K (KT Olleh) */
        android::init::property_set("ro.product.model", "SHV-E250K");
        android::init::property_set("ro.product.device", "t0ltektt");
        android::init::property_set("ro.build.description", "t0ltektt-user 4.4.2 KOT49H E250KKTUKNI1 release-keys");
        android::init::property_set("ro.build.fingerprint", "samsung/t0ltektt/t0ltektt:4.4.2/KOT49H/E250KKTUKNI1:user/release-keys");
        android::init::property_set("ro.build.product", "t0ltektt");
    } else if (bootloader.find("E250L") != std::string::npos) {
        /* SHV-E250L (LG Uplus) */
        android::init::property_set("ro.product.model", "SHV-E250L");
        android::init::property_set("ro.product.device", "t0ltelgt");
        android::init::property_set("ro.build.description", "t0ltelgt-user 4.4.2 KOT49H E250LKLUKNL1 release-keys");
        android::init::property_set("ro.build.fingerprint", "samsung/t0ltelgt/t0ltelgt:4.4.2/KOT49H/E250LKLUKNL1:user/release-keys");
        android::init::property_set("ro.build.product", "t0ltelgt");  
    } else if (bootloader.find("SC02E") != std::string::npos) {
        /* SC-02E (SGH-N025) (NTT DoCoMo) */
	android::init::property_set("ro.product.model", "SC-02E");
	android::init::property_set("ro.product.device", "t0ltedcm");
	android::init::property_set("ro.build.description", "t0ltedcm-user 4.3 JSS15J SC02EOMUBNJ2 release-keys");
	android::init::property_set("ro.build.fingerprint", "samsung/t0ltedcm/t0ltedcm:4.3/JSS15J/SC02EOMUBNJ2:user/release-keys");
	android::init::property_set("ro.build.product", "t0ltedcm");
    } else if (bootloader.find("N7100") != std::string::npos) {
        /* Fall back to GT-N7100 WHY? JUST BECAUSE*/
	android::init::property_set("ro.product.model", "GT-N7100");
	android::init::property_set("ro.product.device", "t03gxx");
	android::init::property_set("ro.build.description", "t03gxx-user 4.3 JSS15J N7100XXUEMK4 release-keys");
	android::init::property_set("ro.build.fingerprint", "samsung/t03gxx/t03g:4.3/JSS15J/N7100XXUEMK4:user/release-keys");
	android::init::property_set("ro.build.product", "t03gxx");
    } else {
        /* Fall back to GT-N7105 (International LTE) */
        android::init::property_set("ro.product.model", "GT-N7105");
        android::init::property_set("ro.product.device", "t0lte");
        android::init::property_set("ro.build.description", "t0ltexx-user 4.4.2 KOT49H N7105XXUFOB2 release-keys");
        android::init::property_set("ro.build.fingerprint", "samsung/t0ltexx/t0lte:4.4.2/KOT49H/N7105XXUFOB2:user/release-keys");
        android::init::property_set("ro.build.product", "t0lte");
    }
    //std::string device = android::base::GetProperty("ro.product.device", "");
    //INFO("Setting device to %s\n", device.c_str());
}
