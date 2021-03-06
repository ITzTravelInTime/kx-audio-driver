// kX DSP Generated file

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
// Patch name: 'rev'

char *rev_copyright="Copyright Martin Borisov (c) 2004.";
// NOTE: The present DSP microcode dump is protected by the 
// license agreement bundled with the appropriate software 
// package containing this microcode,
// regardless the particular copyright notice is present in the dump.

char *rev_engine="kX";
char *rev_comment="martintiger@abv.bg, http://www.angelfire.com/jazz/tigersplace/Reverb.htm";
char *rev_created="";
char *rev_guid="4b430233-0573-4ea4-8dff-a196ad09f906";

char *rev_name="EFX ReverbStation";
int rev_itramsize=3824,rev_xtramsize=79371;

#define INLEV_P 0x8002 
#define ERLEV_P 0x801b 
#define REVLEV_P 0x801c 
#define DRYLEV_P 0x801d
#define BAND_P 0x8018

#define PRE_L_P 0x80b9
#define PRE_R_P 0x80bd
#define PRE_LWR_P 0x80b7
#define PRE_RWR_P 0x80bb

#define DIFF_P 0x8019
#define DAMP_P 0x801a

#define TAP1_P 0x802a
#define TAP2_P 0x802b
#define TAP3_P 0x802c
#define TAP4_P 0x802d
#define TAP5_P 0x802e
#define TAP6_P 0x802f
#define INT_P 0x8030
#define FRAC_P 0x8031

#define G1_P 0x8032
#define G2_P 0x8033
#define G3_P 0x8034
#define G4_P 0x8035
#define G5_P 0x8036
#define G6_P 0x8037
#define G7_P 0x8038
#define G8_P 0x8039
#define G9_P 0x803a
#define G10_P 0x803b
#define G11_P 0x803c
#define G12_P 0x803d
#define G13_P 0x803e
#define G14_P 0x803f

dsp_register_info rev_info[]={
	{ "inl",0x4000,0x7,0xffff,0x0 },
	{ "inr",0x4001,0x7,0xffff,0x0 },
	{ "outl",0x8000,0x8,0xffff,0x0 },
	{ "outr",0x8001,0x8,0xffff,0x0 },
	{ "in_level",0x8002,0x1,0xffff,0x7fffffff },
	{ "left_out",0x8003,0x1,0xffff,0x0 },
	{ "left_in",0x8004,0x1,0xffff,0x0 },
	{ "right_out",0x8005,0x1,0xffff,0x0 },
	{ "right_in",0x8006,0x1,0xffff,0x0 },
	{ "coef",0x8007,0x1,0xffff,0x5a827999 },
	{ "a1_l",0x8008,0x1,0xffff,0x0 },
	{ "a2_l",0x8009,0x1,0xffff,0x0 },
	{ "a3_l",0x800a,0x1,0xffff,0x0 },
	{ "a4_l",0x800b,0x1,0xffff,0x0 },
	{ "a1_r",0x800c,0x1,0xffff,0x0 },
	{ "a2_r",0x800d,0x1,0xffff,0x0 },
	{ "a3_r",0x800e,0x1,0xffff,0x0 },
	{ "a4_r",0x800f,0x1,0xffff,0x0 },
	{ "a5_l",0x8010,0x1,0xffff,0x0 },
	{ "a5_r",0x8011,0x1,0xffff,0x0 },
	{ "d7_l",0x8012,0x1,0xffff,0x0 },
	{ "d7_r",0x8013,0x1,0xffff,0x0 },
	{ "l8_l",0x8014,0x1,0xffff,0x0 },
	{ "l8_r",0x8015,0x1,0xffff,0x0 },
	{ "band_l",0x8016,0x1,0xffff,0x0 },
	{ "band_r",0x8017,0x1,0xffff,0x0 },
	{ "band",0x8018,0x1,0xffff,0x3a6f1f30 },
	{ "diff",0x8019,0x1,0xffff,0x5a5a5a5a },
	{ "damping",0x801a,0x1,0xffff,0x28888888 },
	{ "ER_level",0x801b,0x1,0xffff,0x6666666 },
	{ "WET",0x801c,0x1,0xffff,0x53333333 },
	{ "DRY",0x801d,0x1,0xffff,0x55555555 },
	{ "st1",0x801e,0x1,0xffff,0x0 },
	{ "st2",0x801f,0x1,0xffff,0x0 },
	{ "st3",0x8020,0x1,0xffff,0x0 },
	{ "st4",0x8021,0x1,0xffff,0x0 },
	{ "st5",0x8022,0x1,0xffff,0x0 },
	{ "st6",0x8023,0x1,0xffff,0x0 },
	{ "st7",0x8024,0x1,0xffff,0x0 },
	{ "st8",0x8025,0x1,0xffff,0x0 },
	{ "st9",0x8026,0x1,0xffff,0x0 },
	{ "st10",0x8027,0x1,0xffff,0x0 },
	{ "st11",0x8028,0x1,0xffff,0x0 },
	{ "st12",0x8029,0x1,0xffff,0x0 },
	{ "tap1",0x802a,0x1,0xffff,0x0 },
	{ "tap2",0x802b,0x1,0xffff,0x0 },
	{ "tap3",0x802c,0x1,0xffff,0x4444444 },
	{ "tap4",0x802d,0x1,0xffff,0x8888888 },
	{ "tap5",0x802e,0x1,0xffff,0x64444444 },
	{ "tap6",0x802f,0x1,0xffff,0x7fffffff },
	{ "int",0x8030,0x1,0xffff,0x1 },
	{ "frac",0x8031,0x1,0xffff,0x40000000 },
	{ "g1",0x8032,0x1,0xffff,0x7a963106 },
	{ "g2",0x8033,0x1,0xffff,0x794b8c84 },
	{ "g3",0x8034,0x1,0xffff,0x720dc973 },
	{ "g4",0x8035,0x1,0xffff,0x6ce31c5a },
	{ "g5",0x8036,0x1,0xffff,0x5dd2b963 },
	{ "g6",0x8037,0x1,0xffff,0x67dbda5b },
	{ "g7",0x8038,0x1,0xffff,0x6204d8c7 },
	{ "g8",0x8039,0x1,0xffff,0x7cd3d154 },
	{ "g9",0x803a,0x1,0xffff,0x768d6346 },
	{ "g10",0x803b,0x1,0xffff,0x7228b104 },
	{ "g11",0x803c,0x1,0xffff,0x6cd646d8 },
	{ "g12",0x803d,0x1,0xffff,0x5e0a17d2 },
	{ "g13",0x803e,0x1,0xffff,0x66af8a0f },
	{ "g14",0x803f,0x1,0xffff,0x61d6aaa6 },
	{ "result_l",0x8040,0x1,0xffff,0x0 },
	{ "result_r",0x8041,0x1,0xffff,0x0 },
	{ "resolution",0x8042,0x1,0xffff,0x1f },
	{ "_AC6ba5e353",0x8043,0x5,0xffff,0x6ba5e353 },
	{ "_AC4083126e",0x8044,0x5,0xffff,0x4083126e },
	{ "_AC3eb851eb",0x8045,0x5,0xffff,0x3eb851eb },
	{ "_AC3083126e",0x8046,0x5,0xffff,0x3083126e },
	{ "_AC30a3d709",0x8047,0x5,0xffff,0x30a3d709 },
	{ "_AC2c49ba5d",0x8048,0x5,0xffff,0x2c49ba5d },
	{ "_AC24fdf3b5",0x8049,0x5,0xffff,0x24fdf3b5 },
	{ "_AC22d0e55f",0x804a,0x5,0xffff,0x22d0e55f },
	{ "_AC189374bc",0x804b,0x5,0xffff,0x189374bc },
	{ "_AC18b43957",0x804c,0x5,0xffff,0x18b43957 },
	{ "_AC1bc6a7ef",0x804d,0x5,0xffff,0x1bc6a7ef },
	{ "_AC172b020c",0x804e,0x5,0xffff,0x172b020c },
	{ "_AC170a3d70",0x804f,0x5,0xffff,0x170a3d70 },
	{ "_AC16872b01",0x8050,0x5,0xffff,0x16872b01 },
	{ "_AC122d0e55",0x8051,0x5,0xffff,0x122d0e55 },
	{ "_AC15604189",0x8052,0x5,0xffff,0x15604189 },
	{ "_AC1126e978",0x8053,0x5,0xffff,0x1126e978 },
	{ "inl_tmp",0x8054,0x3,0xffff,0x0 },
	{ "inr_tmp",0x8055,0x3,0xffff,0x0 },
	{ "ER",0x8056,0x3,0xffff,0x0 },
	{ "tmp",0x8057,0x3,0xffff,0x0 },
	{ "tmp2",0x8058,0x3,0xffff,0x0 },
	{ "wr1",0x8059,0x49,0xffff,0x0 },
	{ "&wr1",0x805a,0xb,0xffff,0x0 },
	{ "rd1",0x805b,0x29,0xffff,0xcf },
	{ "&rd1",0x805c,0xb,0xffff,0xcf },
	{ "rd2",0x805d,0x29,0xffff,0x409 },
	{ "&rd2",0x805e,0xb,0xffff,0x409 },
	{ "rd3",0x805f,0x29,0xffff,0x438 },
	{ "&rd3",0x8060,0xb,0xffff,0x438 },
	{ "rd4",0x8061,0x29,0xffff,0x507 },
	{ "&rd4",0x8062,0xb,0xffff,0x507 },
	{ "rd5",0x8063,0x29,0xffff,0x511 },
	{ "&rd5",0x8064,0xb,0xffff,0x511 },
	{ "rd6",0x8065,0x29,0xffff,0x597 },
	{ "&rd6",0x8066,0xb,0xffff,0x597 },
	{ "rd7",0x8067,0x29,0xffff,0x897 },
	{ "&rd7",0x8068,0xb,0xffff,0x897 },
	{ "rd8",0x8069,0x29,0xffff,0x918 },
	{ "&rd8",0x806a,0xb,0xffff,0x918 },
	{ "rd9",0x806b,0x29,0xffff,0xaba },
	{ "&rd9",0x806c,0xb,0xffff,0xaba },
	{ "rd10",0x806d,0x29,0xffff,0xb02 },
	{ "&rd10",0x806e,0xb,0xffff,0xb02 },
	{ "rd11",0x806f,0x29,0xffff,0xb28 },
	{ "&rd11",0x8070,0xb,0xffff,0xb28 },
	{ "rd12",0x8071,0x29,0xffff,0xb7a },
	{ "&rd12",0x8072,0xb,0xffff,0xb7a },
	{ "rd13",0x8073,0x29,0xffff,0xd41 },
	{ "&rd13",0x8074,0xb,0xffff,0xd41 },
	{ "rd14",0x8075,0x29,0xffff,0xd46 },
	{ "&rd14",0x8076,0xb,0xffff,0xd46 },
	{ "rd15",0x8077,0x29,0xffff,0xd9c },
	{ "&rd15",0x8078,0xb,0xffff,0xd9c },
	{ "rd16",0x8079,0x29,0xffff,0xde4 },
	{ "&rd16",0x807a,0xb,0xffff,0xde4 },
	{ "rd17",0x807b,0x29,0xffff,0xe1d },
	{ "&rd17",0x807c,0xb,0xffff,0xe1d },
	{ "rd18",0x807d,0x29,0xffff,0xef0 },
	{ "&rd18",0x807e,0xb,0xffff,0xef0 },
	{ "al_wr1",0x807f,0x4a,0xffff,0x0 },
	{ "&al_wr1",0x8080,0xb,0xffff,0x0 },
	{ "al_rd1",0x8081,0x2a,0xffff,0x4cb },
	{ "&al_rd1",0x8082,0xb,0xffff,0x4cb },
	{ "ar_wr1",0x8083,0x4a,0xffff,0x4cc },
	{ "&ar_wr1",0x8084,0xb,0xffff,0x4cc },
	{ "ar_rd1",0x8085,0x2a,0xffff,0x997 },
	{ "&ar_rd1",0x8086,0xb,0xffff,0x997 },
	{ "al_wr2",0x8087,0x4a,0xffff,0x998 },
	{ "&al_wr2",0x8088,0xb,0xffff,0x998 },
	{ "al_rd2",0x8089,0x2a,0xffff,0xfbb },
	{ "&al_rd2",0x808a,0xb,0xffff,0xfbb },
	{ "ar_wr2",0x808b,0x4a,0xffff,0xfbc },
	{ "&ar_wr2",0x808c,0xb,0xffff,0xfbc },
	{ "ar_rd2",0x808d,0x2a,0xffff,0x1699 },
	{ "&ar_rd2",0x808e,0xb,0xffff,0x1699 },
	{ "al_wr3",0x808f,0x4a,0xffff,0x169a },
	{ "&al_wr3",0x8090,0xb,0xffff,0x169a },
	{ "al_rd3",0x8091,0x2a,0xffff,0x1fc2 },
	{ "&al_rd3",0x8092,0xb,0xffff,0x1fc2 },
	{ "ar_wr3",0x8093,0x4a,0xffff,0x1fc3 },
	{ "&ar_wr3",0x8094,0xb,0xffff,0x1fc3 },
	{ "ar_rd3",0x8095,0x2a,0xffff,0x27f2 },
	{ "&ar_rd3",0x8096,0xb,0xffff,0x27f2 },
	{ "al_wr4",0x8097,0x4a,0xffff,0x27f3 },
	{ "&al_wr4",0x8098,0xb,0xffff,0x27f3 },
	{ "al_rd4",0x8099,0x2a,0xffff,0x321c },
	{ "&al_rd4",0x809a,0xb,0xffff,0x321c },
	{ "ar_wr4",0x809b,0x4a,0xffff,0x321d },
	{ "&ar_wr4",0x809c,0xb,0xffff,0x321d },
	{ "ar_rd4",0x809d,0x2a,0xffff,0x3d7b },
	{ "&ar_rd4",0x809e,0xb,0xffff,0x3d7b },
	{ "dl_wr7",0x809f,0x4a,0xffff,0x3d7c },
	{ "&dl_wr7",0x80a0,0xb,0xffff,0x3d7c },
	{ "dl_rd7",0x80a1,0x2a,0xffff,0x46e1 },
	{ "&dl_rd7",0x80a2,0xb,0xffff,0x46e1 },
	{ "dr_wr7",0x80a3,0x4a,0xffff,0x46e2 },
	{ "&dr_wr7",0x80a4,0xb,0xffff,0x46e2 },
	{ "dr_rd7",0x80a5,0x2a,0xffff,0x5047 },
	{ "&dr_rd7",0x80a6,0xb,0xffff,0x5047 },
	{ "al_wr5",0x80a7,0x4a,0xffff,0x5048 },
	{ "&al_wr5",0x80a8,0xb,0xffff,0x5048 },
	{ "al_rd5",0x80a9,0x2a,0xffff,0x5d6b },
	{ "&al_rd5",0x80aa,0xb,0xffff,0x5d6b },
	{ "ar_wr5",0x80ab,0x4a,0xffff,0x5d6c },
	{ "&ar_wr5",0x80ac,0xb,0xffff,0x5d6c },
	{ "ar_rd5",0x80ad,0x2a,0xffff,0x6929 },
	{ "&ar_rd5",0x80ae,0xb,0xffff,0x6929 },
	{ "al_wr6",0x80af,0x4a,0xffff,0x692a },
	{ "&al_wr6",0x80b0,0xb,0xffff,0x692a },
	{ "al_rd6",0x80b1,0x2a,0xffff,0x75c9 },
	{ "&al_rd6",0x80b2,0xb,0xffff,0x75c9 },
	{ "ar_wr6",0x80b3,0x4a,0xffff,0x75ca },
	{ "&ar_wr6",0x80b4,0xb,0xffff,0x75ca },
	{ "ar_rd6",0x80b5,0x2a,0xffff,0x83e9 },
	{ "&ar_rd6",0x80b6,0xb,0xffff,0x83e9 },
	{ "prel_wr",0x80b7,0x4a,0xffff,0x83ea },
	{ "&prel_wr",0x80b8,0xb,0xffff,0x83ea },
	{ "prel_rd",0x80b9,0x2a,0xffff,0x841a },
	{ "&prel_rd",0x80ba,0xb,0xffff,0x841a },
	{ "prer_wr",0x80bb,0x4a,0xffff,0xc58b },
	{ "&prer_wr",0x80bc,0xb,0xffff,0xc58b },
	{ "prer_rd",0x80bd,0x2a,0xffff,0xc5bb },
	{ "&prer_rd",0x80be,0xb,0xffff,0xc5bb },
};

dsp_code rev_code[]={
	{ 0x0,0x8054,0x2040,0x4000,0x8002 },
	{ 0x0,0x8055,0x2040,0x4001,0x8002 },
	{ 0xe,0x8016,0x8054,0x8018,0x8016 },
	{ 0xe,0x8017,0x8055,0x8018,0x8017 },
	{ 0x0,0x80b7,0x8016,0x2040,0x2040 },
	{ 0x0,0x80bb,0x8017,0x2040,0x2040 },
	{ 0x0,0x2040,0x2040,0x805b,0x8043 },
	{ 0x0,0x2040,0x2056,0x805d,0x8044 },
	{ 0x0,0x2040,0x2056,0x805f,0x8045 },
	{ 0x0,0x2040,0x2056,0x8061,0x8046 },
	{ 0x0,0x2040,0x2056,0x8063,0x8047 },
	{ 0x0,0x2040,0x2056,0x8065,0x8048 },
	{ 0x0,0x2040,0x2056,0x8067,0x8049 },
	{ 0x0,0x2040,0x2056,0x8069,0x804a },
	{ 0x0,0x2040,0x2056,0x806b,0x804b },
	{ 0x0,0x2040,0x2056,0x806d,0x804c },
	{ 0x0,0x2040,0x2056,0x806f,0x804d },
	{ 0x0,0x2040,0x2056,0x8071,0x804e },
	{ 0x0,0x2040,0x2056,0x8073,0x804f },
	{ 0x0,0x2040,0x2056,0x8075,0x804e },
	{ 0x0,0x2040,0x2056,0x8077,0x8050 },
	{ 0x0,0x2040,0x2056,0x8079,0x8051 },
	{ 0x0,0x2040,0x2056,0x807b,0x8052 },
	{ 0x0,0x8056,0x2056,0x807d,0x8053 },
	{ 0xe,0x8059,0x80b9,0x204d,0x80bd },
	{ 0x0,0x8008,0x8081,0x8004,0x8019 },
	{ 0x1,0x8057,0x8004,0x8008,0x8019 },
	{ 0xe,0x801e,0x8057,0x801a,0x801e },
	{ 0x0,0x807f,0x2040,0x801e,0x8032 },
	{ 0x0,0x8009,0x8089,0x8008,0x8019 },
	{ 0x1,0x8057,0x8008,0x8009,0x8019 },
	{ 0xe,0x801f,0x8057,0x801a,0x801f },
	{ 0x0,0x8087,0x2040,0x801f,0x8033 },
	{ 0x0,0x800a,0x8091,0x8009,0x8019 },
	{ 0x1,0x8057,0x8009,0x800a,0x8019 },
	{ 0xe,0x8020,0x8057,0x801a,0x8020 },
	{ 0x0,0x808f,0x2040,0x8020,0x8034 },
	{ 0x0,0x800b,0x8099,0x800a,0x8019 },
	{ 0x1,0x8057,0x800a,0x800b,0x8019 },
	{ 0xe,0x8021,0x8057,0x801a,0x8021 },
	{ 0x0,0x8097,0x2040,0x8021,0x8035 },
	{ 0x0,0x8012,0x80a1,0x2040,0x2040 },
	{ 0x0,0x809f,0x800b,0x2040,0x2040 },
	{ 0xe,0x8014,0x8012,0x801a,0x8014 },
	{ 0x0,0x8057,0x2040,0x8014,0x8036 },
	{ 0x0,0x8010,0x80a9,0x8057,0x8019 },
	{ 0x1,0x8057,0x8057,0x8010,0x8019 },
	{ 0xe,0x8022,0x8057,0x801a,0x8022 },
	{ 0x0,0x80a7,0x2040,0x8022,0x8037 },
	{ 0x0,0x8003,0x80b1,0x8010,0x8019 },
	{ 0x1,0x8057,0x8010,0x8003,0x8019 },
	{ 0xe,0x8023,0x8057,0x801a,0x8023 },
	{ 0x0,0x80af,0x2040,0x8023,0x8038 },
	{ 0x0,0x800c,0x8085,0x8006,0x8019 },
	{ 0x1,0x8057,0x8006,0x800c,0x8019 },
	{ 0xe,0x8024,0x8057,0x801a,0x8024 },
	{ 0x0,0x8083,0x2040,0x8024,0x8039 },
	{ 0x0,0x800d,0x808d,0x800c,0x8019 },
	{ 0x1,0x8057,0x800c,0x800d,0x8019 },
	{ 0xe,0x8025,0x8057,0x801a,0x8025 },
	{ 0x0,0x808b,0x2040,0x8025,0x803a },
	{ 0x0,0x800e,0x8095,0x800d,0x8019 },
	{ 0x1,0x8057,0x800d,0x800e,0x8019 },
	{ 0xe,0x8026,0x8057,0x801a,0x8026 },
	{ 0x0,0x8093,0x2040,0x8026,0x803b },
	{ 0x0,0x800f,0x809d,0x800e,0x8019 },
	{ 0x1,0x8057,0x800e,0x800f,0x8019 },
	{ 0xe,0x8027,0x8057,0x801a,0x8027 },
	{ 0x0,0x809b,0x2040,0x8027,0x803c },
	{ 0x0,0x8013,0x80a5,0x2040,0x2040 },
	{ 0x0,0x80a3,0x800f,0x2040,0x2040 },
	{ 0xe,0x8015,0x8013,0x801a,0x8015 },
	{ 0x0,0x8057,0x2040,0x8015,0x803d },
	{ 0x0,0x8011,0x80ad,0x8057,0x8019 },
	{ 0x1,0x8057,0x8057,0x8011,0x8019 },
	{ 0xe,0x8028,0x8057,0x801a,0x8028 },
	{ 0x0,0x80ab,0x2040,0x8028,0x803e },
	{ 0x0,0x8005,0x80b5,0x8011,0x8019 },
	{ 0x1,0x8057,0x8011,0x8005,0x8019 },
	{ 0xe,0x8029,0x8057,0x801a,0x8029 },
	{ 0x0,0x80b3,0x2040,0x8029,0x803f },
	{ 0x0,0x8057,0x2040,0x8003,0x204f },
	{ 0x1,0x8057,0x8057,0x8005,0x204f },
	{ 0x0,0x8004,0x80b9,0x8057,0x8007 },
	{ 0x0,0x8057,0x2040,0x8003,0x204f },
	{ 0x0,0x8057,0x8057,0x8005,0x204f },
	{ 0x0,0x8006,0x80bd,0x8057,0x8007 },
	{ 0x0,0x8057,0x2040,0x8008,0x802a },
	{ 0x0,0x8057,0x8057,0x8009,0x802b },
	{ 0x0,0x8057,0x8057,0x800a,0x802c },
	{ 0x0,0x8057,0x8057,0x800b,0x802d },
	{ 0x0,0x8057,0x8057,0x8010,0x802e },
	{ 0x0,0x8057,0x8057,0x8003,0x802f },
	{ 0x0,0x8057,0x2040,0x8057,0x801c },
	{ 0x0,0x8057,0x8057,0x8056,0x801b },
	{ 0x0,0x8057,0x8057,0x8054,0x801d },
	{ 0x4,0x8058,0x2040,0x8057,0x8030 },
	{ 0x0,0x8000,0x8058,0x8057,0x8031 },
	{ 0x0,0x8057,0x2040,0x800c,0x802a },
	{ 0x0,0x8057,0x8057,0x800d,0x802b },
	{ 0x0,0x8057,0x8057,0x800e,0x802c },
	{ 0x0,0x8057,0x8057,0x800f,0x802d },
	{ 0x0,0x8057,0x8057,0x8011,0x802e },
	{ 0x0,0x8057,0x8057,0x8005,0x802f },
	{ 0x0,0x8057,0x2040,0x8057,0x801c },
	{ 0x0,0x8057,0x8057,0x8056,0x801b },
	{ 0x0,0x8057,0x8057,0x8055,0x801d },
	{ 0x4,0x8058,0x2040,0x8057,0x8030 },
	{ 0x0,0x8001,0x8058,0x8057,0x8031 },
	{ 0xc,0x8057,0x8000,0x8042,0x2041 },
	{ 0xa,0x8040,0x8057,0x8057,0x8040 },
	{ 0xc,0x8057,0x8001,0x8042,0x2041 },
	{ 0xa,0x8041,0x8057,0x8057,0x8041 },
};

