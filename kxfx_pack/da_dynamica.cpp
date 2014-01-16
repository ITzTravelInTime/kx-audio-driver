// kX Driver / kX Driver Interface / kX Driver Effects Library
// Copyright (c) Eugene Gavrilov and Max Mikhailov, 2001-2005.
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

// Dynamica
// (c) eYagos, 2003-2004. All rights reserved

// 10kX microcode
// Patch name: 'dynamica'

char *dynamica_copyright="by eYagos - Copyright (c) 2003-2004, All rights reserved";
char *dynamica_engine="EMU10K1_A0";
char *dynamica_comment="Dynamics Processor Agent v2.0";
char *dynamica_created="11/16/2003";
char *dynamica_guid="88bbe0dc-d6d5-4468-86f1-eb5a2658eb42";

char *dynamica_name="Dynamics Processor";
int dynamica_itramsize=400,dynamica_xtramsize=0;

#ifndef KX_INTERNAL	// why?..

	#define R_AttackL	0x8003
	#define R_ReleaseL	0x8004
	#define R_Attack	0x8005
	#define R_Release	0x8006
	
	#define R_Thres1	0x8007
	#define R_Thres2	0x8008

	#define R_Rat1		0x8009
	#define R_Rat1i		0x800a
	#define R_Rat1s		0x800b
	
	#define R_Rat2		0x800c
	#define R_Rat2i		0x800d
	#define R_Rat2s		0x800e

	#define R_Rat3		0x800f
	#define R_Rat3i		0x8010
	#define R_Rat3s		0x8011

	#define R_Offset	0x8012
	#define R_GAIN_I	0x8013
	#define R_GAIN_F	0x8014
	#define R_Level		0x8015

	#define	R_B			0x8018

	#define R_soft_long 0x801d
	#define R_v_medio1  0x801e
	#define R_v_medio2	0x801f

	#define	R_gainCLIP	0x8021
	#define R_incCLIP	0x8022

	#define R_tmp1		0x8025
	#define R_tmp2		0x8026

	#define R_delW1		0x802a
	#define R_delR1		0x802c
	#define R_delW2		0x802e
	#define R_delR2		0x8030

	#define I_CLIP		0x56
	
#endif

dsp_register_info dynamica_info[]={
	{ "in0",0x4000,0x7,0xffff,0x0 },
	{ "in1",0x4001,0x7,0xffff,0x0 },
	{ "in2",0x4002,0x7,0xffff,0x0 },
	{ "in3",0x4003,0x7,0xffff,0x0 },
	{ "out0",0x8000,0x8,0xffff,0x0 },
	{ "out1",0x8001,0x8,0xffff,0x0 },
	{ "Res",0x8002,0x1,0xffff,0x1f },
	{ "AttackL",0x8003,0x1,0xffff,0x70facd17 },
	{ "ReleaseL",0x8004,0x1,0xffff,0x7ff92f09 },
	{ "Attack",0x8005,0x1,0xffff,0x7f3420d0 },
	{ "Release",0x8006,0x1,0xffff,0x7ff5c6b1 },
	{ "Thres1",0x8007,0x1,0xffff,0x77c59c0f },
	{ "Thres2",0x8008,0x1,0xffff,0x35497e52 },
	{ "Rat1",0x8009,0x1,0xffff,0x0 },
	{ "Rat1i",0x800a,0x1,0xffff,0x1 },
	{ "Rat1s",0x800b,0x1,0xffff,0x7fffffff },
	{ "Rat2",0x800c,0x1,0xffff,0x2aaaaaaa },
	{ "Rat2i",0x800d,0x1,0xffff,0x0 },
	{ "Rat2s",0x800e,0x1,0xffff,0x7fffffff },
	{ "Rat3",0x800f,0x1,0xffff,0x0 },
	{ "Rat3i",0x8010,0x1,0xffff,0x5 },
	{ "Rat3s",0x8011,0x1,0xffff,0x7fffffff },
	{ "Offset",0x8012,0x1,0xffff,0x619c3cd0 },
	{ "GAIN_I",0x8013,0x1,0xffff,0x1 },
	{ "GAIN_F",0x8014,0x1,0xffff,0x0 },
	{ "Level",0x8015,0x1,0xffff,0x0 },
	{ "GaindB",0x8016,0x1,0xffff,0x0 },
	{ "A",0x8017,0x1,0xffff,0x4 },
	{ "B",0x8018,0x1,0xffff,0x7ffffff },
	{ "C",0x8019,0x1,0xffff,0xc },
	{ "D",0x801a,0x1,0xffff,0x4fffffff },
	{ "E",0x801b,0x1,0xffff,0xee000000 },
	{ "F",0x801c,0x1,0xffff,0x72352fce },
	{ "soft_long",0x801d,0x1,0xffff,0x28 },
	{ "v_medio1",0x801e,0x1,0xffff,0x0 },
	{ "v_medio2",0x801f,0x1,0xffff,0x0 },
	{ "min",0x8020,0x1,0xffff,0xd6 },
	{ "gainCLIP",0x8021,0x1,0xffff,0x7fffffff },
	{ "incCLIP",0x8022,0x1,0xffff,0xdeb7d40 },
	{ "mon_LEV",0x8023,0x1,0xffff,0x0 },
	{ "_AC15",0x8024,0x1,0xffff,0x15 },
	{ "tmp1",0x8025,0x3,0xffff,0x0 },
	{ "tmp2",0x8026,0x3,0xffff,0x0 },
	{ "tmp3",0x8027,0x3,0xffff,0x0 },
	{ "tmp4",0x8028,0x3,0xffff,0x0 },
	{ "tmp5",0x8029,0x3,0xffff,0x0 },
	{ "delW1",0x802a,0x49,0xffff,0x0 },
	{ "&delW1",0x802b,0xb,0xffff,0x0 },
	{ "delR1",0x802c,0x29,0xffff,0x92 },
	{ "&delR1",0x802d,0xb,0xffff,0x92 },
	{ "delW2",0x802e,0x49,0xffff,0xc8 },
	{ "&delW2",0x802f,0xb,0xffff,0xc8 },
	{ "delR2",0x8030,0x29,0xffff,0x15a },
	{ "&delR2",0x8031,0xb,0xffff,0x15a },
};

dsp_code dynamica_code[]={
	{ 0x0,0x8025,0x4000,0x2040,0x2040 },
	{ 0x0,0x8026,0x4001,0x2040,0x2040 },
	{ 0x0,0x802a,0x8025,0x2040,0x2040 },
	{ 0x0,0x802e,0x8026,0x2040,0x2040 },
	{ 0x9,0x8025,0x8025,0x8025,0x2040 },
	{ 0x9,0x8026,0x8026,0x8026,0x2040 },
	{ 0xe,0x8025,0x8025,0x204d,0x8026 },
	{ 0xa,0x8023,0x8025,0x8025,0x8023 },
	{ 0xc,0x8025,0x8025,0x8002,0x2040 },
	{ 0x9,0x8026,0x8025,0x8003,0x8015 },
	{ 0xa,0x8026,0x2040,0x8004,0x8026 },
	{ 0xe,0x8015,0x8025,0x8026,0x8015 },
	{ 0x1,0x8028,0x8015,0x8007,0x204f },
	{ 0x9,0x8025,0x800b,0x8028,0x2040 },
	{ 0x4,0x8026,0x8007,0x8025,0x800a },
	{ 0x0,0x8026,0x8026,0x8025,0x8009 },
	{ 0xa,0x8026,0x8026,0x8026,0x8020 },
	{ 0x9,0x8025,0x800e,0x8028,0x2040 },
	{ 0x4,0x8027,0x8007,0x8025,0x800d },
	{ 0x0,0x8027,0x8027,0x8025,0x800c },
	{ 0xa,0x8027,0x8027,0x8027,0x8020 },
	{ 0x9,0x8025,0x8028,0x8026,0x2040 },
	{ 0xa,0x8025,0x2040,0x8027,0x8025 },
	{ 0x1,0x8029,0x8015,0x8008,0x204f },
	{ 0x9,0x8026,0x8011,0x8029,0x2040 },
	{ 0x4,0x8027,0x8012,0x8026,0x8010 },
	{ 0x0,0x8027,0x8027,0x8026,0x800f },
	{ 0xa,0x8027,0x8027,0x8027,0x8020 },
	{ 0x9,0x8026,0x8029,0x8025,0x2040 },
	{ 0xa,0x8026,0x2040,0x8027,0x8026 },
	{ 0x9,0x8027,0x8028,0x8028,0x2040 },
	{ 0x4,0x8027,0x204e,0x8027,0x801d },
	{ 0xb,0x8027,0x8027,0x8027,0x2040 },
	{ 0x0,0x8027,0x2040,0x8027,0x8027 },
	{ 0x1,0x8026,0x8026,0x801e,0x8027 },
	{ 0x9,0x8027,0x8029,0x8029,0x2040 },
	{ 0x4,0x8027,0x204e,0x8027,0x801d },
	{ 0xb,0x8027,0x8027,0x8027,0x2040 },
	{ 0x0,0x8027,0x2040,0x8027,0x8027 },
	{ 0x1,0x8026,0x8026,0x801f,0x8027 },
	{ 0x1,0x8025,0x8026,0x8015,0x204f },
	{ 0x9,0x8026,0x2040,0x8025,0x8025 },
	{ 0x9,0x8027,0x2040,0x8016,0x8016 },
	{ 0x9,0x8027,0x8026,0x8006,0x8027 },
	{ 0xa,0x8027,0x2040,0x8005,0x8027 },
	{ 0xe,0x8016,0x8025,0x8027,0x8016 },
	{ 0x0,0x8029,0x204f,0x8016,0x204f },
	{ 0xd,0x8029,0x8029,0x8002,0x2040 },
	{ 0x4,0x8028,0x2041,0x2040,0x2040 },
	{ 0x0,0x8027,0x8016,0x2040,0x2040 },
	{ 0xf,0x2057,0x2057,0x2044,0x8024 },
	{ 0x4,0x8028,0x8017,0x2040,0x2040 },
	{ 0x1,0x8025,0x8027,0x8018,0x204f },
	{ 0xf,0x2057,0x2057,0x2044,0x2042 },
	{ 0x4,0x8028,0x2040,0x8028,0x8017 },
	{ 0x1,0x8027,0x8027,0x8018,0x204f },
	{ 0x1,0x8025,0x8027,0x8018,0x204f },
	{ 0xf,0x2057,0x2057,0x2044,0x2042 },
	{ 0x4,0x8028,0x2040,0x8028,0x8017 },
	{ 0x1,0x8027,0x8027,0x8018,0x204f },
	{ 0x1,0x8025,0x8027,0x8018,0x204f },
	{ 0xf,0x2057,0x2057,0x2044,0x2042 },
	{ 0x4,0x8028,0x2040,0x8028,0x8017 },
	{ 0x1,0x8027,0x8027,0x8018,0x204f },
	{ 0x1,0x8025,0x8027,0x8018,0x204f },
	{ 0xf,0x2057,0x2057,0x2044,0x2042 },
	{ 0x4,0x8028,0x2040,0x8028,0x8017 },
	{ 0x1,0x8027,0x8027,0x8018,0x204f },
	{ 0x4,0x8025,0x204c,0x8027,0x8019 },
	{ 0x1,0x8026,0x8025,0x801a,0x204f },
	{ 0x0,0x8026,0x801b,0x8026,0x8026 },
	{ 0x0,0x8029,0x8025,0x8026,0x801c },
	{ 0x0,0x8025,0x2040,0x802c,0x8029 },
	{ 0x4,0x8025,0x2040,0x8025,0x8028 },
	{ 0x0,0x8026,0x2040,0x8030,0x8029 },
	{ 0x4,0x8026,0x2040,0x8026,0x8028 },
	{ 0x4,0x8027,0x2040,0x8025,0x8013 },
	{ 0x0,0x8028,0x8027,0x8025,0x8014 },
	{ 0x4,0x8027,0x2040,0x8026,0x8013 },
	{ 0x0,0x8029,0x8027,0x8026,0x8014 },
	{ 0x9,0x8025,0x8028,0x8028,0x2040 },
	{ 0x9,0x8026,0x8029,0x8029,0x2040 },
	{ 0xa,0x8025,0x8025,0x8025,0x8026 },
	{ 0x0,0x8025,0x2040,0x8025,0x8021 },
	{ 0x1,0x8025,0x8025,0x204c,0x204f },
	{ 0xf,0x2057,0x2057,0x2044,0x2041 },
	{ 0x1,0x8021,0x8021,0x8021,0x8022 },
	{ 0x0,0x8000,0x2040,0x8028,0x8021 },
	{ 0x0,0x8001,0x2040,0x8029,0x8021 },
};