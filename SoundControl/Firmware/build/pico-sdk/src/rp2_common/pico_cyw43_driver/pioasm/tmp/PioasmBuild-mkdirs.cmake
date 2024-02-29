# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/mnt/d/sdk/pico-sdk/tools/pioasm"
  "/mnt/d/hardware/SoundControl/Firmware/build/pioasm"
  "/mnt/d/hardware/SoundControl/Firmware/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm"
  "/mnt/d/hardware/SoundControl/Firmware/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/tmp"
  "/mnt/d/hardware/SoundControl/Firmware/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp"
  "/mnt/d/hardware/SoundControl/Firmware/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src"
  "/mnt/d/hardware/SoundControl/Firmware/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/mnt/d/hardware/SoundControl/Firmware/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/mnt/d/hardware/SoundControl/Firmware/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp${cfgdir}") # cfgdir has leading slash
endif()
