#ifndef GUARD_CONSTANTS_ITEMS_H
#define GUARD_CONSTANTS_ITEMS_H

#define ITEM_NONE 0
// Balls
#define ITEM_MASTER_BALL 1
#define ITEM_ULTRA_BALL 2
#define ITEM_GREAT_BALL 3
#define ITEM_POKE_BALL 4
#define ITEM_SAFARI_BALL 5
#define ITEM_NET_BALL 6
#define ITEM_DIVE_BALL 7
#define ITEM_NEST_BALL 8
#define ITEM_REPEAT_BALL 9
#define ITEM_TIMER_BALL 10
#define ITEM_LUXURY_BALL 11
#define ITEM_DUSK_BALL 12
#define ITEM_HEAL_BALL 13
#define ITEM_QUICK_BALL 14
#define ITEM_CHERISH_BALL 15
#define ITEM_FAST_BALL 16
#define ITEM_LEVEL_BALL 17
#define ITEM_LURE_BALL 18
#define ITEM_HEAVY_BALL 19
#define ITEM_LOVE_BALL 20
#define ITEM_FRIEND_BALL 21
#define ITEM_MOON_BALL 22
#define ITEM_SPORT_BALL 23
#define ITEM_PARK_BALL 24
#define ITEM_DREAM_BALL 25
#define ITEM_BEAST_BALL 26
#define ITEM_PREMIER_BALL 27

// Note: If moving ball IDs around, updating FIRST_BALL/LAST_BALL is not sufficient
//       Several places expect the ball IDs to be first and contiguous (e.g. gBattlescriptsForBallThrow and MON_DATA_POKEBALL)
//       If adding new balls, it's easiest to insert them after the last ball and increment the below IDs (and removing ITEM_034 for example)
#define FIRST_BALL ITEM_MASTER_BALL
#define LAST_BALL  ITEM_PREMIER_BALL

// Pokemon Items
#define ITEM_POTION 28
#define ITEM_ANTIDOTE 29
#define ITEM_BURN_HEAL 30
#define ITEM_ICE_HEAL 31
#define ITEM_AWAKENING 32
#define ITEM_PARALYZE_HEAL 33
#define ITEM_FULL_RESTORE 34
#define ITEM_MAX_POTION 35
#define ITEM_HYPER_POTION 36
#define ITEM_SUPER_POTION 37
#define ITEM_FULL_HEAL 38
#define ITEM_REVIVE 39
#define ITEM_MAX_REVIVE 40
#define ITEM_FRESH_WATER 41
#define ITEM_SODA_POP 42
#define ITEM_LEMONADE 43
#define ITEM_MOOMOO_MILK 44
#define ITEM_ENERGY_POWDER 45
#define ITEM_ENERGY_ROOT 46
#define ITEM_HEAL_POWDER 47
#define ITEM_REVIVAL_HERB 48
#define ITEM_ETHER 49
#define ITEM_MAX_ETHER 50
#define ITEM_ELIXIR 51
#define ITEM_MAX_ELIXIR 52
#define ITEM_LAVA_COOKIE 53
#define ITEM_BLUE_FLUTE 54
#define ITEM_YELLOW_FLUTE 55
#define ITEM_RED_FLUTE 56
#define ITEM_BLACK_FLUTE 57
#define ITEM_WHITE_FLUTE 58
#define ITEM_BERRY_JUICE 59
#define ITEM_SWEET_HEART 60
#define ITEM_BIG_MALASADA 61
#define ITEM_OLD_GATEAU 62
#define ITEM_SACRED_ASH 63
#define ITEM_SHOAL_SALT 64
#define ITEM_SHOAL_SHELL 65
#define ITEM_RED_SHARD 66
#define ITEM_BLUE_SHARD 67
#define ITEM_YELLOW_SHARD 68
#define ITEM_GREEN_SHARD 69
#define ITEM_HP_UP 70
#define ITEM_PROTEIN 71
#define ITEM_IRON 72
#define ITEM_CARBOS 73
#define ITEM_CALCIUM 74
#define ITEM_RARE_CANDY 75
#define ITEM_PP_UP 76
#define ITEM_ZINC 77
#define ITEM_PP_MAX 78
#define ITEM_GUARD_SPEC 79
#define ITEM_DIRE_HIT 80
#define ITEM_X_ATTACK 81
#define ITEM_X_DEFENSE 82
#define ITEM_X_SPEED 83
#define ITEM_X_ACCURACY 84
#define ITEM_X_SP_ATK 85
#define ITEM_X_SP_DEF 86
#define ITEM_POKE_DOLL 87
#define ITEM_FLUFFY_TAIL 88
#define ITEM_ESCAPE_ROPE 89
#define ITEM_REPEL 90
#define ITEM_SUPER_REPEL 91
#define ITEM_MAX_REPEL 92
#define ITEM_ABILITY_CAPSULE 93
// Wings
#define ITEM_HEALTH_WING 94
#define ITEM_MUSCLE_WING 95
#define ITEM_RESIST_WING 96
#define ITEM_GENIUS_WING 97
#define ITEM_CLEVER_WING 98
#define ITEM_SWIFT_WING 99
#define ITEM_PRETTY_WING 100
// Evolution stones
#define ITEM_SUN_STONE 101
#define ITEM_MOON_STONE 102
#define ITEM_FIRE_STONE 103
#define ITEM_THUNDER_STONE 104
#define ITEM_WATER_STONE 105
#define ITEM_LEAF_STONE 106
#define ITEM_DAWN_STONE 107
#define ITEM_DUSK_STONE 108
#define ITEM_SHINY_STONE 109
#define ITEM_ICE_STONE 110
// Unusable
#define ITEM_RED_APRICORN 111
#define ITEM_BLUE_APRICORN 112
#define ITEM_YELLOW_APRICORN 113
#define ITEM_GREEN_APRICORN 114
#define ITEM_PINK_APRICORN 115
#define ITEM_WHITE_APRICORN 116
#define ITEM_BLACK_APRICORN 117
#define ITEM_TINY_MUSHROOM 118
#define ITEM_BIG_MUSHROOM 119
#define ITEM_PEARL 120
#define ITEM_BIG_PEARL 121
#define ITEM_STARDUST 122
#define ITEM_STAR_PIECE 123
#define ITEM_NUGGET 124
#define ITEM_HEART_SCALE 125
#define ITEM_RED_NECTAR 126
#define ITEM_YELLOW_NECTAR 127
#define ITEM_PINK_NECTAR 128
#define ITEM_PURPLE_NECTAR 129
#define ITEM_HONEY 130
#define ITEM_RARE_BONE 131
// Mails
#define ITEM_ORANGE_MAIL 132
#define ITEM_HARBOR_MAIL 133
#define ITEM_GLITTER_MAIL 134
#define ITEM_MECH_MAIL 135
#define ITEM_WOOD_MAIL 136
#define ITEM_WAVE_MAIL 137
#define ITEM_BEAD_MAIL 138
#define ITEM_SHADOW_MAIL 139
#define ITEM_TROPIC_MAIL 140
#define ITEM_DREAM_MAIL 141
#define ITEM_FAB_MAIL 142
#define ITEM_RETRO_MAIL 143

#define FIRST_MAIL_INDEX ITEM_ORANGE_MAIL

// Berries
#define ITEM_CHERI_BERRY 144
#define ITEM_CHESTO_BERRY 145
#define ITEM_PECHA_BERRY 146
#define ITEM_RAWST_BERRY 147
#define ITEM_ASPEAR_BERRY 148
#define ITEM_LEPPA_BERRY 149
#define ITEM_ORAN_BERRY 150
#define ITEM_PERSIM_BERRY 151
#define ITEM_LUM_BERRY 152
#define ITEM_SITRUS_BERRY 153
#define ITEM_FIGY_BERRY 154
#define ITEM_WIKI_BERRY 155
#define ITEM_MAGO_BERRY 156
#define ITEM_AGUAV_BERRY 157
#define ITEM_IAPAPA_BERRY 158
#define ITEM_RAZZ_BERRY 159
#define ITEM_BLUK_BERRY 160
#define ITEM_NANAB_BERRY 161
#define ITEM_WEPEAR_BERRY 162
#define ITEM_PINAP_BERRY 163
#define ITEM_POMEG_BERRY 164
#define ITEM_KELPSY_BERRY 165
#define ITEM_QUALOT_BERRY 166
#define ITEM_HONDEW_BERRY 167
#define ITEM_GREPA_BERRY 168
#define ITEM_TAMATO_BERRY 169
#define ITEM_CORNN_BERRY 170
#define ITEM_MAGOST_BERRY 171
#define ITEM_RABUTA_BERRY 172
#define ITEM_NOMEL_BERRY 173
#define ITEM_SPELON_BERRY 174
#define ITEM_PAMTRE_BERRY 175
#define ITEM_WATMEL_BERRY 176
#define ITEM_DURIN_BERRY 177
#define ITEM_BELUE_BERRY 178
#define ITEM_OCCA_BERRY 179
#define ITEM_PASSHO_BERRY 180
#define ITEM_WACAN_BERRY 181
#define ITEM_RINDO_BERRY 182
#define ITEM_YACHE_BERRY 183
#define ITEM_CHOPLE_BERRY 184
#define ITEM_KEBIA_BERRY 185
#define ITEM_SHUCA_BERRY 186
#define ITEM_COBA_BERRY 187
#define ITEM_PAYAPA_BERRY 188
#define ITEM_TANGA_BERRY 189
#define ITEM_CHARTI_BERRY 190
#define ITEM_KASIB_BERRY 191
#define ITEM_HABAN_BERRY 192
#define ITEM_COLBUR_BERRY 193
#define ITEM_BABIRI_BERRY 194
#define ITEM_CHILAN_BERRY 195
#define ITEM_ROSELI_BERRY 196
#define ITEM_LIECHI_BERRY 197
#define ITEM_GANLON_BERRY 198
#define ITEM_SALAC_BERRY 199
#define ITEM_PETAYA_BERRY 200
#define ITEM_APICOT_BERRY 201
#define ITEM_LANSAT_BERRY 202
#define ITEM_STARF_BERRY 203
#define ITEM_MICLE_BERRY 204
#define ITEM_ENIGMA_BERRY 205
#define ITEM_CUSTAP_BERRY 206
#define ITEM_JABOCA_BERRY 207
#define ITEM_ROWAP_BERRY 208
#define ITEM_KEE_BERRY 209
#define ITEM_MARANGA_BERRY 210

#define FIRST_BERRY_INDEX ITEM_CHERI_BERRY
#define LAST_BERRY_INDEX  ITEM_MARANGA_BERRY

// Battle Held items
#define ITEM_BRIGHT_POWDER 211
#define ITEM_WHITE_HERB 212
#define ITEM_MACHO_BRACE 213
#define ITEM_EXP_SHARE 214
#define ITEM_QUICK_CLAW 215
#define ITEM_SOOTHE_BELL 216
#define ITEM_MENTAL_HERB 217
#define ITEM_CHOICE_BAND 218
#define ITEM_KINGS_ROCK 219
#define ITEM_SILVER_POWDER 220
#define ITEM_AMULET_COIN 221
#define ITEM_CLEANSE_TAG 222
#define ITEM_SMOKE_BALL 223
#define ITEM_EVERSTONE 224
#define ITEM_FOCUS_BAND 225
#define ITEM_LUCKY_EGG 226
#define ITEM_SCOPE_LENS 227
#define ITEM_METAL_COAT 228
#define ITEM_LEFTOVERS 229
#define ITEM_DRAGON_SCALE 230
#define ITEM_OVAL_STONE 231
#define ITEM_PROTECTOR 232
#define ITEM_ELECTIRIZER 233
#define ITEM_MAGMARIZER 234
#define ITEM_DUBIOUS_DISC 235
#define ITEM_REAPER_CLOTH 236
#define ITEM_RAZOR_CLAW 237
#define ITEM_RAZOR_FANG 238
#define ITEM_PRISM_SCALE 239
#define ITEM_WHIPPED_DREAM 240
#define ITEM_SACHET 241
#define ITEM_SOFT_SAND 242
#define ITEM_HARD_STONE 243
#define ITEM_MIRACLE_SEED 244
#define ITEM_BLACK_GLASSES 245
#define ITEM_BLACK_BELT 246
#define ITEM_MAGNET 247
#define ITEM_MYSTIC_WATER 248
#define ITEM_SHARP_BEAK 249
#define ITEM_POISON_BARB 250
#define ITEM_NEVER_MELT_ICE 251
#define ITEM_SPELL_TAG 252
#define ITEM_TWISTED_SPOON 253
#define ITEM_CHARCOAL 254
#define ITEM_DRAGON_FANG 255
#define ITEM_SILK_SCARF 256
#define ITEM_UP_GRADE 257
#define ITEM_SHELL_BELL 258
#define ITEM_POWER_BRACER 259
#define ITEM_POWER_BELT 260
#define ITEM_POWER_LENS 261
#define ITEM_POWER_BAND 262
#define ITEM_POWER_ANKLET 263
#define ITEM_POWER_WEIGHT 264
#define ITEM_POWER_HERB 265
#define ITEM_CHOICE_SCARF 266
#define ITEM_CHOICE_SPECS 267
#define ITEM_FOCUS_SASH 268
#define ITEM_WIDE_LENS 269
#define ITEM_ZOOM_LENS 270
#define ITEM_METRONOME 271
#define ITEM_MUSCLE_BAND 272
#define ITEM_WISE_GLASSES 273
#define ITEM_EXPERT_BELT 274
#define ITEM_LIGHT_CLAY 275
#define ITEM_ICY_ROCK 276
#define ITEM_SMOOTH_ROCK 277
#define ITEM_HEAT_ROCK 278
#define ITEM_DAMP_ROCK 279
#define ITEM_DESTINY_KNOT 280
#define ITEM_GRIP_CLAW 281
#define ITEM_LIFE_ORB 282
#define ITEM_TOXIC_ORB 283
#define ITEM_FLAME_ORB 284
#define ITEM_STICKY_BARB 285
#define ITEM_BLACK_SLUDGE 286
#define ITEM_IRON_BALL 287
#define ITEM_LAGGING_TAIL 288
#define ITEM_SHED_SHELL 289
#define ITEM_BIG_ROOT 290
#define ITEM_EVIOLITE 291
#define ITEM_FLOAT_STONE 292
#define ITEM_ROCKY_HELMET 293
#define ITEM_AIR_BALLOON 294
#define ITEM_RED_CARD 295
#define ITEM_RING_TARGET 296
#define ITEM_BINDING_BAND 297
#define ITEM_EJECT_BUTTON 298
#define ITEM_ABSORB_BULB 299
#define ITEM_CELL_BATTERY 300
#define ITEM_LUMINOUS_MOSS 301
#define ITEM_SNOWBALL 302
#define ITEM_WEAKNESS_POLICY 303
#define ITEM_ASSAULT_VEST 304
#define ITEM_SAFETY_GOGGLES 305
#define ITEM_ADRENALINE_ORB 306
#define ITEM_TERRAIN_EXTENDER 307
#define ITEM_PROTECTIVE_PADS 308
#define ITEM_ELECTRIC_SEED 309
#define ITEM_PSYCHIC_SEED 310
#define ITEM_MISTY_SEED 311
#define ITEM_GRASSY_SEED 312
// Incenses
#define ITEM_SEA_INCENSE 313
#define ITEM_LAX_INCENSE 314
#define ITEM_ODD_INCENSE 315
#define ITEM_ROCK_INCENSE 316
#define ITEM_FULL_INCENSE 317
#define ITEM_WAVE_INCENSE 318
#define ITEM_ROSE_INCENSE 319
#define ITEM_LUCK_INCENSE 320
#define ITEM_PURE_INCENSE 321
// Plates
#define ITEM_INSECT_PLATE 322
#define ITEM_DREAD_PLATE 323
#define ITEM_DRACO_PLATE 324
#define ITEM_ZAP_PLATE 325
#define ITEM_PIXIE_PLATE 326
#define ITEM_FIST_PLATE 327
#define ITEM_FLAME_PLATE 328
#define ITEM_SKY_PLATE 329
#define ITEM_SPOOKY_PLATE 330
#define ITEM_MEADOW_PLATE 331
#define ITEM_EARTH_PLATE 332
#define ITEM_ICICLE_PLATE 333
#define ITEM_TOXIC_PLATE 334
#define ITEM_MIND_PLATE 335
#define ITEM_STONE_PLATE 336
#define ITEM_IRON_PLATE 337
#define ITEM_SPLASH_PLATE 338
// Gems
#define ITEM_BUG_GEM 339
#define ITEM_DARK_GEM 340
#define ITEM_DRAGON_GEM 341
#define ITEM_ELECTRIC_GEM 342
#define ITEM_FAIRY_GEM 343
#define ITEM_FIGHTING_GEM 344
#define ITEM_FIRE_GEM 345
#define ITEM_FLYING_GEM 346
#define ITEM_GHOST_GEM 347
#define ITEM_GRASS_GEM 348
#define ITEM_GROUND_GEM 349
#define ITEM_ICE_GEM 350
#define ITEM_NORMAL_GEM 351
#define ITEM_POISON_GEM 352
#define ITEM_PSYCHIC_GEM 353
#define ITEM_ROCK_GEM 354
#define ITEM_STEEL_GEM 355
#define ITEM_WATER_GEM 356
// Mon specific
#define ITEM_SOUL_DEW 357
#define ITEM_DEEP_SEA_TOOTH 358
#define ITEM_DEEP_SEA_SCALE 359
#define ITEM_LUCKY_PUNCH 360
#define ITEM_METAL_POWDER 361
#define ITEM_THICK_CLUB 362
#define ITEM_STICK 363
#define ITEM_LIGHT_BALL 364
#define ITEM_QUICK_POWDER 365
#define ITEM_ODD_KEYSTONE 366
#define ITEM_ADAMANT_ORB 367
#define ITEM_LUSTROUS_ORB 368
#define ITEM_GRISEOUS_ORB 369
#define ITEM_GRACIDEA 370
// Memories
#define ITEM_BUG_MEMORY 371
#define ITEM_DARK_MEMORY 372
#define ITEM_DRAGON_MEMORY 373
#define ITEM_ELECTRIC_MEMORY 374
#define ITEM_FAIRY_MEMORY 375
#define ITEM_FIGHTING_MEMORY 376
#define ITEM_FIRE_MEMORY 377
#define ITEM_FLYING_MEMORY 378
#define ITEM_GHOST_MEMORY 379
#define ITEM_GRASS_MEMORY 380
#define ITEM_GROUND_MEMORY 381
#define ITEM_ICE_MEMORY 382
#define ITEM_POISON_MEMORY 383
#define ITEM_PSYCHIC_MEMORY 384
#define ITEM_ROCK_MEMORY 385
#define ITEM_STEEL_MEMORY 386
#define ITEM_WATER_MEMORY 387
// Drives
#define ITEM_DOUSE_DRIVE 388
#define ITEM_SHOCK_DRIVE 389
#define ITEM_BURN_DRIVE 390
#define ITEM_CHILL_DRIVE 391
// Contest held items
#define ITEM_RED_SCARF 392
#define ITEM_BLUE_SCARF 393
#define ITEM_PINK_SCARF 394
#define ITEM_GREEN_SCARF 395
#define ITEM_YELLOW_SCARF 396
// Mega stones
#define ITEM_ABOMASITE 397
#define ITEM_ABSOLITE 398
#define ITEM_AERODACTYLITE 399
#define ITEM_AGGRONITE 400
#define ITEM_ALAKAZITE 401
#define ITEM_ALTARIANITE 402
#define ITEM_AMPHAROSITE 403
#define ITEM_AUDINITE 404
#define ITEM_BANETTITE 405
#define ITEM_BEEDRILLITE 406
#define ITEM_BLASTOISINITE 407
#define ITEM_BLAZIKENITE 408
#define ITEM_CAMERUPTITE 409
#define ITEM_CHARIZARDITE_X 410
#define ITEM_CHARIZARDITE_Y 411
#define ITEM_DIANCITE 412
#define ITEM_GALLADITE 413
#define ITEM_GARCHOMPITE 414
#define ITEM_GARDEVOIRITE 415
#define ITEM_GENGARITE 416
#define ITEM_GLALITITE 417
#define ITEM_GYARADOSITE 418
#define ITEM_HERACRONITE 419
#define ITEM_HOUNDOOMINITE 420
#define ITEM_KANGASKHANITE 421
#define ITEM_LATIASITE 422
#define ITEM_LATIOSITE 423
#define ITEM_LOPUNNITE 424
#define ITEM_LUCARIONITE 425
#define ITEM_MANECTITE 426
#define ITEM_MAWILITE 427
#define ITEM_MEDICHAMITE 428
#define ITEM_METAGROSSITE 429
#define ITEM_MEWTWONITE_X 430
#define ITEM_MEWTWONITE_Y 431
#define ITEM_PIDGEOTITE 432
#define ITEM_PINSIRITE 433
#define ITEM_SABLENITE 434
#define ITEM_SALAMENCITE 435
#define ITEM_SCEPTILITE 436
#define ITEM_SCIZORITE 437
#define ITEM_SHARPEDONITE 438
#define ITEM_SLOWBRONITE 439
#define ITEM_STEELIXITE 440
#define ITEM_SWAMPERTITE 441
#define ITEM_TYRANITARITE 442
#define ITEM_VENUSAURITE 443
#define ITEM_MEGA_BRACELET 444
// Fossils
#define ITEM_ARMOR_FOSSIL 445
#define ITEM_SKULL_FOSSIL 446
#define ITEM_HELIX_FOSSIL 447
#define ITEM_DOME_FOSSIL 448
#define ITEM_COVER_FOSSIL 449
#define ITEM_PLUME_FOSSIL 450
#define ITEM_JAW_FOSSIL 451
#define ITEM_SAIL_FOSSIL 452
#define ITEM_ROOT_FOSSIL 453
#define ITEM_CLAW_FOSSIL 454
// Key Items
#define ITEM_MACH_BIKE 455
#define ITEM_COIN_CASE 456
#define ITEM_ITEMFINDER 457
#define ITEM_OLD_ROD 458
#define ITEM_GOOD_ROD 459
#define ITEM_SUPER_ROD 460
#define ITEM_SS_TICKET 461
#define ITEM_CONTEST_PASS 462
#define ITEM_WAILMER_PAIL 463
#define ITEM_DEVON_GOODS 464
#define ITEM_SOOT_SACK 465
#define ITEM_BASEMENT_KEY 466
#define ITEM_ACRO_BIKE 467
#define ITEM_POKEBLOCK_CASE 468
#define ITEM_LETTER 469
#define ITEM_EON_TICKET 470
#define ITEM_RED_ORB 471
#define ITEM_BLUE_ORB 472
#define ITEM_SCANNER 473
#define ITEM_GO_GOGGLES 474
#define ITEM_METEORITE 475
#define ITEM_ROOM_1_KEY 476
#define ITEM_ROOM_2_KEY 477
#define ITEM_ROOM_4_KEY 478
#define ITEM_ROOM_6_KEY 479
#define ITEM_STORAGE_KEY 480
#define ITEM_DEVON_SCOPE 481
// TMs/HMs
#define ITEM_TM01 482
#define ITEM_TM02 483
#define ITEM_TM03 484
#define ITEM_TM04 485
#define ITEM_TM05 486
#define ITEM_TM06 487
#define ITEM_TM07 488
#define ITEM_TM08 489
#define ITEM_TM09 490
#define ITEM_TM10 491
#define ITEM_TM11 492
#define ITEM_TM12 493
#define ITEM_TM13 494
#define ITEM_TM14 495
#define ITEM_TM15 496
#define ITEM_TM16 497
#define ITEM_TM17 498
#define ITEM_TM18 499
#define ITEM_TM19 500
#define ITEM_TM20 501
#define ITEM_TM21 502
#define ITEM_TM22 503
#define ITEM_TM23 504
#define ITEM_TM24 505
#define ITEM_TM25 506
#define ITEM_TM26 507
#define ITEM_TM27 508
#define ITEM_TM28 509
#define ITEM_TM29 510
#define ITEM_TM30 511
#define ITEM_TM31 512
#define ITEM_TM32 513
#define ITEM_TM33 514
#define ITEM_TM34 515
#define ITEM_TM35 516
#define ITEM_TM36 517
#define ITEM_TM37 518
#define ITEM_TM38 519
#define ITEM_TM39 520
#define ITEM_TM40 521
#define ITEM_TM41 522
#define ITEM_TM42 523
#define ITEM_TM43 524
#define ITEM_TM44 525
#define ITEM_TM45 526
#define ITEM_TM46 527
#define ITEM_TM47 528
#define ITEM_TM48 529
#define ITEM_TM49 530
#define ITEM_TM50 531

#define ITEM_HM01 532
#define ITEM_HM02 533
#define ITEM_HM03 534
#define ITEM_HM04 535
#define ITEM_HM05 536
#define ITEM_HM06 537
#define ITEM_HM07 538
#define ITEM_HM08 539

#define ITEM_TM01_FOCUS_PUNCH ITEM_TM01
#define ITEM_TM02_DRAGON_CLAW ITEM_TM02
#define ITEM_TM03_WATER_PULSE ITEM_TM03
#define ITEM_TM04_CALM_MIND ITEM_TM04
#define ITEM_TM05_ROAR ITEM_TM05
#define ITEM_TM06_TOXIC ITEM_TM06
#define ITEM_TM07_HAIL ITEM_TM07
#define ITEM_TM08_BULK_UP ITEM_TM08
#define ITEM_TM09_BULLET_SEED ITEM_TM09
#define ITEM_TM10_HIDDEN_POWER ITEM_TM10
#define ITEM_TM11_SUNNY_DAY ITEM_TM11
#define ITEM_TM12_TAUNT ITEM_TM12
#define ITEM_TM13_ICE_BEAM ITEM_TM13
#define ITEM_TM14_BLIZZARD ITEM_TM14
#define ITEM_TM15_HYPER_BEAM ITEM_TM15
#define ITEM_TM16_LIGHT_SCREEN ITEM_TM16
#define ITEM_TM17_PROTECT ITEM_TM17
#define ITEM_TM18_RAIN_DANCE ITEM_TM18
#define ITEM_TM19_GIGA_DRAIN ITEM_TM19
#define ITEM_TM20_SAFEGUARD ITEM_TM20
#define ITEM_TM21_FRUSTRATION ITEM_TM21
#define ITEM_TM22_SOLARBEAM ITEM_TM22
#define ITEM_TM23_IRON_TAIL ITEM_TM23
#define ITEM_TM24_THUNDERBOLT ITEM_TM24
#define ITEM_TM25_THUNDER ITEM_TM25
#define ITEM_TM26_EARTHQUAKE ITEM_TM26
#define ITEM_TM27_RETURN ITEM_TM27
#define ITEM_TM28_DIG ITEM_TM28
#define ITEM_TM29_PSYCHIC ITEM_TM29
#define ITEM_TM30_SHADOW_BALL ITEM_TM30
#define ITEM_TM31_BRICK_BREAK ITEM_TM31
#define ITEM_TM32_DOUBLE_TEAM ITEM_TM32
#define ITEM_TM33_REFLECT ITEM_TM33
#define ITEM_TM34_SHOCK_WAVE ITEM_TM34
#define ITEM_TM35_FLAMETHROWER ITEM_TM35
#define ITEM_TM36_SLUDGE_BOMB ITEM_TM36
#define ITEM_TM37_SANDSTORM ITEM_TM37
#define ITEM_TM38_FIRE_BLAST ITEM_TM38
#define ITEM_TM39_ROCK_TOMB ITEM_TM39
#define ITEM_TM40_AERIAL_ACE ITEM_TM40
#define ITEM_TM41_TORMENT ITEM_TM41
#define ITEM_TM42_FACADE ITEM_TM42
#define ITEM_TM43_SECRET_POWER ITEM_TM43
#define ITEM_TM44_REST ITEM_TM44
#define ITEM_TM45_ATTRACT ITEM_TM45
#define ITEM_TM46_THIEF ITEM_TM46
#define ITEM_TM47_STEEL_WING ITEM_TM47
#define ITEM_TM48_SKILL_SWAP ITEM_TM48
#define ITEM_TM49_SNATCH ITEM_TM49
#define ITEM_TM50_OVERHEAT ITEM_TM50

#define ITEM_HM01_CUT ITEM_HM01
#define ITEM_HM02_FLY ITEM_HM02
#define ITEM_HM03_SURF ITEM_HM03
#define ITEM_HM04_STRENGTH ITEM_HM04
#define ITEM_HM05_FLASH ITEM_HM05
#define ITEM_HM06_ROCK_SMASH ITEM_HM06
#define ITEM_HM07_WATERFALL ITEM_HM07
#define ITEM_HM08_DIVE ITEM_HM08
// FireRed/LeafGreen
#define ITEM_OAKS_PARCEL 540
#define ITEM_POKE_FLUTE 541
#define ITEM_SECRET_KEY 542
#define ITEM_BIKE_VOUCHER 543
#define ITEM_GOLD_TEETH 544
#define ITEM_OLD_AMBER 545
#define ITEM_CARD_KEY 546
#define ITEM_LIFT_KEY 547
#define ITEM_SILPH_SCOPE 548
#define ITEM_BICYCLE 549
#define ITEM_TOWN_MAP 550
#define ITEM_VS_SEEKER 551
#define ITEM_FAME_CHECKER 552
#define ITEM_TM_CASE 553
#define ITEM_BERRY_POUCH 554
#define ITEM_TEACHY_TV 555
#define ITEM_TRI_PASS 556
#define ITEM_RAINBOW_PASS 557
#define ITEM_TEA 558
#define ITEM_MYSTIC_TICKET 559
#define ITEM_AURORA_TICKET 560
#define ITEM_POWDER_JAR 561
#define ITEM_RUBY 562
#define ITEM_SAPPHIRE 563
// Emerald
#define ITEM_MAGMA_EMBLEM 564
#define ITEM_OLD_SEA_MAP 565

#define ITEM_SHINY_CHARM 566
#define ITEM_OVAL_CHARM 567

// Z Crystals
#define ITEM_Z_RING                   568
#define ITEM_NORMALIUM_Z              569
#define ITEM_FIGHTINIUM_Z             570
#define ITEM_FLYINIUM_Z               571
#define ITEM_POISONIUM_Z              572
#define ITEM_GROUNDIUM_Z              573
#define ITEM_ROCKIUM_Z                574
#define ITEM_BUGINIUM_Z               575
#define ITEM_GHOSTIUM_Z               576
#define ITEM_STEELIUM_Z               577
#define ITEM_FIRIUM_Z                 578
#define ITEM_WATERIUM_Z               579
#define ITEM_GRASSIUM_Z               580
#define ITEM_ELECTRIUM_Z              581
#define ITEM_PSYCHIUM_Z               582
#define ITEM_ICIUM_Z                  583
#define ITEM_DRAGONIUM_Z              584
#define ITEM_DARKINIUM_Z              585
#define ITEM_FAIRIUM_Z                586
#define ITEM_ALORAICHIUM_Z            587
#define ITEM_DECIDIUM_Z               588
#define ITEM_EEVIUM_Z                 589
#define ITEM_INCINIUM_Z               590
#define ITEM_KOMMONIUM_Z              591
#define ITEM_LUNALIUM_Z               592
#define ITEM_LYCANIUM_Z               593
#define ITEM_MARSHADIUM_Z             594
#define ITEM_MEWNIUM_Z                595
#define ITEM_MIMIKIUM_Z               596
#define ITEM_PIKANIUM_Z               597
#define ITEM_PIKASHUNIUM_Z            598
#define ITEM_PRIMARIUM_Z              599
#define ITEM_SNORLIUM_Z               600
#define ITEM_SOLGANIUM_Z              601
#define ITEM_TAPUNIUM_Z               602
#define ITEM_ULTRANECROZIUM_Z         603

#define ITEMS_COUNT 604
#define ITEM_FIELD_ARROW ITEMS_COUNT

// Range of berries given out by various NPCS
#define FIRST_BERRY_MASTER_BERRY      ITEM_POMEG_BERRY
#define LAST_BERRY_MASTER_BERRY       ITEM_NOMEL_BERRY
#define FIRST_BERRY_MASTER_WIFE_BERRY ITEM_CHERI_BERRY
#define LAST_BERRY_MASTER_WIFE_BERRY  ITEM_SITRUS_BERRY
#define FIRST_KIRI_BERRY              ITEM_POMEG_BERRY
#define LAST_KIRI_BERRY               ITEM_NOMEL_BERRY
#define FIRST_ROUTE_114_MAN_BERRY     ITEM_RAZZ_BERRY
#define LAST_ROUTE_114_MAN_BERRY      ITEM_PINAP_BERRY

#define NUM_BERRY_MASTER_BERRIES          (LAST_BERRY_MASTER_BERRY - FIRST_BERRY_MASTER_BERRY + 1)
#define NUM_BERRY_MASTER_BERRIES_SKIPPED  (FIRST_BERRY_MASTER_BERRY - FIRST_BERRY_INDEX)
#define NUM_BERRY_MASTER_WIFE_BERRIES     (LAST_BERRY_MASTER_WIFE_BERRY - FIRST_BERRY_MASTER_WIFE_BERRY + 1)
#define NUM_KIRI_BERRIES                  (LAST_KIRI_BERRY - FIRST_KIRI_BERRY + 1)
#define NUM_KIRI_BERRIES_SKIPPED          (FIRST_KIRI_BERRY - FIRST_BERRY_INDEX)
#define NUM_ROUTE_114_MAN_BERRIES         (LAST_ROUTE_114_MAN_BERRY - FIRST_ROUTE_114_MAN_BERRY + 1)
#define NUM_ROUTE_114_MAN_BERRIES_SKIPPED (FIRST_ROUTE_114_MAN_BERRY - FIRST_BERRY_INDEX)

#define ITEM_TO_BERRY(itemId)(((itemId) - FIRST_BERRY_INDEX) + 1)
#define ITEM_TO_MAIL(itemId)((itemId) - FIRST_MAIL_INDEX)
#define MAIL_NONE 0xFF

#define NUM_TECHNICAL_MACHINES 50
#define NUM_HIDDEN_MACHINES 8

#define MAX_BAG_ITEM_CAPACITY  99
#define MAX_PC_ITEM_CAPACITY   999
#define MAX_BERRY_CAPACITY     999

#define BAG_ITEM_CAPACITY_DIGITS 2
#define BERRY_CAPACITY_DIGITS 3
#define MAX_ITEM_DIGITS BERRY_CAPACITY_DIGITS

// Secondary IDs for rods
#define OLD_ROD   0
#define GOOD_ROD  1
#define SUPER_ROD 2

// Secondary IDs for bikes
#define MACH_BIKE 0
#define ACRO_BIKE 1

// Item type IDs (used to determine the exit callback)
#define ITEM_USE_MAIL        0
#define ITEM_USE_PARTY_MENU  1
#define ITEM_USE_FIELD       2
#define ITEM_USE_PBLOCK_CASE 3
#define ITEM_USE_BAG_MENU    4 // No exit callback, stays in bag menu

// Item battle usage IDs (only checked to see if nonzero)
#define ITEM_B_USE_MEDICINE 1
#define ITEM_B_USE_OTHER    2

// Check if the item is one that can be used on a Pokemon.
#define ITEM_HAS_EFFECT(item) ((item) >= ITEM_POTION && (item) <= LAST_BERRY_INDEX)

#endif  // GUARD_CONSTANTS_ITEMS_H