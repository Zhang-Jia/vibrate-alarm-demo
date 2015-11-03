/*******************************************************
 * File name: peri_key.c
 * Author: Chongguang Li
 * Versions:1.0
 * Description:This is the key function module.

 * History:
 *   1.Date:
 *     Author:
 *     Modification:
 *********************************************************/
#include "peri_key.h"
#include "user_interface.h"
#include "eagle_soc.h"
#include "driver/key.h"
#include "os_type.h"
#include "mem.h"
#include "driver/tisan_gpio_intr.h"
 
struct key_param *g_single_key = NULL;

/******************************************************************************
 * FunctionName : user_plug_short_press
 * Description  : key's short press function, needed to be installed
 * Parameters   : none
 * Returns      : none
*******************************************************************************/
void ICACHE_FLASH_ATTR
peri_key_short_press(void)
{
	  PRINTF("short\n");
}

/******************************************************************************
 * FunctionName : user_plug_long_press
 * Description  : key's long press function, needed to be installed, preserved function.
 * Parameters   : none
 * Returns      : none
*******************************************************************************/

void ICACHE_FLASH_ATTR
peri_key_long_press(void)
{
	  PRINTF("long\n");
}
/******************************************************************************
 * FunctionName : peri_key_init.
 * Description  : initilaize the key.
 * Parameters   : none
 * Returns      : none
*******************************************************************************/
void ICACHE_FLASH_ATTR
peri_key_init(struct keys_param *keys)
{
	PRINTF("enter into peri_key_init\n");
    key_init(keys);
}
