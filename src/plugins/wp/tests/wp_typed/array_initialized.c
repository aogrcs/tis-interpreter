/* run.config
   OPT: -wp-init-summarize-array -wp-init-const
   OPT: -wp-init-summarize-array -wp-init-const -cpp-extra-args="-D FORCE_VAR_IN_TYPED_MODEL"
 */

/* run.config_qualif
   OPT: -wp-init-summarize-array -wp-init-const
   OPT: -wp-init-summarize-array -wp-init-const -cpp-extra-args="-D FORCE_VAR_IN_TYPED_MODEL"
 */

/** Try to prove properties about initialized arrays */

const int g[500]= {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void main1(){
#ifdef FORCE_VAR_IN_TYPED_MODEL
  int *i = &g; /* force g to be in the typed model */
#endif
  /*@ assert \forall integer k; 0 <= k < 500 ==> g[k] == 0; @*/
}

const int h1[500]= {
  0 ,  1,  2,  3,  4,  5,  6,  7,  8,  9,
  10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
  20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
  30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
  40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

const int h2[500]= {
  0 ,  1,  2,  3,  4,  5,  6,  7,  8,  9,
  10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
  20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
  30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
  40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void main2(){
#ifdef FORCE_VAR_IN_TYPED_MODEL
  int *i = &h1;
  i = &h2;
#endif
  /*@ assert \forall integer k; 0 <= k < 500 ==> h1[k] == h2[k]; @*/
}


void main3(){
#ifdef FORCE_VAR_IN_TYPED_MODEL
  int *i = &h1;
#endif
  /*@ assert
    h1[50] == 0 && h1[51] == 0 && h1[52] == 0 && h1[53] == 0 && h1[54] == 0 && h1[55] == 0 && h1[56] == 0 && h1[57] == 0 && h1[58] == 0 && h1[59] == 0 &&
    h1[60] == 0 && h1[61] == 0 && h1[62] == 0 && h1[63] == 0 && h1[64] == 0 && h1[65] == 0 && h1[66] == 0 && h1[67] == 0 && h1[68] == 0 && h1[69] == 0 &&
    h1[70] == 0 && h1[71] == 0 && h1[72] == 0 && h1[73] == 0 && h1[74] == 0 && h1[75] == 0 && h1[76] == 0 && h1[77] == 0 && h1[78] == 0 && h1[79] == 0 &&
    h1[80] == 0 && h1[81] == 0 && h1[82] == 0 && h1[83] == 0 && h1[84] == 0 && h1[85] == 0 && h1[86] == 0 && h1[87] == 0 && h1[88] == 0 && h1[89] == 0 &&
    h1[90] == 0 && h1[91] == 0 && h1[92] == 0 && h1[93] == 0 && h1[94] == 0 && h1[95] == 0 && h1[96] == 0 && h1[97] == 0 && h1[98] == 0 && h1[99] == 0 &&

    h1[150] == 0 && h1[151] == 0 && h1[152] == 0 && h1[153] == 0 && h1[154] == 0 && h1[155] == 0 && h1[156] == 0 && h1[157] == 0 && h1[158] == 0 && h1[159] == 0 &&
    h1[160] == 0 && h1[161] == 0 && h1[162] == 0 && h1[163] == 0 && h1[164] == 0 && h1[165] == 0 && h1[166] == 0 && h1[167] == 0 && h1[168] == 0 && h1[169] == 0 &&
    h1[170] == 0 && h1[171] == 0 && h1[172] == 0 && h1[173] == 0 && h1[174] == 0 && h1[175] == 0 && h1[176] == 0 && h1[177] == 0 && h1[178] == 0 && h1[179] == 0 &&
    h1[180] == 0 && h1[181] == 0 && h1[182] == 0 && h1[183] == 0 && h1[184] == 0 && h1[185] == 0 && h1[186] == 0 && h1[187] == 0 && h1[188] == 0 && h1[189] == 0 &&
    h1[190] == 0 && h1[191] == 0 && h1[192] == 0 && h1[193] == 0 && h1[194] == 0 && h1[195] == 0 && h1[196] == 0 && h1[197] == 0 && h1[198] == 0 && h1[199] == 0 &&

    h1[250] == 0 && h1[251] == 0 && h1[252] == 0 && h1[253] == 0 && h1[254] == 0 && h1[255] == 0 && h1[256] == 0 && h1[257] == 0 && h1[258] == 0 && h1[259] == 0 &&
    h1[260] == 0 && h1[261] == 0 && h1[262] == 0 && h1[263] == 0 && h1[264] == 0 && h1[265] == 0 && h1[266] == 0 && h1[267] == 0 && h1[268] == 0 && h1[269] == 0 &&
    h1[270] == 0 && h1[271] == 0 && h1[272] == 0 && h1[273] == 0 && h1[274] == 0 && h1[275] == 0 && h1[276] == 0 && h1[277] == 0 && h1[278] == 0 && h1[279] == 0 &&
    h1[280] == 0 && h1[281] == 0 && h1[282] == 0 && h1[283] == 0 && h1[284] == 0 && h1[285] == 0 && h1[286] == 0 && h1[287] == 0 && h1[288] == 0 && h1[289] == 0 &&
    h1[290] == 0 && h1[291] == 0 && h1[292] == 0 && h1[293] == 0 && h1[294] == 0 && h1[295] == 0 && h1[296] == 0 && h1[297] == 0 && h1[298] == 0 && h1[299] == 0 &&

    h1[350] == 0 && h1[351] == 0 && h1[352] == 0 && h1[353] == 0 && h1[354] == 0 && h1[355] == 0 && h1[356] == 0 && h1[357] == 0 && h1[358] == 0 && h1[359] == 0 &&
    h1[360] == 0 && h1[361] == 0 && h1[362] == 0 && h1[363] == 0 && h1[364] == 0 && h1[365] == 0 && h1[366] == 0 && h1[367] == 0 && h1[368] == 0 && h1[369] == 0 &&
    h1[370] == 0 && h1[371] == 0 && h1[372] == 0 && h1[373] == 0 && h1[374] == 0 && h1[375] == 0 && h1[376] == 0 && h1[377] == 0 && h1[378] == 0 && h1[379] == 0 &&
    h1[380] == 0 && h1[381] == 0 && h1[382] == 0 && h1[383] == 0 && h1[384] == 0 && h1[385] == 0 && h1[386] == 0 && h1[387] == 0 && h1[388] == 0 && h1[389] == 0 &&
    h1[390] == 0 && h1[391] == 0 && h1[392] == 0 && h1[393] == 0 && h1[394] == 0 && h1[395] == 0 && h1[396] == 0 && h1[397] == 0 && h1[398] == 0 && h1[399] == 0 &&

    \true;

    @*/
}


int p0;

int* const p[500]= {
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
  &p0 ,  &p0,  &p0,  &p0,  &p0,   &p0 ,  &p0,  &p0,  &p0,  &p0,
};

void main_pointer(){
#ifdef FORCE_VAR_IN_TYPED_MODEL
  int **i = &p;
#endif
  /*@ assert \forall integer k; 0 <= k < 500 ==> \valid(p[k]); @*/
}

/*@
  requires \forall integer i; 0 <= i < 50 ==> t[i] == t[0];
  ensures \forall integer i; 0 <= i < 50 ==> (\result == 1 <==> t[i] >= 0);
  @*/
int simpl(int *t){
  if(t[0] >= 0){
    return 1;
  } else {
    return 0;
  }
}
