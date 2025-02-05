/*
 * Copyright © 2024 Pierre Le Marre
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <stdbool.h>

#ifdef _WIN32
#define PATH_SEPARATOR '\\'
#define ALT_PATH_SEPARATOR '/'
#define is_path_separator(s) \
    ((s) == PATH_SEPARATOR || (s) == ALT_PATH_SEPARATOR)
#else
#define PATH_SEPARATOR '/'
#define is_path_separator(s) ((s) == PATH_SEPARATOR)
#endif

bool
is_absolute(const char *path);
