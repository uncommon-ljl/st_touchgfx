/*
 * Copyright (c) 2019 MS-RTOS Team.
 * All rights reserved.
 *
 * Detailed license information can be found in the LICENSE file.
 *
 * File: main.c TouchGFX application main.
 *
 * Author: Jiao.jinxing <jiaojixing@acoinfo.com>
 *
 */

#include <ms_rtos.h>
#include "app_touchgfx.h"

int main(int argc, char **argv)
{
    MX_TouchGFX_Init();

    while (MS_TRUE) {
        MX_TouchGFX_Process();
    }

    return 0;
}
