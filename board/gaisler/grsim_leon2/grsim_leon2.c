/*
 * GRSIM/TSIM board
 *
 * (C) Copyright 2007
 * Daniel Hellstrom, Gaisler Research, daniel@gaisler.com.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/leon.h>

int initdram(void)
{
	/* Does not set gd->ram_size here */

	return 0;
}

int checkboard(void)
{
	puts("Board: GRSIM/TSIM LEON2\n");
	return 0;
}

int misc_init_r(void)
{
	return 0;
}
