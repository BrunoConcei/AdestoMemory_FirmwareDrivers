/******************************************************************************
 * @file hex_dump.c
 * @brief Adesto Serial Flash Demo
 * @author Embedded Masters
 * @version 1.0
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2016 Embedded Masters LLC, http://www.embeddedmasters.com</b>
 *******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Embedded Masters has no
 * obligation to support this Software. Embedded Masters is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Embedded Masters will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 ******************************************************************************/

#include <inttypes.h>
#include <stdio.h>

#include "hex_dump.h"

/***************************************************************************//**
* @addtogroup AppManagement
* @{
*******************************************************************************/

/***************************************************************************//**
* @addtogroup Hex_Dump
* @{
*******************************************************************************/

/***************************************************************************//**
* @brief
*	Print Hex Data
*
* @param[in] *buf
* 		Pointer to Buffer to print out
* @param[in] len
* 		Length of Buffer to print
* @param[in] addr_offset
* 		Address offset
*
*
******************************************************************************/
void hex_dump(uint8_t *buf, size_t len, uint32_t addr_offset)
{
  uint32_t i;
  int j;
  for (i = 0; i < len; i += 16)
  {
	printf("%08" PRIx32 ":", addr_offset + i);
	for (j = 0; j < 16; j++)
	{
	  if (i + j < len)
		printf(" %02" PRIx8 "", buf[i+j]);
	  else
		printf("   ");
	}
	printf("\r\n");
  }
}

/** @} (end addtogroup Hex_Dump) */
/** @} (end addtogroup AppManagement) */
