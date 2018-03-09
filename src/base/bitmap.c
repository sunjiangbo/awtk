﻿/**
 * File:   bitmap.c
 * Author: Li XianJing <xianjimli@hotmail.com>
 * Brief:  bitmap interface
 *
 * Copyright (c) 2018 - 2018  Li XianJing <xianjimli@hotmail.com>
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-01-13 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "base/bitmap.h"

ret_t image_loader_load(image_loader_t* loader, const char* name, bitmap_t* bitmap) {
  return_value_if_fail(loader != NULL && name != NULL && loader->load != NULL && bitmap != NULL,
                       RET_BAD_PARAMS);

  return loader->load(loader, name, bitmap);
}

ret_t bitmap_destroy(bitmap_t* bitmap) {
  return_value_if_fail(bitmap != NULL && bitmap->destroy != NULL, RET_BAD_PARAMS);

  return bitmap->destroy(bitmap);
}
