// kX Driver / kX Driver Interface / kX Driver Effects Library
// Copyright (c) Eugene Gavrilov, Hanz Petrov and Max Mikhailov, 2001-2005.
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

// 10kX microcode
// Patch name: 'apscomp'

char *apscomp_copyright="Copyright 1998 E-mu Systems/Creative Technology, Ltd.";
char *apscomp_engine="EMU10K1_A0";
char *apscomp_comment="APS Diet Compressor, DLLed by Hanz Petrov, Oct 2002";
char *apscomp_created="Fri Jul 13 12:59:04 2001 ";
char *apscomp_guid="441a09a2-3d0b-11d6-a4c7-8fae6d701845";

char *apscomp_name="APS Compressor";
int apscomp_itramsize=400,apscomp_xtramsize=0;

dsp_register_info apscomp_info[]={
	{ "in0",0x4000,0x7,0xffff,0x0 },
	{ "in1",0x4001,0x7,0xffff,0x0 },
	{ "out0",0x8000,0x8,0xffff,0x0 },
	{ "out1",0x8001,0x8,0xffff,0x0 },
	{ "sti8002",0x8002,0x1,0xffff,0x1f },
	{ "dyn8003",0x8003,0x1,0xffff,0x7f632fc3 },
	{ "dyn8004",0x8004,0x1,0xffff,0x7ff82436 },
	{ "dyn8005",0x8005,0x1,0xffff,0x7fffffff },
	{ "dyn8006",0x8006,0x1,0xffff,0x0 },
	{ "dyn8007",0x8007,0x1,0xffff,0x0 },
	{ "dyn8008",0x8008,0x1,0xffff,0x72b6587b },
	{ "dyn8009",0x8009,0x1,0xffff,0x55555553 },
	{ "dyn800a",0x800a,0x1,0xffff,0x0 },
	{ "dyn800b",0x800b,0x1,0xffff,0x7fffffff },
	{ "tmp8014",0x800c,0x3,0xffff,0x0 },
	{ "tmp8015",0x800d,0x3,0xffff,0x0 },
	{ "tmp8016",0x800e,0x3,0xffff,0x0 },
	{ "itr800c",0x800f,0x49,0xffff,0x0 },
	{ "&itr800c",0x8010,0xb,0xffff,0x0 },
	{ "itr8010",0x8011,0x29,0xffff,0x2 },
	{ "&itr8010",0x8012,0xb,0xffff,0x2 },
	{ "itr800e",0x8013,0x49,0xffff,0xc8 },
	{ "&itr800e",0x8014,0xb,0xffff,0xc8 },
	{ "itr8012",0x8015,0x29,0xffff,0xca },
	{ "&itr8012",0x8016,0xb,0xffff,0xca },
};

dsp_code apscomp_code[]={
	{ 0x0,0x800c,0x4000,0x2040,0x2040 },
	{ 0x0,0x800d,0x4001,0x2040,0x2040 },
	{ 0x0,0x800f,0x800c,0x2040,0x2040 },
	{ 0x0,0x8013,0x800d,0x2040,0x2040 },
	{ 0x9,0x800c,0x800c,0x800c,0x2040 },
	{ 0x9,0x800d,0x800d,0x800d,0x2040 },
	{ 0xe,0x800c,0x800c,0x204d,0x800d },
	{ 0xc,0x800c,0x800c,0x8002,0x2041 },
	{ 0xa,0x800a,0x800c,0x800c,0x800a },
	{ 0x9,0x800d,0x800c,0x8003,0x8007 },
	{ 0xa,0x800d,0x2040,0x8004,0x800d },
	{ 0xe,0x8007,0x800c,0x800d,0x8007 },
	{ 0xa,0x800e,0x8007,0x8007,0x8008 },
	{ 0x0,0x800e,0x8008,0x800e,0x204e },
	{ 0x0,0x800e,0x204f,0x800e,0x8009 },
	{ 0xb,0x800b,0x800e,0x800e,0x800b },
	{ 0xd,0x800e,0x800e,0x8002,0x2040 },
	{ 0x0,0x8000,0x2040,0x8011,0x800e },
	{ 0x0,0x8001,0x2040,0x8015,0x800e },
	{ 0x4,0x800c,0x2040,0x8000,0x8005 },
	{ 0x0,0x8000,0x800c,0x8000,0x8006 },
	{ 0x4,0x800c,0x2040,0x8001,0x8005 },
	{ 0x0,0x8001,0x800c,0x8001,0x8006 },
};

#define _ATTACK_TIME	0x8003
#define _RELEASE_TIME	0x8004
#define _POST_GAIN_1	0x8005
#define _POST_GAIN_2	0x8006
#define _THRESHOLD		0x8008
#define _RATIO			0x8009

#define _R_PREDELAY_LW	0x800F
#define _R_PREDELAY_LR	0x8011
#define _R_PREDELAY_RW	0x8013
#define _R_PREDELAY_RR	0x8015
