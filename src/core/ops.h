/* This file is generated from src/core/oplist by tools/update_ops.p6. */

/* Op name defines. */
#define MVM_OP_no_op 0
#define MVM_OP_const_i8 1
#define MVM_OP_const_i16 2
#define MVM_OP_const_i32 3
#define MVM_OP_const_i64 4
#define MVM_OP_const_n32 5
#define MVM_OP_const_n64 6
#define MVM_OP_const_s 7
#define MVM_OP_set 8
#define MVM_OP_extend_u8 9
#define MVM_OP_extend_u16 10
#define MVM_OP_extend_u32 11
#define MVM_OP_extend_i8 12
#define MVM_OP_extend_i16 13
#define MVM_OP_extend_i32 14
#define MVM_OP_trunc_u8 15
#define MVM_OP_trunc_u16 16
#define MVM_OP_trunc_u32 17
#define MVM_OP_trunc_i8 18
#define MVM_OP_trunc_i16 19
#define MVM_OP_trunc_i32 20
#define MVM_OP_extend_n32 21
#define MVM_OP_trunc_n32 22
#define MVM_OP_goto 23
#define MVM_OP_if_i 24
#define MVM_OP_unless_i 25
#define MVM_OP_if_n 26
#define MVM_OP_unless_n 27
#define MVM_OP_if_s 28
#define MVM_OP_unless_s 29
#define MVM_OP_if_s0 30
#define MVM_OP_unless_s0 31
#define MVM_OP_if_o 32
#define MVM_OP_unless_o 33
#define MVM_OP_jumplist 34
#define MVM_OP_getlex 35
#define MVM_OP_bindlex 36
#define MVM_OP_getlex_ni 37
#define MVM_OP_getlex_nn 38
#define MVM_OP_getlex_ns 39
#define MVM_OP_getlex_no 40
#define MVM_OP_bindlex_ni 41
#define MVM_OP_bindlex_nn 42
#define MVM_OP_bindlex_ns 43
#define MVM_OP_bindlex_no 44
#define MVM_OP_getlex_ng 45
#define MVM_OP_bindlex_ng 46
#define MVM_OP_getdynlex 47
#define MVM_OP_binddynlex 48
#define MVM_OP_setlexvalue 49
#define MVM_OP_lexprimspec 50
#define MVM_OP_return_i 51
#define MVM_OP_return_n 52
#define MVM_OP_return_s 53
#define MVM_OP_return_o 54
#define MVM_OP_return 55
#define MVM_OP_eq_i 56
#define MVM_OP_ne_i 57
#define MVM_OP_lt_i 58
#define MVM_OP_le_i 59
#define MVM_OP_gt_i 60
#define MVM_OP_ge_i 61
#define MVM_OP_cmp_i 62
#define MVM_OP_add_i 63
#define MVM_OP_sub_i 64
#define MVM_OP_mul_i 65
#define MVM_OP_div_i 66
#define MVM_OP_div_u 67
#define MVM_OP_mod_i 68
#define MVM_OP_mod_u 69
#define MVM_OP_neg_i 70
#define MVM_OP_abs_i 71
#define MVM_OP_inc_i 72
#define MVM_OP_inc_u 73
#define MVM_OP_dec_i 74
#define MVM_OP_dec_u 75
#define MVM_OP_band_i 76
#define MVM_OP_bor_i 77
#define MVM_OP_bxor_i 78
#define MVM_OP_bnot_i 79
#define MVM_OP_blshift_i 80
#define MVM_OP_brshift_i 81
#define MVM_OP_pow_i 82
#define MVM_OP_not_i 83
#define MVM_OP_gcd_i 84
#define MVM_OP_lcm_i 85
#define MVM_OP_eq_n 86
#define MVM_OP_ne_n 87
#define MVM_OP_lt_n 88
#define MVM_OP_le_n 89
#define MVM_OP_gt_n 90
#define MVM_OP_ge_n 91
#define MVM_OP_cmp_n 92
#define MVM_OP_add_n 93
#define MVM_OP_sub_n 94
#define MVM_OP_mul_n 95
#define MVM_OP_div_n 96
#define MVM_OP_mod_n 97
#define MVM_OP_neg_n 98
#define MVM_OP_abs_n 99
#define MVM_OP_pow_n 100
#define MVM_OP_ceil_n 101
#define MVM_OP_floor_n 102
#define MVM_OP_sin_n 103
#define MVM_OP_asin_n 104
#define MVM_OP_cos_n 105
#define MVM_OP_acos_n 106
#define MVM_OP_tan_n 107
#define MVM_OP_atan_n 108
#define MVM_OP_atan2_n 109
#define MVM_OP_sec_n 110
#define MVM_OP_asec_n 111
#define MVM_OP_sinh_n 112
#define MVM_OP_cosh_n 113
#define MVM_OP_tanh_n 114
#define MVM_OP_sech_n 115
#define MVM_OP_sqrt_n 116
#define MVM_OP_log_n 117
#define MVM_OP_exp_n 118
#define MVM_OP_coerce_in 119
#define MVM_OP_coerce_ni 120
#define MVM_OP_coerce_is 121
#define MVM_OP_coerce_ns 122
#define MVM_OP_coerce_si 123
#define MVM_OP_coerce_sn 124
#define MVM_OP_smrt_numify 125
#define MVM_OP_smrt_strify 126
#define MVM_OP_prepargs 127
#define MVM_OP_arg_i 128
#define MVM_OP_arg_n 129
#define MVM_OP_arg_s 130
#define MVM_OP_arg_o 131
#define MVM_OP_argconst_i 132
#define MVM_OP_argconst_n 133
#define MVM_OP_argconst_s 134
#define MVM_OP_invoke_v 135
#define MVM_OP_invoke_i 136
#define MVM_OP_invoke_n 137
#define MVM_OP_invoke_s 138
#define MVM_OP_invoke_o 139
#define MVM_OP_checkarity 140
#define MVM_OP_param_rp_i 141
#define MVM_OP_param_rp_n 142
#define MVM_OP_param_rp_s 143
#define MVM_OP_param_rp_o 144
#define MVM_OP_param_op_i 145
#define MVM_OP_param_op_n 146
#define MVM_OP_param_op_s 147
#define MVM_OP_param_op_o 148
#define MVM_OP_param_rn_i 149
#define MVM_OP_param_rn_n 150
#define MVM_OP_param_rn_s 151
#define MVM_OP_param_rn_o 152
#define MVM_OP_param_on_i 153
#define MVM_OP_param_on_n 154
#define MVM_OP_param_on_s 155
#define MVM_OP_param_on_o 156
#define MVM_OP_param_sp 157
#define MVM_OP_param_sn 158
#define MVM_OP_getcode 159
#define MVM_OP_caller 160
#define MVM_OP_capturelex 161
#define MVM_OP_takeclosure 162
#define MVM_OP_exception 163
#define MVM_OP_bindexmessage 164
#define MVM_OP_bindexpayload 165
#define MVM_OP_bindexcategory 166
#define MVM_OP_getexmessage 167
#define MVM_OP_getexpayload 168
#define MVM_OP_getexcategory 169
#define MVM_OP_throwdyn 170
#define MVM_OP_throwlex 171
#define MVM_OP_throwlexotic 172
#define MVM_OP_throwcatdyn 173
#define MVM_OP_throwcatlex 174
#define MVM_OP_throwcatlexotic 175
#define MVM_OP_die 176
#define MVM_OP_rethrow 177
#define MVM_OP_resume 178
#define MVM_OP_takehandlerresult 179
#define MVM_OP_newlexotic 180
#define MVM_OP_lexoticresult 181
#define MVM_OP_backtracestrings 182
#define MVM_OP_usecapture 183
#define MVM_OP_savecapture 184
#define MVM_OP_captureposelems 185
#define MVM_OP_captureposarg 186
#define MVM_OP_captureposarg_i 187
#define MVM_OP_captureposarg_n 188
#define MVM_OP_captureposarg_s 189
#define MVM_OP_captureposprimspec 190
#define MVM_OP_captureexistsnamed 191
#define MVM_OP_capturehasnameds 192
#define MVM_OP_invokewithcapture 193
#define MVM_OP_multicacheadd 194
#define MVM_OP_multicachefind 195
#define MVM_OP_null_s 196
#define MVM_OP_isnull_s 197
#define MVM_OP_eq_s 198
#define MVM_OP_ne_s 199
#define MVM_OP_gt_s 200
#define MVM_OP_ge_s 201
#define MVM_OP_lt_s 202
#define MVM_OP_le_s 203
#define MVM_OP_cmp_s 204
#define MVM_OP_eqat_s 205
#define MVM_OP_eqatic_s 206
#define MVM_OP_haveat_s 207
#define MVM_OP_concat_s 208
#define MVM_OP_repeat_s 209
#define MVM_OP_substr_s 210
#define MVM_OP_index_s 211
#define MVM_OP_graphs_s 212
#define MVM_OP_codes_s 213
#define MVM_OP_getcp_s 214
#define MVM_OP_indexcp_s 215
#define MVM_OP_uc 216
#define MVM_OP_lc 217
#define MVM_OP_tc 218
#define MVM_OP_split 219
#define MVM_OP_join 220
#define MVM_OP_getcpbyname 221
#define MVM_OP_indexat 222
#define MVM_OP_indexnat 223
#define MVM_OP_unipropcode 224
#define MVM_OP_unipvalcode 225
#define MVM_OP_hasuniprop 226
#define MVM_OP_hasunipropc 227
#define MVM_OP_chars 228
#define MVM_OP_chr 229
#define MVM_OP_ordfirst 230
#define MVM_OP_ordat 231
#define MVM_OP_rindexfrom 232
#define MVM_OP_escape 233
#define MVM_OP_flip 234
#define MVM_OP_flattenropes 235
#define MVM_OP_iscclass 236
#define MVM_OP_findcclass 237
#define MVM_OP_findnotcclass 238
#define MVM_OP_nfafromstatelist 239
#define MVM_OP_nfarunproto 240
#define MVM_OP_nfarunalt 241
#define MVM_OP_radix 242
#define MVM_OP_encode 243
#define MVM_OP_decode 244
#define MVM_OP_istrue_s 245
#define MVM_OP_isfalse_s 246
#define MVM_OP_null 247
#define MVM_OP_isnull 248
#define MVM_OP_ifnonnull 249
#define MVM_OP_findmeth 250
#define MVM_OP_findmeth_s 251
#define MVM_OP_can 252
#define MVM_OP_can_s 253
#define MVM_OP_create 254
#define MVM_OP_clone 255
#define MVM_OP_isconcrete 256
#define MVM_OP_rebless 257
#define MVM_OP_istype 258
#define MVM_OP_objprimspec 259
#define MVM_OP_gethow 260
#define MVM_OP_getwhat 261
#define MVM_OP_getwho 262
#define MVM_OP_setwho 263
#define MVM_OP_reprname 264
#define MVM_OP_getwhere 265
#define MVM_OP_eqaddr 266
#define MVM_OP_bindattr_i 267
#define MVM_OP_bindattr_n 268
#define MVM_OP_bindattr_s 269
#define MVM_OP_bindattr_o 270
#define MVM_OP_bindattrs_i 271
#define MVM_OP_bindattrs_n 272
#define MVM_OP_bindattrs_s 273
#define MVM_OP_bindattrs_o 274
#define MVM_OP_getattr_i 275
#define MVM_OP_getattr_n 276
#define MVM_OP_getattr_s 277
#define MVM_OP_getattr_o 278
#define MVM_OP_getattrs_i 279
#define MVM_OP_getattrs_n 280
#define MVM_OP_getattrs_s 281
#define MVM_OP_getattrs_o 282
#define MVM_OP_attrinited 283
#define MVM_OP_box_i 284
#define MVM_OP_box_n 285
#define MVM_OP_box_s 286
#define MVM_OP_unbox_i 287
#define MVM_OP_unbox_n 288
#define MVM_OP_unbox_s 289
#define MVM_OP_atpos_i 290
#define MVM_OP_atpos_n 291
#define MVM_OP_atpos_s 292
#define MVM_OP_atpos_o 293
#define MVM_OP_bindpos_i 294
#define MVM_OP_bindpos_n 295
#define MVM_OP_bindpos_s 296
#define MVM_OP_bindpos_o 297
#define MVM_OP_push_i 298
#define MVM_OP_push_n 299
#define MVM_OP_push_s 300
#define MVM_OP_push_o 301
#define MVM_OP_pop_i 302
#define MVM_OP_pop_n 303
#define MVM_OP_pop_s 304
#define MVM_OP_pop_o 305
#define MVM_OP_shift_i 306
#define MVM_OP_shift_n 307
#define MVM_OP_shift_s 308
#define MVM_OP_shift_o 309
#define MVM_OP_unshift_i 310
#define MVM_OP_unshift_n 311
#define MVM_OP_unshift_s 312
#define MVM_OP_unshift_o 313
#define MVM_OP_splice 314
#define MVM_OP_setelemspos 315
#define MVM_OP_existspos 316
#define MVM_OP_atkey_i 317
#define MVM_OP_atkey_n 318
#define MVM_OP_atkey_s 319
#define MVM_OP_atkey_o 320
#define MVM_OP_bindkey_i 321
#define MVM_OP_bindkey_n 322
#define MVM_OP_bindkey_s 323
#define MVM_OP_bindkey_o 324
#define MVM_OP_existskey 325
#define MVM_OP_deletekey 326
#define MVM_OP_elems 327
#define MVM_OP_knowhow 328
#define MVM_OP_knowhowattr 329
#define MVM_OP_newtype 330
#define MVM_OP_composetype 331
#define MVM_OP_setmethcache 332
#define MVM_OP_setmethcacheauth 333
#define MVM_OP_settypecache 334
#define MVM_OP_settypecheckmode 335
#define MVM_OP_setboolspec 336
#define MVM_OP_istrue 337
#define MVM_OP_isfalse 338
#define MVM_OP_bootint 339
#define MVM_OP_bootnum 340
#define MVM_OP_bootstr 341
#define MVM_OP_bootarray 342
#define MVM_OP_bootintarray 343
#define MVM_OP_bootnumarray 344
#define MVM_OP_bootstrarray 345
#define MVM_OP_boothash 346
#define MVM_OP_isint 347
#define MVM_OP_isnum 348
#define MVM_OP_isstr 349
#define MVM_OP_islist 350
#define MVM_OP_ishash 351
#define MVM_OP_sethllconfig 352
#define MVM_OP_hllboxtype_i 353
#define MVM_OP_hllboxtype_n 354
#define MVM_OP_hllboxtype_s 355
#define MVM_OP_hlllist 356
#define MVM_OP_hllhash 357
#define MVM_OP_getcomp 358
#define MVM_OP_bindcomp 359
#define MVM_OP_getcurhllsym 360
#define MVM_OP_bindcurhllsym 361
#define MVM_OP_gethllsym 362
#define MVM_OP_bindhllsym 363
#define MVM_OP_settypehll 364
#define MVM_OP_settypehllrole 365
#define MVM_OP_hllize 366
#define MVM_OP_hllizefor 367
#define MVM_OP_usecompileehllconfig 368
#define MVM_OP_usecompilerhllconfig 369
#define MVM_OP_iter 370
#define MVM_OP_iterkey_s 371
#define MVM_OP_iterval 372
#define MVM_OP_getcodename 373
#define MVM_OP_iscoderef 374
#define MVM_OP_getcodeobj 375
#define MVM_OP_setcodeobj 376
#define MVM_OP_setcodename 377
#define MVM_OP_forceouterctx 378
#define MVM_OP_setinvokespec 379
#define MVM_OP_isinvokable 380
#define MVM_OP_freshcoderef 381
#define MVM_OP_markcodestatic 382
#define MVM_OP_markcodestub 383
#define MVM_OP_getstaticcode 384
#define MVM_OP_getcodecuid 385
#define MVM_OP_setdispatcher 386
#define MVM_OP_takedispatcher 387
#define MVM_OP_assign 388
#define MVM_OP_assignunchecked 389
#define MVM_OP_iscont 390
#define MVM_OP_decont 391
#define MVM_OP_setcontspec 392
#define MVM_OP_sha1 393
#define MVM_OP_createsc 394
#define MVM_OP_scsetobj 395
#define MVM_OP_scsetcode 396
#define MVM_OP_scgetobj 397
#define MVM_OP_scgethandle 398
#define MVM_OP_scgetobjidx 399
#define MVM_OP_scsetdesc 400
#define MVM_OP_scobjcount 401
#define MVM_OP_setobjsc 402
#define MVM_OP_getobjsc 403
#define MVM_OP_serialize 404
#define MVM_OP_deserialize 405
#define MVM_OP_wval 406
#define MVM_OP_wval_wide 407
#define MVM_OP_scwbdisable 408
#define MVM_OP_scwbenable 409
#define MVM_OP_pushcompsc 410
#define MVM_OP_popcompsc 411
#define MVM_OP_scgetdesc 412
#define MVM_OP_loadbytecode 413
#define MVM_OP_masttofile 414
#define MVM_OP_masttocu 415
#define MVM_OP_iscompunit 416
#define MVM_OP_compunitmainline 417
#define MVM_OP_compunitcodes 418
#define MVM_OP_ctx 419
#define MVM_OP_ctxouter 420
#define MVM_OP_ctxcaller 421
#define MVM_OP_ctxlexpad 422
#define MVM_OP_curcode 423
#define MVM_OP_callercode 424
#define MVM_OP_add_I 425
#define MVM_OP_sub_I 426
#define MVM_OP_mul_I 427
#define MVM_OP_div_I 428
#define MVM_OP_mod_I 429
#define MVM_OP_neg_I 430
#define MVM_OP_abs_I 431
#define MVM_OP_cmp_I 432
#define MVM_OP_eq_I 433
#define MVM_OP_ne_I 434
#define MVM_OP_lt_I 435
#define MVM_OP_le_I 436
#define MVM_OP_gt_I 437
#define MVM_OP_ge_I 438
#define MVM_OP_bor_I 439
#define MVM_OP_bxor_I 440
#define MVM_OP_band_I 441
#define MVM_OP_bnot_I 442
#define MVM_OP_blshift_I 443
#define MVM_OP_brshift_I 444
#define MVM_OP_pow_I 445
#define MVM_OP_gcd_I 446
#define MVM_OP_lcm_I 447
#define MVM_OP_expmod_I 448
#define MVM_OP_isprime_I 449
#define MVM_OP_rand_I 450
#define MVM_OP_coerce_In 451
#define MVM_OP_coerce_Is 452
#define MVM_OP_coerce_nI 453
#define MVM_OP_coerce_sI 454
#define MVM_OP_isbig_I 455
#define MVM_OP_bool_I 456
#define MVM_OP_base_I 457
#define MVM_OP_radix_I 458
#define MVM_OP_div_In 459
#define MVM_OP_copy_f 460
#define MVM_OP_append_f 461
#define MVM_OP_rename_f 462
#define MVM_OP_delete_f 463
#define MVM_OP_chmod_f 464
#define MVM_OP_exists_f 465
#define MVM_OP_mkdir 466
#define MVM_OP_rmdir 467
#define MVM_OP_open_dir 468
#define MVM_OP_read_dir 469
#define MVM_OP_close_dir 470
#define MVM_OP_open_fh 471
#define MVM_OP_close_fh 472
#define MVM_OP_read_fhs 473
#define MVM_OP_slurp 474
#define MVM_OP_spew 475
#define MVM_OP_write_fhs 476
#define MVM_OP_seek_fh 477
#define MVM_OP_lock_fh 478
#define MVM_OP_unlock_fh 479
#define MVM_OP_sync_fh 480
#define MVM_OP_trunc_fh 481
#define MVM_OP_eof_fh 482
#define MVM_OP_getstdin 483
#define MVM_OP_getstdout 484
#define MVM_OP_getstderr 485
#define MVM_OP_connect_sk 486
#define MVM_OP_close_sk 487
#define MVM_OP_bind_sk 488
#define MVM_OP_listen_sk 489
#define MVM_OP_accept_sk 490
#define MVM_OP_send_sks 491
#define MVM_OP_recv_sks 492
#define MVM_OP_setencoding 493
#define MVM_OP_print 494
#define MVM_OP_say 495
#define MVM_OP_readall_fh 496
#define MVM_OP_tell_fh 497
#define MVM_OP_stat 498
#define MVM_OP_readline_fh 499
#define MVM_OP_readlineint_fh 500
#define MVM_OP_chdir 501
#define MVM_OP_srand 502
#define MVM_OP_rand_i 503
#define MVM_OP_rand_n 504
#define MVM_OP_time_i 505
#define MVM_OP_sleep 506
#define MVM_OP_newthread 507
#define MVM_OP_jointhread 508
#define MVM_OP_time_n 509
#define MVM_OP_exit 510
#define MVM_OP_shell 511
#define MVM_OP_cwd 512
#define MVM_OP_clargs 513
#define MVM_OP_getenvhash 514
#define MVM_OP_loadlib 515
#define MVM_OP_freelib 516
#define MVM_OP_findsym 517
#define MVM_OP_dropsym 518
#define MVM_OP_loadext 519
#define MVM_OP_backendconfig 520
#define MVM_OP_getlexouter 521
#define MVM_OP_getlexrel 522
#define MVM_OP_getlexreldyn 523
#define MVM_OP_getlexrelcaller 524
#define MVM_OP_getlexcaller 525
#define MVM_OP_bitand_s 526
#define MVM_OP_bitor_s 527
#define MVM_OP_bitxor_s 528
#define MVM_OP_isnanorinf 529
#define MVM_OP_inf 530
#define MVM_OP_neginf 531
#define MVM_OP_nan 532
#define MVM_OP_getpid 533
#define MVM_OP_spawn 534
#define MVM_OP_filereadable 535
#define MVM_OP_filewritable 536
#define MVM_OP_fileexecutable 537
#define MVM_OP_say_fhs 538
#define MVM_OP_capturenamedshash 539
#define MVM_OP_read_fhb 540
#define MVM_OP_write_fhb 541
#define MVM_OP_replace 542
#define MVM_OP_newexception 543

#define MVM_OP_EXT_BASE 1024
#define MVM_OP_EXT_CU_LIMIT 1024

MVMOpInfo * MVM_op_get_op(unsigned short op);
