// Copyright 2020-2022 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _IOT_FILE_MANAGER_H_
#define _IOT_FILE_MANAGER_H_

#include "esp_err.h"
#include "esp_spiffs.h"
#include "esp_vfs.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SPIFFS_MOUNT_POINT  "/spiffs"
#define SD_CARD_MOUNT_POINT "/sdcard"

esp_err_t fm_sdcard_init(void);
esp_err_t fm_spiffs_init(void);
void fm_print_dir(char *direntName, int level);
const char *fm_get_basepath(void);
const char *fm_get_filename(const char *file);
size_t fm_get_file_size(const char *filepath);
esp_err_t fm_file_table_create(char ***list_out, uint16_t *files_number, const char *filter_suffix);
esp_err_t fm_file_table_free(char ***list,uint16_t files_number);
esp_err_t fm_unmount_sdcard(void);

#ifdef __cplusplus
}
#endif

#endif

