/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

/***
  This file is part of systemd.

  Copyright 2010 Lennart Poettering
***/

#include <stdbool.h>

#include "macro.h"

int pager_open(bool no_pager, bool jump_to_end);
void pager_close(void);
bool pager_have(void) _pure_;

int show_man_page(const char *page, bool null_stdio);
