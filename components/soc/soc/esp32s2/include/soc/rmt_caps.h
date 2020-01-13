// Copyright 2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define RMT_CHANNEL_MEM_WORDS (64) /*!< Each channel owns 64 words memory */
#define RMT_CHANNELS_NUM (4)       /*!< Total 4 channels */
#define RMT_SUPPORT_RX_PINGPONG_MODE (1)
#define RMT_SUPPORT_RX_DEMODULATION  (1)

#ifdef __cplusplus
}
#endif
