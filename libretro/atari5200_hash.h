#define a5200 0			// 4, 8, NS16, 32
#define a5200_40 1		// Bounty Bob
#define a5200_ee_16 2   // 2 16k eeproms
#define a5200_64 3		// supercarts
#define a5200_128 4
#define a5200_256 5
#define a5200_512 6

typedef struct {
	int type;
	char name[50];
	int size;
	ULONG crc; 	
} a5200_rom;

a5200_rom a5200_game[] = {

 { a5200,"5200menu.bin",8192,0x0de2db48},
 { a5200,"A.E. (Proto)",16384,0x35484751},
 { a5200,"Activision Decathlon",16384,0xf43e7cd0},
 { a5200,"Asteroids (USA) (Proto)",8192,0x38480891},
 { a5200_ee_16,"Astro Chase",16384,0x4019ecec},
 { a5200,"Ballblazer",32768,0x94d97d14},
 { a5200,"Ballblazer", 8192, 0xDEF2A207 },
 { a5200_ee_16,"Battle Zone (Proto)",16384,0xb3b8e314},
 { a5200,"Beamrider",16384,0x9bae58dc},
 { a5200,"Berzerk",16384,0xbe3cd348},
 { a5200,"Blackbelt (Proto)",32768,0xed47b0d8},
 { a5200,"Blaster (USA) (Proto)",16384,0xc8f9c094},
 { a5200,"Blue Print",16384,0x0624e6e7},
 { a5200_40,"Bounty Bob Strikes Back",40960,0x7873c6dd},
 { a5200_ee_16,"Buck Rogers - Planet of Zoom",16384,0x04807705},
 { a5200_ee_16,"Centipede",16384,0x536a70fe},
 { a5200,"Choplifter!",16384,0x9ad53bbc},
 { a5200_ee_16,"Congo Bongo",16384,0xf1f42bbd},
 { a5200_ee_16,"Counter Measure",16384,0xfd541c80},
 { a5200,"Dave Crane's Pitfall II - Lost Caverns",16384,0x4b910461},
 { a5200_ee_16,"Defender",16384,0xbd52623b},
 { a5200_ee_16,"Dig Dug",16384,0x6a687f9c},
 { a5200,"Dreadnaught Factor, The",8192,0x460def2d},
 { a5200,"Final Legacy (Proto)",16384,0xd3bd3221},
 { a5200_ee_16,"friskyt.bin",16384,0x04b299a4},
 { a5200,"Frisky Tom (Mouse Speed Fix)",32768,0x04b299a4},
 { a5200,"Frogger",8192,0xae7e3444},
 { a5200_ee_16,"Frogger II - Threeedeep!",16384,0x0af19345},
 { a5200,"Galaxian",8192,0x3ef4a23f},
 { a5200,"gorf.bin",8192,0xe955db74},
 { a5200,"Gremlins",32768,0x063ec2c4},
 { a5200_ee_16,"Gyruss",16384,0xcfd4a7f9},
 { a5200,"H.E.R.O",16384,0x18a73af3},
 { a5200_ee_16,"James Bond 007",16384,0xd9ae4518},
 { a5200_ee_16,"Joust",16384,0xbfd30c01},
 { a5200_ee_16,"J.R. Pac-Man (Proto)",16384,0x59983c40},
 { a5200_ee_16,"Jungle Hunt",16384,0x2c676662},
 { a5200,"K-Razy Shoot-Out",8192,0xee702214},
 { a5200,"Kaboom!",4096,0x420f5d0b},
 { a5200_ee_16,"Kangaroo",16384,0xecfa624f},
 { a5200,"Keystone Kapers",8192,0x8fe3bb2c},
 { a5200,"Last Starfighter, The",16384,0x83517703},
 { a5200_ee_16,"Loony Tunes Hotel (Proto)",16384,0x84df4925},
 { a5200,"Mario Bros.",32768,0x873742f1},
 { a5200,"Meebzork",32768,0x9fb13411},
 { a5200,"MegaMania",8192,0x240a1e1a},
 { a5200,"Meteorites",16384,0xab8e035b},
 { a5200_ee_16,"microgam.bin",16384,0x931a454a},
 { a5200,"Microgammon (Proto)",32768,0x960ce5e2},
 { a5200,"Millipede (Proto).bin",16384,0x969cfe1a},
 { a5200,"Miner 2049er Starring Bounty Bob",16384,0x7df1adfb},
 { a5200_ee_16,"Miniature Golf (Proto)",16384,0xc597c087},
 { a5200,"Missile Command",8192,0x44d3ff6f},
 { a5200_ee_16,"Montezuma's Revenge featuring Panama Joe",16384,0x2a640143},
 { a5200,"Moon Patrol",16384,0xd0b2f285},
 { a5200,"Mountain King",8192,0x0f24243c},
 { a5200,"Mr. Do's Castle",8192,0xaa55f9be},
 { a5200_ee_16,"Ms. Pac-Man",16384,0x752f5efd},
 { a5200_ee_16,"Pac-man",16384,0x8873ef51},
 { a5200,"Pengo",32768,0xe4f8ba8c},
 { a5200,"Pitfall.bin",8192,0xb2887833},
 { a5200_ee_16,"Pole Position",16384,0xabc2d1e4},
 { a5200_ee_16,"Popeye",16384,0xa18a9a40},
 { a5200,"qbert.bin",8192,0x3fe4a401},
 { a5200_ee_16,"QIX",16384,0xaea6d2c2},
 { a5200,"Quest For Quintana Roo",16384,0xb5f3402b},
 { a5200,"Realsports Baseball",32768,0x44166592},
 { a5200,"rsbktbll.bin",32768,0xdd217276},
 { a5200,"Realsports Basketball (Proto1)",32768,0xc90196fa},
 { a5200_ee_16,"rsbktbll2.bin",16384,0x0f996184},
 { a5200_ee_16,"Realsports Football",16384,0x4336c2cc},
 { a5200_ee_16,"Realsports Soccer",16384,0xecbd1853},
 { a5200_ee_16,"RealSports Tennis",16384,0x10f33c90},
 { a5200,"Rescue on Fractalus!",32768,0x762c591b},
 { a5200,"Carol Shaw's River Raid",8192,0x09fc7648},
 { a5200_ee_16,"Road Runner (Proto)",16384,0xa97606ab},
 { a5200,"Robotron 2084",16384,0x4252abd9},
 { a5200_ee_16,"Space Dungeon",16384,0xb68d61e8},
 { a5200,"Space Invaders",8192,0xde5c354a},
 { a5200,"Space Shuttle",16384,0x387365dc},
 { a5200,"Spitfire (Proto)",32768,0x3c311303},
 { a5200_ee_16,"Sport Goofy (Proto)",16384,0x73b5b6fb},
 { a5200_ee_16,"Star Raiders",16384,0x7d819a9f},
 { a5200_ee_16,"Star Trek - Strategic Operations Simulator",16384,0x69f23548},
 { a5200,"Star Wars - Death Star Battle",8192,0x0675f0a5},
 { a5200_ee_16,"Star Wars - The Arcade Game",16384,0x75f566df},
 { a5200_ee_16,"Stargate (Proto)",16384,0x1d1cee27},
 { a5200,"Super Breakout",4096,0xa0642110},
 { a5200,"Super Cobra",8192,0x97debcd2},
 { a5200,"Super Pac-Man (USA) (Proto)",16384,0x0a4ddb1e},
 { a5200,"Tempest (Proto)",16384,0x1187342f},
 { a5200,"Track And Field",16384,0x0ba22ece},
 { a5200,"Vanguard",32768,0xcaaea0a4},
 { a5200,"Wizard Of Wor",16384,0xd6f7ddfd},
 { a5200_ee_16,"Xari Arena (Proto)",16384,0xb8faaec3},
 { a5200_ee_16,"Xari Arena (9-20-83)",16384,0x29178296},
 { a5200,"Xevious",32768,0x382634dc},
 { a5200,"Yellow Submarine (Proto)",4096,0xf47bc091},
 { a5200,"Zaxxon",32768,0x741746d1},
 { a5200,"Zenji",8192,0xda228530},
 { a5200,"Zone Ranger",16384,0x2959d827},
 { a5200,"petetest.bin",8192,0x28278cd6},
 { a5200_ee_16,"pamdiag2.bin",16384,0xe8b130c4},
 { a5200_ee_16,"pamdg23.bin",16384,0xce07d9ad},
 { a5200,"finaltst.bin",8192,0x7ea86e87},
 { a5200,"boogie.bin",4096,0x3bd5fdd6},
 { a5200,"Boogie",16384,0x7a9d9f85},
 { a5200,"Castle Blast",32768,0x7c988054},
 { a5200,"Castle Crisis",32768,0xd50e4061},
 { a5200,"Koffi - Yellow Kopter",32768,0x917be656},
 { a5200,"Tempest (Atariage)",32768,0xa6400e17},
 { a5200,"Abracadabra",32768, 0x538a852e},
 { a5200,"3-D Tic-Tac-Toe", 32768, 0x38ec4bfe },
 { a5200,"Adventure 2 (Advanced - Special)", 32768, 0xaa600fac },
 { a5200,"Adventure 2 (Easy - Intermediate)", 32768, 0x69cc2cd6 },
 { a5200,"Alien Assault 2121 (A800)", 32768, 0x0dd8c1a0 },
 { a5200,"Analog Classics #1 (A800)", 32768, 0x3e382e45 },
 { a5200,"Ant Eater (A800)", 16384, 0x821f0d97 },
 { a5200,"Archon (A800)", 32767, 0x7bef7c2d },
 { a5200,"Asteroids (5200 Hack)", 8192, 0x28ec3d93 },
 { a5200,"Asteroids (A800)(Improved Defense-Slow Flip)", 16384, 0x0ce7a6e6 },
 { a5200,"Asteroids (A800)", 16384, 0x4e4bf0bd },
 { a5200,"Asteroids Vector Edition", 16384, 0xdd5ecbaa },
 { a5200,"Atlantis", 32768, 0xc99db95f },
 { a5200,"Attack of the Mutant Camels (A800)", 32768, 0x15cafede },
 { a5200,"Baby Berks", 32768, 0x8bc856cc },
 { a5200,"Bacterion (A800)", 8192, 0x4a2056d5 },
 { a5200,"Barnstorming", 16384, 0xf9addb80 },
 { a5200,"Basketball (A800)", 16384, 0x84acbf42 },
 { a5200,"Batty Builders (A800)", 32768, 0x67261f79 },
 { a5200,"BC's Quest For Tires (A800)", 32768, 0xa3a16596 },
 { a5200,"Beef Drop - Ultimate SD Digital Edition", 32768, 0x55545848 },
 { a5200,"Beef_Drop Demo (Fixed level 3)", 32768, 0x48a43bae },
 { a5200,"Blowsub", 16384, 0x3aa7bc0e },
 { a5200,"Boogie", 16384, 0x7a9d9f85 },
 { a5200,"BoulderDash (A800)", 32768, 0x00b9a3f4 },
 { a5200_40,"Bounty Bob Strikes Back", 40960, 0x57e7945e },
 { a5200,"Bowling", 16384, 0xd7237961 },
 { a5200,"Buried Bucks (A800)", 32768, 0x1d161671 },
 { a5200,"Captain Beeble (A800)", 32768, 0x2b760c6e },
 { a5200,"Capture The Flag (A800)", 16384, 0xd1d31e79 },
 { a5200,"Caverns Of Mars 2 (A800)", 16384, 0x2fdb70c1 },
 { a5200,"Caverns Of Mars (A800)", 32768, 0xd1b64581 },
 { a5200,"Caverns Of The Lost Miner (A800)", 32768, 0xff93b2db },
 { a5200,"Chess (Parker Brothers) (A800)", 32768, 0x0f6c1af4 },
 { a5200,"Chicken (A800)", 32768, 0xb2d018b1 },
 { a5200,"Chop Suey", 32768, 0x0244c402 },		//Atari800 improperly detects this as an ATARI Basic file.
 { a5200,"Christmas Cart", 16384, 0x38f4a6a4 },
 { a5200,"Claim Jumper (A800)", 16384, 0xb0553a77 },
 { a5200,"Cloud Burst (A800)", 16384, 0x58a0d074 },
 { a5200,"Clowns & Balloons (A800)", 32768, 0x0dafa507 },
 { a5200,"Crossfire (A800)", 32768, 0xd56be4bc },
 { a5200,"Crystal Castles (Clay) (A800)", 32768, 0xd3b10b5d },
 { a5200,"Crystal Castles (A800)", 32768, 0x596F61D1 },
 { a5200,"Curse Of The Lost Miner (A800)", 32768, 0x8cabcad2 },
 { a5200,"Curse Of The Lost Mines (A800)", 32768, 0xc15a1d9d },
 { a5200,"Deluxe Invaders (A800)", 16384, 0xaf796cfc },
 { a5200,"Demon Attack (A800)", 32768, 0x2174730e },
 { a5200,"Desmonds Dungeon (A800)", 32768, 0x1273a5d1 },
 { a5200,"Diamond Mine (A800)", 32768, 0x7882a1c0 },
 { a5200,"Dig Dug 10-9 (A800)", 32768, 0x89fde0da },
 { a5200,"Donkey Kong Arcade (Hack) (A800)", 32768, 0x8eee62a0 },
 { a5200,"Donkey Kong Jr Arcade (Hack) (A800)", 32768, 0x624cf75c },
 { a5200,"Donkey Kong Jr Enhanced (Hack) (A800)", 32768, 0x383a9157 },
 { a5200,"Donkey Kong Jr (A800)", 32768, 0xb136c3f5 },
 { a5200,"Donkey Kong (A800)", 32768, 0xe902c79e },
 { a5200,"Drelbs (A800)", 16384, 0xbce9e1c2 },
 { a5200,"Ducks Ahoy (A800)", 32768, 0x7a10c551 },
 { a5200,"Dust In The Wind", 32768, 0xf92da5f7 },
 { a5200,"Embargo (A800)", 16384, 0x803808cf },
 { a5200,"EMI Pool (A800)", 16384, 0x5b3ceac8 },
 { a5200,"Encounter (A800)", 32768, 0x6bd0efea },
 { a5200,"Enduro (5200)", 8192, 0x327633db },
 { a5200,"ET Phone Home! (A800)", 32768, 0x5e82a934 },
 { a5200,"Fast Eddie (A800)", 32768, 0xbc0d17bd },
 { a5200,"Fast Food (A800)", 16384, 0x246651b1 },
 { a5200,"Fishing Derby (A800)", 16384, 0xf8583e78 },
 { a5200,"Floyd The Droid (A800)", 8192, 0x89b2d7e5 },
 { a5200,"Forbidden Forest - Slinky (A800)", 32768, 0x219615d9 },
 { a5200,"Fort Apocalypse (A800)", 32768, 0x1b809acc },
 { a5200,"Freecell XE (A800)", 32768, 0x2d2a2807 },
 { a5200,"Freeway (A800)", 16384, 0xb506352f },
 { a5200,"Frisky Tom (Mouse speed fix) (Proto)", 32768, 0x37622411 },
 { a5200,"Frostbite 400 (A800)", 16384, 0x97e75867 },
 { a5200,"Galactic Chase (A800)", 8192, 0x4c5f1847 },
 { a5200,"Galaga (Proto) (A800)", 32768, 0xecda2354 },
 { a5200,"Gateway To Apshai (A800)", 32768, 0x59ec9114 },
 { a5200,"Gauntlet Demo", 32768, 0x3f7f9bd9 },
 { a5200,"Gebelli Compilation (A800)", 32768, 0xc05ff97c },
 { a5200,"Gorf (Digital)", 32768, 0x7f732dc9 },
 { a5200,"Gunpowder Charlie (A800)", 8192, 0x8deefa2f },
 { a5200,"Hyperblast! (A800)", 32768, 0x5ae93e04 },
 { a5200,"Intellidiscs", 32768, 0xe76a0fb6 },
 { a5200,"Ixion (A800)", 32768, 0xa84e68b9 },
 { a5200,"Jawbreaker (A800)", 32768, 0xb6150460 },
 { a5200,"Jet Boot Jack (A800)", 32768, 0xaf210f8e },
 { a5200,"Journey To The Planets (A800)", 32768, 0x31498fe6 },
 { a5200,"Jumpman Jr. (A800)", 32768, 0xfb35d43b },
 { a5200,"Juno First (A800)", 32768, 0x34928a3f },
 { a5200,"K-Star Patrol (A800)", 32768, 0xcb5355b9 },
 { a5200,"Kid Grid (A800)", 8192, 0x2ad24e49 },
 { a5200,"Kooky Diver 2021 (A800)", 32768, 0xe64eb7f1 },
 { a5200,"Kooky Klimber 2021 (A800)", 32768, 0xd0fe471b },
 { a5200,"Kooky's Quest 2021 (A800)", 32768, 0xd1425786 },
 { a5200,"Laser Gates (A800)", 32768, 0x73a3f5f4 },
 { a5200,"Magical Fairy Force (A800)", 32768, 0x2619c4f2 },
 { a5200,"Major Blink", 32768, 0xfe9abd19 },
 { a5200,"Mario Bros Arcade (A800)", 32768, 0x0d9ee13e },
 { a5200,"Missile Command Plus (A800)", 32768, 0xda25c34a },
 { a5200,"Mr. Cool (A800)", 32768, 0xb132a38d },
 { a5200,"Ms Pac-Man Encore (A800)", 32768, 0xdaeae9ad },
 { a5200,"Necromancer (A800)", 32768, 0x5b7303ed },
 { a5200,"O'Riley's Mine (A800)", 32768, 0x646bbe82 },
 { a5200,"Oil's Well (A800)", 32768, 0x0f77eb0d },
 { a5200,"Pac-man Fixed Munch", 32768, 0x21966b5c },
 { a5200,"Pac-man Plus (A800)", 32768, 0xd3363d1c },
 { a5200,"Pacman Arcade Demo V2 (A800)", 32768, 0xb3351c89 },
 { a5200,"Pacific Coast Highway (A800)", 32768, 0x4cc139d0 },
 { a5200,"Pastfinder (A800)", 32768, 0x366c9c2a },
 { a5200,"Phobos (A800)", 16384, 0x2fb8412a },
 { a5200,"Phoenix 2021 (A800)", 32768, 0x4ad9e737 },
 { a5200,"Pinhead", 16384, 0x2af2aa4b },
 { a5200,"Piracy 1621 (A800)", 32768, 0x762ec09c },
 { a5200,"Pitfall! (Classics Fix)", 32768, 0x78cd4061 },
 { a5200,"Pitstop (A800)", 32768, 0xc23d81f5 },
 { a5200,"Pooyan (A800)", 32768, 0x28210510 },
 { a5200,"Popeye Arcade (A800)", 32768, 0x87c94e0b },
 { a5200,"Preppie! II (A800)", 32768, 0x790a8be1 },
 { a5200,"Preppie! (A800)", 32768, 0x47dc1314 },
 { a5200,"Protector II (A800)", 32768, 0x2c1615d0 },
 { a5200,"Q-bert (No Button)", 8192, 0xaaf3d843 },
 { a5200,"Rainbow Walker (A800)", 16384, 0xcfe4aa0c },
 { a5200,"Rally Speedway (A800)", 32768, 0xd9e3fb4d },
 { a5200,"Rampage (A800)", 32768, 0xb3f352f2 },
 { a5200,"Ramses' Revenge 2021 BC (A800)", 32768, 0xc5aae92b },
 { a5200,"Raster Music Tracker", 32768, 0xc790a3a0 },
 { a5200,"Ratcatcher (A800)", 32768, 0x17c7708d },
 { a5200,"Realsports Curling", 32768, 0x0b5b6fbb },
 { a5200,"Rob n Banks (A800)", 32768, 0x9c34cc76 },
 { a5200,"Robot Dungeon 2121 (A800)", 32768, 0x971027bd },
 { a5200,"Rockball (A800)", 32768, 0xb975d952 },
 { a5200,"Rolltris (A800)", 32768, 0x39eb84a0 },
 { a5200,"Runner Bear (A800)", 32768, 0x9a4f1056 },
 { a5200,"Satan's Hollow (A800)", 32768, 0xfdf0f296 },
 { a5200,"Savage Pond (A800)", 16384, 0xc1f458e6 },
 { a5200,"Scramble (A800)", 32768, 0x41e48cff },
 { a5200,"Sea Chase (A800)", 16384, 0xa87c92e0 },
 { a5200,"Sea Dragon (A800)", 16384, 0x20b68254 },
 { a5200,"Shamus Case II (A800)", 32768, 0xa0e29983 },
 { a5200,"Shamus (A800)", 32768, 0x04eb6f41 },
 { a5200,"Sinistar (A800)", 32768, 0xfb1429b4 },
 { a5200,"Slime (A800)", 32768, 0x4b098ebc },
 { a5200,"Space Assailants 2121 (A800)", 32768, 0xb10338f5 },
 { a5200,"SpeedAce (A800)", 32768, 0x4e35e0fc },
 { a5200,"Spy Hunter (A800)", 32768, 0x4eff1e32 },
 { a5200,"Star Rider (A800)", 16384, 0xb9a9a96b },
 { a5200,"Tapper (A800)", 32768, 0xc18d30fa },
 { a5200,"Tempest (AtariAge)", 32768, 0x015e08b0 },
 { a5200,"Tennis (A800)", 16384, 0xd7e15040 },
 { a5200,"Thetris (A800)", 32768, 0x2f02d826 },
 { a5200,"TimeRunner (A800)", 32768, 0x6483d20c },
 { a5200,"TimeSlip (A800)", 32768, 0x97a9e3f7 },
 { a5200,"Train 1 (A800)", 32768, 0x6e32458b },
 { a5200,"Train 2 (A800)", 32768, 0x3f26a60c },
 { a5200,"Train 3 (A800)", 32768, 0x8716e7c8 },
 { a5200,"Turmoil (A800)", 32768, 0xe3ae4170 },
 { a5200,"Up'n Down (A800)", 32768, 0xb08ca999 },
 { a5200,"Yahtzee 2021 (A800)", 32768, 0x63a5dc8f },
 { a5200,"Worm War I (A800)", 32768, 0x271fdab5 },
 { a5200,"Yar's Strike (A800)", 8192, 0xd1c6f325 },
 { a5200,"Zaxxon 32k (A800)", 32768, 0xbddfd255 },
 { a5200_64,"Berks4", 65536, 0x56aca9c3 },
 { a5200_64,"Dropzone (A800)", 65536, 0x42214594 },
 { a5200_64,"ET Phone Home! (A800)", 65536, 0x0fd0ef86 },
 { a5200_64,"Laser Hawk (A800)", 65536, 0x2e2bee02 },
 { a5200_64,"Mr. Do (A800)", 65536, 0x4d66d5ab },
 { a5200_64,"M.U.L.E (A800)", 65536, 0x1f21446e },
 { a5200_64,"Oil's Well (Title) (A800)", 65536, 0x6a1ebc7d },
 { a5200_64,"Rampage 64K (A800)", 65536, 0xdf48d7d4 },
 { a5200_64,"Sea Dragon 64k (A800)", 65536, 0x66b4ea6b },
 { a5200_64,"Super Pac-man 64k (A800)", 65536, 0x93866191 },
 { a5200_512,"Bosconian (A800)", 524288, 0xbbc7d63c },
 { -1,"",0,0},
} ;
