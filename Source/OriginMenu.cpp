#include "stdafx.h"

struct teleportation_place {
	char* place_name;
	float x, y, z;
};

teleportation_place Places[] = {
	{ "Michael's House",-852.4f,160.0f,65.6f },
	{ "Franklin's House",7.9f,548.1f,175.5f },
	{ "Trevor's Trailer",1985.7f,3812.2f,32.2f },
	{ "Airport Entrance",-1034.6f,-2733.6f,13.8f },
	{ "Airport Field",-1336.0f,-3044.0f,13.9f },
	{ "Elysian Island",338.2f,-2715.9f,38.5f },
	{ "Strip Club DJ Booth", 126.135F, -1278.583F, 29.270F },
	{ "Stripclub", 127.4f, -1307.7f, 29.2f },
	{ "Jetsam",760.4f,-2943.2f,5.8f },
	{ "Stripclub",127.4f,-1307.7f,29.2f },
	{ "Elburro Heights",1384.0f,-2057.1f,52.0f },
	{ "Maze Bank",-75.015F, -818.215F, 326.176F },
	{ "Ferris Wheel",-1670.7f,-1125.0f,13.0f },
	{ "Chumash",-3192.6f,1100.0f,20.2f },
	{ "Windfarm",2354.0f,1830.3f,101.1f },
	{ "Military Base",-2047.4f,3132.1f,32.8f },
	{ "McKenzie Airfield",2121.7f,4796.3f,41.1f },
	{ "Desert Airfield",1747.0f,3273.7f,41.1f },
	{ "Chilliad",425.4f,5614.3f,766.5f },
	{ "Waypoint", 666.6f, 666.6f, 666.6f } ,
	{ "10 Car Garage Back Room", 223.193f, -967.322f, 99.000f },
	{ "Altruist Cult Camp", -1170.841f, 4926.646f, 224.295f },
	{ "FIB Roof", 150.126f, -754.591f, 262.865f },
	{ "FIB Top Floor", 135.733f, -749.216f, 258.152f },
	{ "God's thumb", -1006.402f, 6272.383f, 1.503f },
	{ "Humane Labs Entrance", 3619.749f, 2742.740f, 28.690f },
	{ "Humane Labs Tunnel", 3525.495f, 3705.301f, 20.992f },
	{ "IAA Office", 117.220f, -620.938f, 206.047f },
	{ "IAA Roof", 134.085f, -637.859f, 262.851f },
	{ "Main LS Customs", -365.425f, -131.809f, 37.873f },
	{ "Mineshaft", -595.342f, 2086.008f, 131.412f },
	{ "NOOSE Headquarters", 2535.243f, -383.799f, 92.993f },
	{ "Pacific Standard Bank Vault", 255.851f, 217.030f, 101.683f },
	{ "Pacific Standard Bank", 235.046f, 216.434f, 106.287f },
	{ "Police Station", 436.491f, -982.172f, 30.699f },
	{ "Sunken Body", -3161.078f, 3001.998f, -37.974f },
	{ "Sunken Cargo Ship", 3199.748f, -379.018f, -22.500f },
	{ "Sunken Plane", -942.350f, 6608.752f, -20.912f },
	{ "Top of the Mt Chilad", 450.718f, 5566.614f, 806.183f },
	{ "Underwater Hatch", 4273.950f, 2975.714f, -170.746f },
	{ "Underwater UFO", 762.426f, 7380.371f, -111.377f },
	{ "Windmill Top", 2026.677f, 1842.684f, 133.313f },
};

LPCSTR vehiculeModels[63][10] = {
	{ "DINGHY", "DINGHY2", "DINGHY3", "DINGHY4", "JETMAX", "MARQUIS", "PREDATOR", "SEASHARK", "SEASHARK2", "SEASHARK3" },//boats
	{ "SPEEDER", "SPEEDER2", "SQUALO", "SUBMERSIBLE", "SUBMERSIBLE2","SUNTRAP", "TORO", "TORO2", "TROPIC", "TROPIC2" },//boats
	{ "TUG", "", "", "", "", "", "", "", "", "" },

	{ "BENSON", "BIFF", "HAULER", "MULE", "MULE2","MULE3", "PACKER", "PHANTOM", "PHANTOM2", "POUNDER" },//Commercial
	{ "STOCKADE","STOCKADE3", "", "", "", "", "", "", "", "" },//Commercial

	{ "BLISTA", "BRIOSO", "DILETTANTE", "DILETTANTE2", "ISSI2","PANTO", "PRAIRIE", "RHAPSODY", "", "" }, //Compacts

	{ "COGCABRIO", "EXEMPLAR", "F620", "FELON", "FELON2","JACKAL", "ORACLE", "ORACLE2", "SENTINEL", "SENTINEL2" }, //Coupes
	{ "WINDSOR", "WINDSOR2", "ZION", "ZION2", "", "", "", "", "", "" },//Coupes

	{ "BMX", "CRUISER", "FIXTER", "SCORCHER", "TRIBIKE","TRIBIKE2", "TRIBIKE3", "", "", "" }, //Cycles

	{ "AMBULANCE", "FBI", "FBI2", "FIRETRUK", "LGUARD","PBUS", "PRANGER", "POLICE", "POLICE2", "POLICE3" },//Emergency
	{ "POLICE4", "POLICEB", "POLICEOLD1", "POLICEOLD2", "POLICET","SHERIFF", "SHERIFF2", "RIOT", "", "" },// Emergency

	{ "ANNIHILATOR", "BLIMP", "BLIMP2", "BUZZARD", "BUZZARD2","CARGOBOB", "CARGOBOB2", "CARGOBOB3", "CARGOBOB4", "FROGGER" },//Helicopters
	{ "FROGGER2", "MAVERICK", "POLMAV", "SAVAGE", "SKYLIFT","SUPERVOLITO", "SUPERVOLITO2", "SWIFT", "SWIFT2", "VALKYRIE" },// Helicopters
	{ "VALKYRIE2", "VOLATUS", "", "", "", "", "", "", "", "" },// Helicopters

	{ "BULLDOZER", "CUTTER", "DUMP", "FLATBED", "GUARDIAN","HANDLER", "MIXER", "MIXER2", "RUBBLE", "TIPTRUCK" },//Industrial
	{ "TIPTRUCK2", "", "", "", "", "", "", "", "", "" },//Industrial

	{ "BARRACKS", "BARRACKS2", "BARRACKS3", "CRUSADER", "RHINO", "", "", "", "", "" },//Military

	{ "AKUMA", "AVARUS", "BAGGER", "BATI", "BATI2","BF400", "CARBONRS", "CHIMERA", "CLIFFHANGER", "DAEMON" },//Motorcycles
	{ "DAEMON2", "DEFILER", "DIABLOUS", "DIABLOUS2", "DOUBLE", "ENDURO", "ESSKEY","FAGGIO", "FAGGIO2", "FAGGIO3" },//Motorcycles
	{ "FCR", "FCR2", "GARGOYLE", "HAKUCHOU", "HAKUCHOU2", "HEXER", "INNOVATION", "LECTRO", "MANCHEZ", "NEMESIS" },//Motorcycles
	{ "NIGHTBLADE", "PCJ", "RATBIKE", "RUFFIAN","SANCHEZ", "SANCHEZ2", "SANCTUS", "SHOTARO", "SOVEREIGN","THRUST" },//Motorcycles
	{ "VADER", "VINDICATOR", "VORTEX", "WOLFSBANE","ZOMBIEA", "ZOMBIEB", "", "", "", "" },//Motorcycles

	{ "BLADE", "BUCCANEER", "BUCCANEER2", "CHINO", "CHINO2","COQUETTE3", "DOMINATOR", "DOMINATOR2", "DUKES", "DUKES2" },//Muscle
	{ "GAUNTLET", "GAUNTLET2", "FACTION", "FACTION2", "FACTION3","HOTKNIFE", "LURCHER", "MOONBEAM", "MOONBEAM2", "NIGHTSHADE" },//Muscle
	{ "PHOENIX", "PICADOR", "RATLOADER", "RATLOADER2", "RUINER", "RUINER2", "RUINER3","SABREGT", "SABREGT2", "SLAMVAN" },//Muscle
	{ "SLAMVAN2", "SLAMVAN3","STALION", "STALION2", "TAMPA", "VIGERO", "VIRGO","VIRGO2", "VIRGO3", "VOODOO" },// Muscle
	{ "VOODOO2", "", "", "", "", "", "", "", "", "" },//Muscle

	{ "BFINJECTION", "BIFTA", "BLAZER", "BLAZER2", "BLAZER3","BLAZER4", "BLAZER5", "BODHI2", "BRAWLER", "DLOADER" },//OffRoad
	{ "DUBSTA3","DUNE", "DUNE2", "DUNE4", "DUNE5", "INSURGENT", "INSURGENT2", "KALAHARI","MARSHALL", "MESA3" },//OffRoad
	{ "MONSTER", "RANCHERXL", "RANCHERXL2","REBEL", "REBEL2", "SANDKING", "SANDKING2", "TECHNICAL", "TECHNICAL2","TROPHYTRUCK" },//OffRoad
	{ "TROPHYTRUCK2", "", "", "", "", "", "", "", "", "" },//OffRoad

	{ "BESRA", "CARGOPLANE", "CUBAN800", "DODO", "DUSTER","HYDRA", "JET", "LAZER", "LUXOR", "LUXOR2" },//Planes
	{ "MAMMATUS", "MILJET", "NIMBUS", "SHAMAL", "STUNT","TITAN", "VELUM", "VELUM2", "VESTRA", "" },//Planes

	{ "ASEA", "ASEA2", "ASTEROPE", "COG55", "COG552","COGNOSCENTI", "COGNOSCENTI2", "EMPEROR", "EMPEROR2", "EMPEROR3" },//Sedans
	{ "FUGITIVE", "GLENDALE", "INGOT", "INTRUDER", "LIMO2","PREMIER", "PRIMO", "PRIMO2", "REGINA", "ROMERO" },// Sedans
	{ "SCHAFTER2", "SCHAFTER5", "SCHAFTER6", "STANIER", "STRATUM","STRETCH", "SUPERD", "SURGE", "TAILGATER", "WARRENER" },//Sedans
	{ "WASHINGTON", "", "", "", "", "", "", "", "", "" },//Sedans

	{ "AIRBUS", "BRICKADE", "BUS", "COACH", "RALLYTRUCK","RENTALBUS", "TAXI", "TOURBUS", "TRASH", "TRASH2" },//Service
	{ "WASTELANDER", "", "", "", "", "", "", "", "", "" },//Service

	{ "ALPHA", "BANSHEE", "BESTIAGTS", "BLISTA2", "BLISTA3","BUFFALO", "BUFFALO2", "BUFFALO3", "CARBONIZZARE", "COMET2" },//Sports
	{ "COMET3","COQUETTE", "ELEGY", "ELEGY2", "FELTZER2", "FUROREGT", "FUSILADE","FUTO", "JESTER", "JESTER2" },//Sports
	{ "KHAMELION", "KURUMA","KURUMA2", "LYNX", "MASSACRO", "MASSACRO2", "NINEF","NINEF2", "OMNIS", "PENUMBRA" },//Sports
	{ "RAPIDGT", "RAPIDGT2","RAPTOR", "SCHAFTER3", "SCHAFTER4", "SCHWARTZER", "SEVEN70", "SPECTER", "SPECTER2","SULTAN" },//Sports
	{ "SURANO", "TAMPA2", "TROPOS", "VERLIERER2", "", "", "", "", "", "" },

	{ "BTYPE", "BTYPE2", "BTYPE3", "CASCO", "COQUETTE2","FELTZER3", "JB700", "MAMBA", "MANANA", "MONROE" },//SportsClassics
	{ "PEYOTE", "PIGALLE", "STINGER", "STINGERGT", "TORNADO","TORNADO2", "TORNADO3", "TORNADO4", "TORNADO5", "TORNADO6" },//SportsClassics
	{ "ZTYPE", "", "", "", "", "", "", "", "", "" },//SportsClassics

	{ "ADDER", "BANSHEE2", "BULLET", "CHEETAH", "ENTITYXF","FMJ", "SHEAVA", "INFERNUS", "ITALIGTB", "ITALIGTB2" },//Super
	{ "NERO", "NERO2","OSIRIS", "LE7B", "PENETRATOR", "PFISTER811", "PROTOTIPO", "REAPER", "SULTANRS", "T20" },//Super
	{ "TEMPESTA", "TURISMOR", "TYRUS", "VACCA", "VOLTIC", "VOLTIC2", "ZENTORNO", "", "", "" },//Super

	{ "BALLER", "BALLER2", "BALLER3", "BALLER4", "BALLER5","BALLER6", "BJXL", "CAVALCADE", "CAVALCADE2", "CONTENDER" },//SUVs
	{ "DUBSTA", "DUBSTA2", "FQ2", "GRANGER", "GRESLEY","HABANERO", "HUNTLEY", "LANDSTALKER", "MESA", "MESA2" },//SUVs
	{ "PATRIOT", "RADI", "ROCOTO", "SEMINOLE", "SERRANO","XLS", "XLS2", "", "", "" },//SUVs

	{ "ARMYTANKER", "ARMYTRAILER", "ARMYTRAILER2", "BALETRAILER", "BOATTRAILER","DOCKTRAILER", "FREIGHTTRAILER", "GRAINTRAILER", "PROPTRAILER", "RAKETRAILER" },//Trailer
	{ "TANKER", "TANKER2", "TR2", "TR3", "TR4","TRAILERLOGS", "TRAILERS", "TRAILERS2", "TRAILERS3", "TRAILERSMALL" },//Trailer
	{ "TRFLAT", "TVTRAILER", "", "", "", "", "", "", "", "" },//Trailer

	{ "CABLECAR", "FREIGHT", "FREIGHTCAR", "FREIGHTCONT1", "FREIGHTCONT2","FREIGHTGRAIN", "METROTRAIN", "TANKERCAR", "", "" },//Trains

	{ "AIRTUG", "CADDY", "CADDY2", "DOCKTUG", "FORKLIFT","MOWER", "RIPLEY", "SADLER", "SADLER2", "SCRAP" },//Utility
	{ "TOWTRUCK", "TOWTRUCK2", "TRACTOR", "TRACTOR2", "TRACTOR3","UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3", "", "" },//Utility

	{ "BISON", "BISON2", "BISON3", "BOBCATXL", "BOXVILLE","BOXVILLE2", "BOXVILLE3", "BOXVILLE4", "BOXVILLE5", "BURRITO" },//Vans
	{ "BURRITO2","BURRITO3", "BURRITO4", "BURRITO5", "CAMPER", "GBURRITO","GBURRITO2", "JOURNEY", "MINIVAN", "MINIVAN2" },//Vans 
	{ "PARADISE","PONY", "PONY2", "RUMPO", "RUMPO2", "RUMPO3","SPEEDO", "SPEEDO2", "SURFER", "SURFER2" },
	{ "TACO","YOUGA", "YOUGA2", "", "", "", "", "", "", "" },//Vans

};

char* veh_cat(int index)
{
	switch (index)
	{
	case 1: case 2: case 3: return "Boats";
	case 4: case 5: return "Commercial";
	case 6: return "Compacts";
	case 7: case 8: return "Coupes";
	case 9: return "Cycles";
	case 10: case 11: return "Emergency";
	case 12: case 13: case 14: return "Helicopters";
	case 15: case 16: return "Industrial";
	case 17: return "Military";
	case 18: case 19: case 20: case 21: case 22: return "Motorcycles";
	case 23: case 24: case 25: case 26: case 27: return "Muscle";
	case 28: case 29: case 30: case 31: return "OffRoad";
	case 32: case 33: return "Planes";
	case 34: case 35: case 36: case 37: return "Sedans";
	case 38: case 39: return "Service";
	case 40: case 41: case  42: case 43: case 44: return "Sports";
	case 45: case 46: case  47:	return "SportsClassics";
	case 48: case 49: case 50: return "Super";
	case 51: case 52: case 53: return "Suv";
	case 54: case 55: case 56: return "Trailer";
	case 57: return "Trains";
	case 58: case 59: return "Utility";
	case 60: case 61: case 62: case 63:	return "Vans";
	default: return "Vehicules";
	}
}

char* veh_cat_array[] = { "Boats", "Commercial", "Compacts", "Coupes", "Cycles", "Emergency", "Helicopters", "Industrial", "Military", "Motorcycles", "Muscle", "OffRoad", "Planes", "Sedans", "Service", "Sports", "SportsClassics", "Super", "Suv", "Trailer", "Trains", "Utility", "Vans", "Vehicules" };

std::string MoneyModel[] = { "prop_gold_bar", "prop_weed_pallet", "Prop_weed_01", "prop_money_bag_01" };
LPCSTR MoneyModelMenu[] = { "Gold bar", "Weed pallet", "Weed plantation", "Money bag" };

LPCSTR platesTypes[] = { "Blue on white 1", "Yellow on black", "Yellow on blue", "Blue on white 2", "Blue on white 3", "North Yankton" };

LPCSTR pedModels[70][10] = {
	{ "player_zero", "player_one", "player_two", "a_c_boar", "a_c_chimp", "a_c_cow", "a_c_coyote", "a_c_deer", "a_c_fish", "a_c_hen" },
	{ "a_c_cat_01", "a_c_chickenhawk", "a_c_cormorant", "a_c_crow", "a_c_dolphin", "a_c_humpback", "a_c_killerwhale", "a_c_pigeon", "a_c_seagull", "a_c_sharkhammer" },
	{ "a_c_pig", "a_c_rat", "a_c_rhesus", "a_c_chop", "a_c_husky", "a_c_mtlion", "a_c_retriever", "a_c_sharktiger", "a_c_shepherd", "s_m_m_movalien_01" },
	{ "a_f_m_beach_01", "a_f_m_bevhills_01", "a_f_m_bevhills_02", "a_f_m_bodybuild_01", "a_f_m_business_02", "a_f_m_downtown_01", "a_f_m_eastsa_01", "a_f_m_eastsa_02", "a_f_m_fatbla_01", "a_f_m_fatcult_01" },
	{ "a_f_m_fatwhite_01", "a_f_m_ktown_01", "a_f_m_ktown_02", "a_f_m_prolhost_01", "a_f_m_salton_01", "a_f_m_skidrow_01", "a_f_m_soucentmc_01", "a_f_m_soucent_01", "a_f_m_soucent_02", "a_f_m_tourist_01" },
	{ "a_f_m_trampbeac_01", "a_f_m_tramp_01", "a_f_o_genstreet_01", "a_f_o_indian_01", "a_f_o_ktown_01", "a_f_o_salton_01", "a_f_o_soucent_01", "a_f_o_soucent_02", "a_f_y_beach_01", "a_f_y_bevhills_01" },
	{ "a_f_y_bevhills_02", "a_f_y_bevhills_03", "a_f_y_bevhills_04", "a_f_y_business_01", "a_f_y_business_02", "a_f_y_business_03", "a_f_y_business_04", "a_f_y_eastsa_01", "a_f_y_eastsa_02", "a_f_y_eastsa_03" },
	{ "a_f_y_epsilon_01", "a_f_y_fitness_01", "a_f_y_fitness_02", "a_f_y_genhot_01", "a_f_y_golfer_01", "a_f_y_hiker_01", "a_f_y_hippie_01", "a_f_y_hipster_01", "a_f_y_hipster_02", "a_f_y_hipster_03" },
	{ "a_f_y_hipster_04", "a_f_y_indian_01", "a_f_y_juggalo_01", "a_f_y_runner_01", "a_f_y_rurmeth_01", "a_f_y_scdressy_01", "a_f_y_skater_01", "a_f_y_soucent_01", "a_f_y_soucent_02", "a_f_y_soucent_03" },
	{ "a_f_y_tennis_01", "a_f_y_topless_01", "a_f_y_tourist_01", "a_f_y_tourist_02", "a_f_y_vinewood_01", "a_f_y_vinewood_02", "a_f_y_vinewood_03", "a_f_y_vinewood_04", "a_f_y_yoga_01", "a_m_m_acult_01" },
	{ "a_m_m_afriamer_01", "a_m_m_beach_01", "a_m_m_beach_02", "a_m_m_bevhills_01", "a_m_m_bevhills_02", "a_m_m_business_01", "a_m_m_eastsa_01", "a_m_m_eastsa_02", "a_m_m_farmer_01", "a_m_m_fatlatin_01" },
	{ "a_m_m_genfat_01", "a_m_m_genfat_02", "a_m_m_golfer_01", "a_m_m_hasjew_01", "a_m_m_hillbilly_01", "a_m_m_hillbilly_02", "a_m_m_indian_01", "a_m_m_ktown_01", "a_m_m_malibu_01", "a_m_m_mexcntry_01" },
	{ "a_m_m_mexlabor_01", "a_m_m_og_boss_01", "a_m_m_paparazzi_01", "a_m_m_polynesian_01", "a_m_m_prolhost_01", "a_m_m_rurmeth_01", "a_m_m_salton_01", "a_m_m_salton_02", "a_m_m_salton_03", "a_m_m_salton_04" },
	{ "a_m_m_skater_01", "a_m_m_skidrow_01", "a_m_m_socenlat_01", "a_m_m_soucent_01", "a_m_m_soucent_02", "a_m_m_soucent_03", "a_m_m_soucent_04", "a_m_m_stlat_02", "a_m_m_tennis_01", "a_m_m_tourist_01" },
	{ "a_m_m_trampbeac_01", "a_m_m_tramp_01", "a_m_m_tranvest_01", "a_m_m_tranvest_02", "a_m_o_acult_01", "a_m_o_acult_02", "a_m_o_beach_01", "a_m_o_genstreet_01", "a_m_o_ktown_01", "a_m_o_salton_01" },
	{ "a_m_o_soucent_01", "a_m_o_soucent_02", "a_m_o_soucent_03", "a_m_o_tramp_01", "a_m_y_acult_01", "a_m_y_acult_02", "a_m_y_beachvesp_01", "a_m_y_beachvesp_02", "a_m_y_beach_01", "a_m_y_beach_02" },
	{ "a_m_y_beach_03", "a_m_y_bevhills_01", "a_m_y_bevhills_02", "a_m_y_breakdance_01", "a_m_y_busicas_01", "a_m_y_business_01", "a_m_y_business_02", "a_m_y_business_03", "a_m_y_cyclist_01", "a_m_y_dhill_01" },
	{ "a_m_y_downtown_01", "a_m_y_eastsa_01", "a_m_y_eastsa_02", "a_m_y_epsilon_01", "a_m_y_epsilon_02", "a_m_y_gay_01", "a_m_y_gay_02", "a_m_y_genstreet_01", "a_m_y_genstreet_02", "a_m_y_golfer_01" },
	{ "a_m_y_hasjew_01", "a_m_y_hiker_01", "a_m_y_hippy_01", "a_m_y_hipster_01", "a_m_y_hipster_02", "a_m_y_hipster_03", "a_m_y_indian_01", "a_m_y_jetski_01", "a_m_y_juggalo_01", "a_m_y_ktown_01" },
	{ "a_m_y_ktown_02", "a_m_y_latino_01", "a_m_y_methhead_01", "a_m_y_mexthug_01", "a_m_y_motox_01", "a_m_y_motox_02", "a_m_y_musclbeac_01", "a_m_y_musclbeac_02", "a_m_y_polynesian_01", "a_m_y_roadcyc_01" },
	{ "a_m_y_runner_01", "a_m_y_runner_02", "a_m_y_salton_01", "a_m_y_skater_01", "a_m_y_skater_02", "a_m_y_soucent_01", "a_m_y_soucent_02", "a_m_y_soucent_03", "a_m_y_soucent_04", "a_m_y_stbla_01" },
	{ "a_m_y_stbla_02", "a_m_y_stlat_01", "a_m_y_stwhi_01", "a_m_y_stwhi_02", "a_m_y_sunbathe_01", "a_m_y_surfer_01", "a_m_y_vindouche_01", "a_m_y_vinewood_01", "a_m_y_vinewood_02", "a_m_y_vinewood_03" },
	{ "a_m_y_vinewood_04", "a_m_y_yoga_01", "u_m_y_proldriver_01", "u_m_y_rsranger_01", "u_m_y_sbike", "u_m_y_staggrm_01", "u_m_y_tattoo_01", "csb_abigail", "csb_anita", "csb_anton" },
	{ "csb_ballasog", "csb_bride", "csb_burgerdrug", "csb_car3guy1", "csb_car3guy2", "csb_chef", "csb_chin_goon", "csb_cletus", "csb_cop", "csb_customer" },
	{ "csb_denise_friend", "csb_fos_rep", "csb_g", "csb_groom", "csb_grove_str_dlr", "csb_hao", "csb_hugh", "csb_imran", "csb_janitor", "csb_maude" },
	{ "csb_mweather", "csb_ortega", "csb_oscar", "csb_porndudes", "csb_porndudes_p", "csb_prologuedriver", "csb_prolsec", "csb_ramp_gang", "csb_ramp_hic", "csb_ramp_hipster" },
	{ "csb_ramp_marine", "csb_ramp_mex", "csb_reporter", "csb_roccopelosi", "csb_screen_writer", "csb_stripper_01", "csb_stripper_02", "csb_tonya", "csb_trafficwarden", "cs_amandatownley" },
	{ "cs_andreas", "cs_ashley", "cs_bankman", "cs_barry", "cs_barry_p", "cs_beverly", "cs_beverly_p", "cs_brad", "cs_bradcadaver", "cs_carbuyer" },
	{ "cs_casey", "cs_chengsr", "cs_chrisformage", "cs_clay", "cs_dale", "cs_davenorton", "cs_debra", "cs_denise", "cs_devin", "cs_dom" },
	{ "cs_dreyfuss", "cs_drfriedlander", "cs_fabien", "cs_fbisuit_01", "cs_floyd", "cs_guadalope", "cs_gurk", "cs_hunter", "cs_janet", "cs_jewelass" },
	{ "cs_jimmyboston", "cs_jimmydisanto", "cs_joeminuteman", "cs_johnnyklebitz", "cs_josef", "cs_josh", "cs_lamardavis", "cs_lazlow", "cs_lestercrest", "cs_lifeinvad_01" },
	{ "cs_magenta", "cs_manuel", "cs_marnie", "cs_martinmadrazo", "cs_maryann", "cs_michelle", "cs_milton", "cs_molly", "cs_movpremf_01", "cs_movpremmale" },
	{ "cs_mrk", "cs_mrsphillips", "cs_mrs_thornhill", "cs_natalia", "cs_nervousron", "cs_nigel", "cs_old_man1a", "cs_old_man2", "cs_omega", "cs_orleans" },
	{ "cs_paper", "cs_paper_p", "cs_patricia", "cs_priest", "cs_prolsec_02", "cs_russiandrunk", "cs_siemonyetarian", "cs_solomon", "cs_stevehains", "cs_stretch" },
	{ "cs_tanisha", "cs_taocheng", "cs_taostranslator", "cs_tenniscoach", "cs_terry", "cs_tom", "cs_tomepsilon", "cs_tracydisanto", "cs_wade", "cs_zimbor" },
	{ "g_f_y_ballas_01", "g_f_y_families_01", "g_f_y_lost_01", "g_f_y_vagos_01", "g_m_m_armboss_01", "g_m_m_armgoon_01", "g_m_m_armlieut_01", "g_m_m_chemwork_01", "g_m_m_chemwork_01_p", "g_m_m_chiboss_01" },
	{ "g_m_m_chiboss_01_p", "g_m_m_chicold_01", "g_m_m_chicold_01_p", "g_m_m_chigoon_01", "g_m_m_chigoon_01_p", "g_m_m_chigoon_02", "g_m_m_korboss_01", "g_m_m_mexboss_01", "g_m_m_mexboss_02", "g_m_y_armgoon_02" },
	{ "g_m_y_azteca_01", "g_m_y_ballaeast_01", "g_m_y_ballaorig_01", "g_m_y_ballasout_01", "g_m_y_famca_01", "g_m_y_famdnf_01", "g_m_y_famfor_01", "g_m_y_korean_01", "g_m_y_korean_02", "g_m_y_korlieut_01" },
	{ "g_m_y_lost_01", "g_m_y_lost_02", "g_m_y_lost_03", "g_m_y_mexgang_01", "g_m_y_mexgoon_01", "g_m_y_mexgoon_02", "g_m_y_mexgoon_03", "g_m_y_mexgoon_03_p", "g_m_y_pologoon_01", "g_m_y_pologoon_01_p" },
	{ "g_m_y_pologoon_02", "g_m_y_pologoon_02_p", "g_m_y_salvaboss_01", "g_m_y_salvagoon_01", "g_m_y_salvagoon_02", "g_m_y_salvagoon_03", "g_m_y_salvagoon_03_p", "g_m_y_strpunk_01", "g_m_y_strpunk_02", "hc_driver" },
	{ "hc_gunman", "hc_hacker", "ig_abigail", "ig_amandatownley", "ig_andreas", "ig_ashley", "ig_ballasog", "ig_bankman", "ig_barry", "ig_barry_p" },
	{ "ig_bestmen", "ig_beverly", "ig_beverly_p", "ig_brad", "ig_bride", "ig_car3guy1", "ig_car3guy2", "ig_casey", "ig_chef", "ig_chengsr" },
	{ "ig_chrisformage", "ig_clay", "ig_claypain", "ig_cletus", "ig_dale", "ig_davenorton", "ig_denise", "ig_devin", "ig_dom", "ig_dreyfuss" },
	{ "ig_drfriedlander", "ig_fabien", "ig_fbisuit_01", "ig_floyd", "ig_groom", "ig_hao", "ig_hunter", "ig_janet", "ig_jay_norris", "ig_jewelass" },
	{ "ig_jimmyboston", "ig_jimmydisanto", "ig_joeminuteman", "ig_johnnyklebitz", "ig_josef", "ig_josh", "ig_kerrymcintosh", "ig_lamardavis", "ig_lazlow", "ig_lestercrest" },
	{ "ig_lifeinvad_01", "ig_lifeinvad_02", "ig_magenta", "ig_manuel", "ig_marnie", "ig_maryann", "ig_maude", "ig_michelle", "ig_milton", "ig_molly" },
	{ "ig_mrk", "ig_mrsphillips", "ig_mrs_thornhill", "ig_natalia", "ig_nervousron", "ig_nigel", "ig_old_man1a", "ig_old_man2", "ig_omega", "ig_oneil" },
	{ "ig_orleans", "ig_ortega", "ig_paper", "ig_patricia", "ig_priest", "ig_prolsec_02", "ig_ramp_gang", "ig_ramp_hic", "ig_ramp_hipster", "ig_ramp_mex" },
	{ "ig_roccopelosi", "ig_russiandrunk", "ig_screen_writer", "ig_siemonyetarian", "ig_solomon", "ig_stevehains", "ig_stretch", "ig_talina", "ig_tanisha", "ig_taocheng" },
	{ "ig_taostranslator", "ig_taostranslator_p", "ig_tenniscoach", "ig_terry", "ig_tomepsilon", "ig_tonya", "ig_tracydisanto", "ig_trafficwarden", "ig_tylerdix", "ig_wade" },
	{ "ig_zimbor", "mp_f_deadhooker", "mp_f_freemode_01", "mp_f_misty_01", "mp_f_stripperlite", "mp_g_m_pros_01", "mp_headtargets", "mp_m_claude_01", "mp_m_exarmy_01", "mp_m_famdd_01" },
	{ "mp_m_fibsec_01", "mp_m_freemode_01", "mp_m_marston_01", "mp_m_niko_01", "mp_m_shopkeep_01", "mp_s_m_armoured_01", "", "", "", "" },
	{ "", "s_f_m_fembarber", "s_f_m_maid_01", "s_f_m_shop_high", "s_f_m_sweatshop_01", "s_f_y_airhostess_01", "s_f_y_bartender_01", "s_f_y_baywatch_01", "s_f_y_cop_01", "s_f_y_factory_01" },
	{ "s_f_y_hooker_01", "s_f_y_hooker_02", "s_f_y_hooker_03", "s_f_y_migrant_01", "s_f_y_movprem_01", "s_f_y_ranger_01", "s_f_y_scrubs_01", "s_f_y_sheriff_01", "s_f_y_shop_low", "s_f_y_shop_mid" },
	{ "s_f_y_stripperlite", "s_f_y_stripper_01", "s_f_y_stripper_02", "s_f_y_sweatshop_01", "s_m_m_ammucountry", "s_m_m_armoured_01", "s_m_m_armoured_02", "s_m_m_autoshop_01", "s_m_m_autoshop_02", "s_m_m_bouncer_01" },
	{ "s_m_m_chemsec_01", "s_m_m_ciasec_01", "s_m_m_cntrybar_01", "s_m_m_dockwork_01", "s_m_m_doctor_01", "s_m_m_fiboffice_01", "s_m_m_fiboffice_02", "s_m_m_gaffer_01", "s_m_m_gardener_01", "s_m_m_gentransport" },
	{ "s_m_m_hairdress_01", "s_m_m_highsec_01", "s_m_m_highsec_02", "s_m_m_janitor", "s_m_m_lathandy_01", "s_m_m_lifeinvad_01", "s_m_m_linecook", "s_m_m_lsmetro_01", "s_m_m_mariachi_01", "s_m_m_marine_01" },
	{ "s_m_m_marine_02", "s_m_m_migrant_01", "u_m_y_zombie_01", "s_m_m_movprem_01", "s_m_m_movspace_01", "s_m_m_paramedic_01", "s_m_m_pilot_01", "s_m_m_pilot_02", "s_m_m_postal_01", "s_m_m_postal_02" },
	{ "s_m_m_prisguard_01", "s_m_m_scientist_01", "s_m_m_security_01", "s_m_m_snowcop_01", "s_m_m_strperf_01", "s_m_m_strpreach_01", "s_m_m_strvend_01", "s_m_m_trucker_01", "s_m_m_ups_01", "s_m_m_ups_02" },
	{ "s_m_o_busker_01", "s_m_y_airworker", "s_m_y_ammucity_01", "s_m_y_armymech_01", "s_m_y_autopsy_01", "s_m_y_barman_01", "s_m_y_baywatch_01", "s_m_y_blackops_01", "s_m_y_blackops_02", "s_m_y_busboy_01" },
	{ "s_m_y_chef_01", "s_m_y_clown_01", "s_m_y_construct_01", "s_m_y_construct_02", "s_m_y_cop_01", "s_m_y_dealer_01", "s_m_y_devinsec_01", "s_m_y_dockwork_01", "s_m_y_doorman_01", "s_m_y_dwservice_01" },
	{ "s_m_y_dwservice_02", "s_m_y_factory_01", "s_m_y_fireman_01", "s_m_y_garbage", "s_m_y_grip_01", "s_m_y_hwaycop_01", "s_m_y_marine_01", "s_m_y_marine_02", "s_m_y_marine_03", "s_m_y_mime" },
	{ "s_m_y_pestcont_01", "s_m_y_pilot_01", "s_m_y_prismuscl_01", "s_m_y_prisoner_01", "s_m_y_ranger_01", "s_m_y_robber_01", "s_m_y_sheriff_01", "s_m_y_shop_mask", "s_m_y_strvend_01", "s_m_y_swat_01" },
	{ "s_m_y_uscg_01", "s_m_y_valet_01", "s_m_y_waiter_01", "s_m_y_winclean_01", "s_m_y_xmech_01", "s_m_y_xmech_02", "u_f_m_corpse_01", "u_f_m_miranda", "u_f_m_promourn_01", "u_f_o_moviestar" },
	{ "u_f_o_prolhost_01", "u_f_y_bikerchic", "u_f_y_comjane", "u_f_y_corpse_01", "u_f_y_corpse_02", "u_f_y_hotposh_01", "u_f_y_jewelass_01", "u_f_y_mistress", "u_f_y_poppymich", "u_f_y_princess" },
	{ "u_f_y_spyactress", "u_m_m_aldinapoli", "u_m_m_bankman", "u_m_m_bikehire_01", "u_m_m_fibarchitect", "u_m_m_filmdirector", "u_m_m_glenstank_01", "u_m_m_griff_01", "u_m_m_jesus_01", "u_m_m_jewelsec_01" },
	{ "u_m_m_jewelthief", "u_m_m_markfost", "u_m_m_partytarget", "u_m_m_prolsec_01", "u_m_m_promourn_01", "u_m_m_rivalpap", "u_m_m_spyactor", "u_m_m_willyfist", "u_m_o_finguru_01", "u_m_o_taphillbilly" },
	{ "u_m_o_tramp_01", "u_m_y_abner", "u_m_y_antonb", "u_m_y_babyd", "u_m_y_baygor", "u_m_y_burgerdrug_01", "u_m_y_chip", "u_m_y_cyclist_01", "u_m_y_fibmugger_01", "u_m_y_guido_01" },
	{ "u_m_y_gunvend_01", "u_m_y_hippie_01", "u_m_y_imporage", "u_m_y_justin", "u_m_y_mani", "u_m_y_militarybum", "u_m_y_paparazzi", "u_m_y_party_01", "u_m_y_pogo_01", "u_m_y_prisoner_01" },
	{ "ig_benny", "ig_g", "ig_vagspeak", "mp_m_g_vagfun_01", "mp_m_boatstaff_01", "mp_f_boatstaff_01", "", "", "", "" }
};

LPCSTR pedModelNames[70][10] = {
	{ "MICHAEL", "FRANKLIN", "TREVOR", "BOAR", "CHIMP", "COW", "COYOTE", "DEER", "FISH", "HEN" },
	{ "CAT", "HAWK", "CORMORANT", "CROW", "DOLPHIN", "HUMPBACK", "WHALE", "PIGEON", "SEAGULL", "SHARKHAMMER" },
	{ "PIG", "RAT", "RHESUS", "CHOP", "HUSKY", "MTLION", "RETRIEVER", "SHARKTIGER", "SHEPHERD", "ALIEN" },
	{ "BEACH", "BEVHILLS", "BEVHILLS", "BODYBUILD", "BUSINESS", "DOWNTOWN", "EASTSA", "EASTSA", "FATBLA", "FATCULT" },
	{ "FATWHITE", "KTOWN", "KTOWN", "PROLHOST", "SALTON", "SKIDROW", "SOUCENTMC", "SOUCENT", "SOUCENT", "TOURIST" },
	{ "TRAMPBEAC", "TRAMP", "GENSTREET", "INDIAN", "KTOWN", "SALTON", "SOUCENT", "SOUCENT", "BEACH", "BEVHILLS" },
	{ "BEVHILLS", "BEVHILLS", "BEVHILLS", "BUSINESS", "BUSINESS", "BUSINESS", "BUSINESS", "EASTSA", "EASTSA", "EASTSA" },
	{ "EPSILON", "FITNESS", "FITNESS", "GENHOT", "GOLFER", "HIKER", "HIPPIE", "HIPSTER", "HIPSTER", "HIPSTER" },
	{ "HIPSTER", "INDIAN", "JUGGALO", "RUNNER", "RURMETH", "SCDRESSY", "SKATER", "SOUCENT", "SOUCENT", "SOUCENT" },
	{ "TENNIS", "TOPLESS", "TOURIST", "TOURIST", "VINEWOOD", "VINEWOOD", "VINEWOOD", "VINEWOOD", "YOGA", "ACULT" },
	{ "AFRIAMER", "BEACH", "BEACH", "BEVHILLS", "BEVHILLS", "BUSINESS", "EASTSA", "EASTSA", "FARMER", "FATLATIN" },
	{ "GENFAT", "GENFAT", "GOLFER", "HASJEW", "HILLBILLY", "HILLBILLY", "INDIAN", "KTOWN", "MALIBU", "MEXCNTRY" },
	{ "MEXLABOR", "OG_BOSS", "PAPARAZZI", "POLYNESIAN", "PROLHOST", "RURMETH", "SALTON", "SALTON", "SALTON", "SALTON" },
	{ "SKATER", "SKIDROW", "SOCENLAT", "SOUCENT", "SOUCENT", "SOUCENT", "SOUCENT", "STLAT", "TENNIS", "TOURIST" },
	{ "TRAMPBEAC", "TRAMP", "TRANVEST", "TRANVEST", "ACULT", "ACULT", "BEACH", "GENSTREET", "KTOWN", "SALTON" },
	{ "SOUCENT", "SOUCENT", "SOUCENT", "TRAMP", "ACULT", "ACULT", "BEACHVESP", "BEACHVESP", "BEACH", "BEACH" },
	{ "BEACH", "BEVHILLS", "BEVHILLS", "BREAKDANCE", "BUSICAS", "BUSINESS", "BUSINESS", "BUSINESS", "CYCLIST", "DHILL" },
	{ "DOWNTOWN", "EASTSA", "EASTSA", "EPSILON", "EPSILON", "GAY", "GAY", "GENSTREET", "GENSTREET", "GOLFER" },
	{ "HASJEW", "HIKER", "HIPPY", "HIPSTER", "HIPSTER", "HIPSTER", "INDIAN", "JETSKI", "JUGGALO", "KTOWN" },
	{ "KTOWN", "LATINO", "METHHEAD", "MEXTHUG", "MOTOX", "MOTOX", "MUSCLBEAC", "MUSCLBEAC", "POLYNESIAN", "ROADCYC" },
	{ "RUNNER", "RUNNER", "SALTON", "SKATER", "SKATER", "SOUCENT", "SOUCENT", "SOUCENT", "SOUCENT", "STBLA" },
	{ "STBLA", "STLAT", "STWHI", "STWHI", "SUNBATHE", "SURFER", "VINDOUCHE", "VINEWOOD", "VINEWOOD", "VINEWOOD" },
	{ "VINEWOOD", "YOGA", "PROLDRIVER", "RSRANGER", "SBIKE", "STAGGRM", "TATTOO", "ABIGAIL", "ANITA", "ANTON" },
	{ "BALLASOG", "BRIDE", "BURGERDRUG", "CAR3GUY1", "CAR3GUY2", "CHEF", "CHIN_GOON", "CLETUS", "COP", "CUSTOMER" },
	{ "DENISE_FRIEND", "FOS_REP", "G", "GROOM", "DLR", "HAO", "HUGH", "IMRAN", "JANITOR", "MAUDE" },
	{ "MWEATHER", "ORTEGA", "OSCAR", "PORNDUDES", "PORNDUDES_P", "PROLOGUEDRIVER", "PROLSEC", "GANG", "HIC", "HIPSTER" },
	{ "MARINE", "MEX", "REPORTER", "ROCCOPELOSI", "SCREEN_WRITER", "STRIPPER", "STRIPPER", "TONYA", "TRAFFICWARDEN", "AMANDATOWNLEY" },
	{ "ANDREAS", "ASHLEY", "BANKMAN", "BARRY", "BARRY_P", "BEVERLY", "BEVERLY_P", "BRAD", "BRADCADAVER", "CARBUYER" },
	{ "CASEY", "CHENGSR", "CHRISFORMAGE", "CLAY", "DALE", "DAVENORTON", "DEBRA", "DENISE", "DEVIN", "DOM" },
	{ "DREYFUSS", "DRFRIEDLANDER", "FABIEN", "FBISUIT", "FLOYD", "GUADALOPE", "GURK", "HUNTER", "JANET", "JEWELASS" },
	{ "JIMMYBOSTON", "JIMMYDISANTO", "JOEMINUTEMAN", "JOHNNYKLEBITZ", "JOSEF", "JOSH", "LAMARDAVIS", "LAZLOW", "LESTERCREST", "LIFEINVAD" },
	{ "MAGENTA", "MANUEL", "MARNIE", "MARTINMADRAZO", "MARYANN", "MICHELLE", "MILTON", "MOLLY", "MOVPREMF", "MOVPREMMALE" },
	{ "MRK", "MRSPHILLIPS", "MRS_THORNHILL", "NATALIA", "NERVOUSRON", "NIGEL", "OLD_MAN1A", "OLD_MAN2", "OMEGA", "ORLEANS" },
	{ "PAPER", "PAPER_P", "PATRICIA", "PRIEST", "PROLSEC", "RUSSIANDRUNK", "SIEMONYETARIAN", "SOLOMON", "STEVEHAINS", "STRETCH" },
	{ "TANISHA", "TAOCHENG", "TAOSTRANSLATOR", "TENNISCOACH", "TERRY", "TOM", "TOMEPSILON", "TRACYDISANTO", "WADE", "ZIMBOR" },
	{ "BALLAS", "FAMILIES", "LOST", "VAGOS", "ARMBOSS", "ARMGOON", "ARMLIEUT", "CHEMWORK", "CHEMWORK_P", "CHIBOSS" },
	{ "CHIBOSS_P", "CHICOLD", "CHICOLD_P", "CHIGOON", "CHIGOON_P", "CHIGOON", "KORBOSS", "MEXBOSS", "MEXBOSS", "ARMGOON" },
	{ "AZTECA", "BALLAEAST", "BALLAORIG", "BALLASOUT", "FAMCA", "FAMDNF", "FAMFOR", "KOREAN", "KOREAN", "KORLIEUT" },
	{ "LOST", "LOST", "LOST", "MEXGANG", "MEXGOON", "MEXGOON", "MEXGOON", "MEXGOON_P", "POLOGOON", "POLOGOON_P" },
	{ "POLOGOON", "POLOGOON_P", "SALVABOSS", "SALVAGOON", "SALVAGOON", "SALVAGOON", "SALVAGOON_P", "STRPUNK", "STRPUNK", "HC_DRIVER" },
	{ "HC_GUNMAN", "HC_HACKER", "ABIGAIL", "AMANDATOWNLEY", "ANDREAS", "ASHLEY", "BALLASOG", "BANKMAN", "BARRY", "BARRY_P" },
	{ "BESTMEN", "BEVERLY", "BEVERLY_P", "BRAD", "BRIDE", "CAR3GUY1", "CAR3GUY2", "CASEY", "CHEF", "CHENGSR" },
	{ "CHRISFORMAGE", "CLAY", "CLAYPAIN", "CLETUS", "DALE", "DAVENORTON", "DENISE", "DEVIN", "DOM", "DREYFUSS" },
	{ "DRFRIEDLANDER", "FABIEN", "FBISUIT", "FLOYD", "GROOM", "HAO", "HUNTER", "JANET", "JAY_NORRIS", "JEWELASS" },
	{ "JIMMYBOSTON", "JIMMYDISANTO", "JOEMINUTEMAN", "JOHNNYKLEBITZ", "JOSEF", "JOSH", "KERRYMCINTOSH", "LAMARDAVIS", "LAZLOW", "LESTERCREST" },
	{ "LIFEINVAD", "LIFEINVAD", "MAGENTA", "MANUEL", "MARNIE", "MARYANN", "MAUDE", "MICHELLE", "MILTON", "MOLLY" },
	{ "MRK", "MRSPHILLIPS", "MRS_THORNHILL", "NATALIA", "NERVOUSRON", "NIGEL", "OLD_MAN1A", "OLD_MAN2", "OMEGA", "ONEIL" },
	{ "ORLEANS", "ORTEGA", "PAPER", "PATRICIA", "PRIEST", "PROLSEC", "GANG", "HIC", "HIPSTER", "MEX" },
	{ "ROCCOPELOSI", "RUSSIANDRUNK", "SCREEN_WRITER", "SIEMONYETARIAN", "SOLOMON", "STEVEHAINS", "STRETCH", "TALINA", "TANISHA", "TAOCHENG" },
	{ "TAOSTRANSLATOR", "TAOSTRANSLATOR_P", "TENNISCOACH", "TERRY", "TOMEPSILON", "TONYA", "TRACYDISANTO", "TRAFFICWARDEN", "TYLERDIX", "WADE" },
	{ "ZIMBOR", "DEADHOOKER", "FREEMODE", "MISTY", "STRIPPERLITE", "PROS", "MP_HEADTARGETS", "CLAUDE", "EXARMY", "FAMDD" },
	{ "FIBSEC", "FREEMODE", "MARSTON", "NIKO", "SHOPKEEP", "ARMOURED", "NONE", "NONE", "NONE", "NONE" },
	{ "NONE", "FEMBARBER", "MAID", "SHOP_HIGH", "SWEATSHOP", "AIRHOSTESS", "BARTENDER", "BAYWATCH", "COP", "FACTORY" },
	{ "HOOKER", "HOOKER", "HOOKER", "MIGRANT", "MOVPREM", "RANGER", "SCRUBS", "SHERIFF", "SHOP_LOW", "SHOP_MID" },
	{ "STRIPPERLITE", "STRIPPER", "STRIPPER", "SWEATSHOP", "AMMUCOUNTRY", "ARMOURED", "ARMOURED", "AUTOSHOP", "AUTOSHOP", "BOUNCER" },
	{ "CHEMSEC", "CIASEC", "CNTRYBAR", "DOCKWORK", "DOCTOR", "FIBOFFICE", "FIBOFFICE", "GAFFER", "GARDENER", "GENTRANSPORT" },
	{ "HAIRDRESS", "HIGHSEC", "HIGHSEC", "JANITOR", "LATHANDY", "LIFEINVAD", "LINECOOK", "LSMETRO", "MARIACHI", "MARINE" },
	{ "MARINE", "MIGRANT", "ZOMBIE", "MOVPREM", "MOVSPACE", "PARAMEDIC", "PILOT", "PILOT", "POSTAL", "POSTAL" },
	{ "PRISGUARD", "SCIENTIST", "SECURITY", "SNOWCOP", "STRPERF", "STRPREACH", "STRVEND", "TRUCKER", "UPS", "UPS" },
	{ "BUSKER", "AIRWORKER", "AMMUCITY", "ARMYMECH", "AUTOPSY", "BARMAN", "BAYWATCH", "BLACKOPS", "BLACKOPS", "BUSBOY" },
	{ "CHEF", "CLOWN", "CONSTRUCT", "CONSTRUCT", "COP", "DEALER", "DEVINSEC", "DOCKWORK", "DOORMAN", "DWSERVICE" },
	{ "DWSERVICE", "FACTORY", "FIREMAN", "GARBAGE", "GRIP", "HWAYCOP", "MARINE", "MARINE", "MARINE", "MIME" },
	{ "PESTCONT", "PILOT", "PRISMUSCL", "PRISONER", "RANGER", "ROBBER", "SHERIFF", "SHOP_MASK", "STRVEND", "SWAT" },
	{ "USCG", "VALET", "WAITER", "WINCLEAN", "XMECH", "XMECH", "CORPSE", "MIRANDA", "PROMOURN", "MOVIESTAR" },
	{ "PROLHOST", "BIKERCHIC", "COMJANE", "CORPSE", "CORPSE", "HOTPOSH", "JEWELASS", "MISTRESS", "POPPYMICH", "PRINCESS" },
	{ "SPYACTRESS", "ALDINAPOLI", "BANKMAN", "BIKEHIRE", "FIBARCHITECT", "FILMDIRECTOR", "GLENSTANK", "GRIFF", "JESUS", "JEWELSEC" },
	{ "JEWELTHIEF", "MARKFOST", "PARTYTARGET", "PROLSEC", "PROMOURN", "RIVALPAP", "SPYACTOR", "WILLYFIST", "FINGURU", "TAPHILLBILLY" },
	{ "TRAMP", "ABNER", "ANTONB", "BABYD", "BAYGOR", "BURGERDRUG", "CHIP", "CYCLIST", "FIBMUGGER", "GUIDO" },
	{ "GUNVEND", "HIPPIE", "IMPORAGE", "JUSTIN", "MANI", "MILITARYBUM", "PAPARAZZI", "PARTY", "POGO", "PRISONER" },
	{ "BENNY", "G", "VAGSPEAK", "VAGFUN", "BOATSTAFF", "FEMBOATSTAFF", "", "", "", "" }
};

typedef struct {									// here you put all data specific to a player you want to save, for exemple: bool godMod	
	///-------------------------------------------BASIC INFO-------------------------------------------///
	Ped player_ped;	
	int player_index;
	std::string player_name;								
	Player player;

	///-------------------------------------------BOOLEANS-------------------------------------------///
	bool b_ExplosiveAmmo,
		b_FireAmmo,
		b_InfiniteAmmo,
		b_GodMod,
		b_NoRagDoll,
		b_Invisible,
		b_SuperJump,
		b_NerverWanted,
		b_AutoMoney,
		b_MoneyDrop,
		b_MoneyBank,
		b_AutoMoneyLimit,
		b_MoneyDropLimit,
		b_MoneyBankLimit,
		b_VehicleGodMod,
		b_VehicleColorLoop,
		b_VehicleInvisible,
		b_WeaponDamageModifier,
		b_WeaponMoneyAmmo;


	///-------------------------------------------INTEGERS-------------------------------------------///

	int i_AutoMoneyDelay = 200,
		i_AutoMoneyAmount = 2000,
		i_MoneyDropDelay = 200,
		i_MoneyDropAmount = 5000,
		i_MoneyBankDelay = 3000,
		i_Vehicle_Color_Red,
		i_Vehicle_Color_Green,
		i_Vehicle_Color_Blue,
		i_Vehicle_Secondary_Color_Red,
		i_Vehicle_Secondary_Color_Green,
		i_Vehicle_Secondary_Color_Blue,
		i_Vehicle_Neon_Color_Red,
		i_Vehicle_Neon_Color_Green,
		i_Vehicle_Neon_Color_Blue,
		i_Vehicle_Perlecent_Color,
		i_Player_RP,
		i_MaxAutoMoney = i_AutoMoneyAmount,
		i_MaxMoneyDrop = i_MoneyDropAmount,
		i_MaxBankedMoney = 20000;


	///-------------------------------------------FLOATS-------------------------------------------///
	float f_VehicleEngineRPM = 1.0f,
		f_VehicleEngineTorque = 1.0f,
		f_VehicleLightMultiplier = 1.0f;

} player_data;

#pragma region General-Data

bool b_TeleportInSpawnedVehicle;
bool b_UpgradeSpawnedVehicle;
int i_PlateType;

#pragma endregion

void updateFeatures();
void updateSelfFeatures();
void process_self_money_features();
void process_remote_money_features(player_data *current_player);
int checkSelfPlayerIndex();

bool firstload = true;
LPCWSTR menuStyleLocation = L".\\NaaNModMenu\\Style\\MenuStyle.ini";

player_data *self;		
player_data lobby_players[32]; // array for every players in lobby

void OriginMenu() 
{
	if (firstload) {
		Menu::LoadMenuTheme(menuStyleLocation);
		Log::Msg("Menu theme loaded");
		notifyAboveMap("~HUD_COLOUR_RED~Kryooth's ~HUD_COLOUR_WHITE~NaaN mod menu");
		WAIT(375);
		notifyAboveMap("~HUD_COLOUR_WHITE~Press [Insert] to open menu");
		firstload = false;
	}

	Menu::checkKeys();

	self = &lobby_players[checkSelfPlayerIndex()];

	self->player = PLAYER::PLAYER_ID();
	self->player_index = PLAYER::GET_PLAYER_INDEX();
	self->player_ped = PLAYER::PLAYER_PED_ID();
	self->player_name = PLAYER::GET_PLAYER_NAME(self->player);

	if (Menu::open()) {
		if (Menu::currentMenu("main")) {

			Menu::Title("NaaN mod menu");

			Menu::MenuOption("Self", "self");
			Menu::MenuOption("Online", "online");
			Menu::MenuOption("Money drop", "money_drop");
			Menu::MenuOption("Vehicle", "vehicule");
			Menu::MenuOption("Weapon", "weapon");
			Menu::MenuOption("Teleportation", "teleportation");
			Menu::MenuOption("Recovery", "recovery");
			Menu::MenuOption("World", "world");
			Menu::MenuOption("Menu", "menu_settings");
		}

		if (Menu::currentMenu("weapon")) {
			Menu::Title("Weapon");
			if (Menu::Option("Give every weapon"))
				Features::give_weap(self->player_ped);
			Menu::BoolOption("Explosive bullets", &self->b_ExplosiveAmmo);
			Menu::BoolOption("Fire bullets", &self->b_FireAmmo);
			Menu::BoolOption("Infinte ammo", &self->b_InfiniteAmmo);
			Menu::BoolOption("Money gun", &self->b_WeaponMoneyAmmo);
			if (Menu::BoolOption("One shot kill ammo", &self->b_WeaponDamageModifier))
				Features::weapon_damage_modifier(self->player_ped, self->b_WeaponDamageModifier);
		}

		if (Menu::currentMenu("self")) {


			Menu::Title("Self");

			Menu::MenuOption("Skin", "skin");
			if (Menu::BoolOption("God mod", &self->b_GodMod))
				Features::toggle_GodMod(self->b_GodMod, self->player);
			if (Menu::BoolOption("Invisibility", &self->b_Invisible))
				Features::toggle_Invisibility(self->b_Invisible, self->player_ped);
			Menu::BoolOption("Super jump", &self->b_SuperJump);
			Menu::BoolOption("Never wanted", &self->b_NerverWanted);
			if (Menu::BoolOption("No ragdoll", &self->b_NoRagDoll))
				Features::no_ragdoll(self->b_NoRagDoll, self->player, self->player_ped);
		}

		if (Menu::currentMenu("skin")) {

			Menu::Title("Skin");

		/*	if (Menu::Option("Reset skin"))
				Features::reset_skin(self_ped);

			for (int i = 0; i < 70; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					LPCSTR name, nameID;
					name = pedModelNames[i][j];
					nameID = pedModels[i][j];

					if (name != "" && nameID != "") {
						if (Menu::Option((char*)name)) {
							Features::set_skin(nameID);
						}
					}
					else
						break;
				}
			}*/
		}

		if (Menu::currentMenu("online")) {
			Menu::Title("Online");

			for (int i = 0; i < 32; i++) {
				lobby_players[i].player = PLAYER::INT_TO_PLAYERINDEX(i);
				lobby_players[i].player_index = i;
				lobby_players[i].player_name = PLAYER::GET_PLAYER_NAME(lobby_players[i].player);
				lobby_players[i].player_ped = PLAYER::GET_PLAYER_PED(lobby_players[i].player);

				if (lobby_players[i].player_name.compare("~HUD_COLOUR_RED~**INVALID**") != 0) {
					Menu::MenuOption(Menu::StringToChar(lobby_players[i].player_name), Menu::StringToChar(lobby_players[i].player_name));
					Log::Msg(Menu::StringToChar(lobby_players[i].player_name));
				}
					
			}


		}

		/*online players menu*/
		for (int i = 0; i < 32; i++) {
			if (Menu::currentMenu(Menu::StringToChar(lobby_players[i].player_name))) {
				Menu::Title(Menu::StringToChar(lobby_players[i].player_name));

				Menu::Option("Explode player");
				Menu::Option("Burn player");
				Menu::Option("Give player all weapons");
				Menu::Option("Remove player all weapons");

				Menu::MenuOption("Money drop", Menu::StringToChar(lobby_players[i].player_name + "money_drop"));
				Menu::MenuOption("Teleportation", Menu::StringToChar(lobby_players[i].player_name + "teleportation"));
				Menu::MenuOption("Vehicle", Menu::StringToChar(lobby_players[i].player_name + "vehicle"));

			}
		}

		/*online players menu money drop*/
		for (int i = 0; i < 32; i++) {
			if (Menu::currentMenu(Menu::StringToChar(lobby_players[i].player_name + "money_drop"))) {
				Menu::Title(Menu::StringToChar(lobby_players[i].player_name + "money_drop"));
				
				Menu::MenuOption("Auto money", Menu::StringToChar(lobby_players[i].player_name + "auto_money"));
				Menu::MenuOption("Money bag drop", Menu::StringToChar(lobby_players[i].player_name + "money_bag_drop"));
			}
		}

		/*online players auto money*/
		for (int i = 0; i < 32; i++) {
			if (Menu::currentMenu(Menu::StringToChar(lobby_players[i].player_name + "auto_money"))) {
				Menu::Title(Menu::StringToChar(lobby_players[i].player_name + "Auto money"));

				player_data *current_player = &lobby_players[i];

				Menu::BoolOption("Enable", &current_player->b_AutoMoney);
				Menu::IntOption("Money", &current_player->i_AutoMoneyAmount, 500, 2000, 500);
				Menu::IntOption("Delay", &current_player->i_AutoMoneyDelay, 100, 5000, 10);
				Menu::BoolOption("Enable session limit", &current_player->b_AutoMoneyLimit);
				Menu::IntOption("Money session limit", &current_player->i_MaxAutoMoney, current_player->i_AutoMoneyAmount, current_player->i_AutoMoneyAmount * 10000, current_player->i_AutoMoneyAmount);
			}
		}

		/*online player money bag drop*/
		for (int i = 0; i < 32; i++) {
			if (Menu::currentMenu(Menu::StringToChar(lobby_players[i].player_name + "money_bag_drop"))) {
				Menu::Title(Menu::StringToChar(lobby_players[i].player_name + "Money bag drop"));

				player_data *current_player = &lobby_players[i];

				Menu::BoolOption("Enable", &current_player->b_MoneyDrop);
				Menu::IntOption("Delay", &current_player->i_MoneyDropDelay, 10, 5000, 10);
				Menu::IntOption("Money", &current_player->i_MoneyDropAmount, 500, 40000, 500);
				Menu::BoolOption("Enable session limit", &current_player->b_MoneyDropLimit);
				Menu::IntOption("Money session limit", &current_player->i_MaxMoneyDrop, current_player->i_MoneyDropAmount, current_player->i_MoneyDropAmount * 10000, current_player->i_MoneyDropAmount);
			}
		}

		if (Menu::currentMenu("money_drop")) {

			Menu::Title("Money drop");

			Menu::MenuOption("Auto money", "auto_money");
			Menu::MenuOption("Money bag drop", "money_bag");
			Menu::MenuOption("Banked money", "money_bank");
		}

		if (Menu::currentMenu("auto_money")) {

			Menu::Title("Auto money");
			Menu::BoolOption("Enable", &self->b_AutoMoney);
			Menu::IntOption("Money", &self->i_AutoMoneyAmount, 500, 2000, 500);
			Menu::IntOption("Delay", &self->i_AutoMoneyDelay, 100, 5000, 10);
			Menu::BoolOption("Enable session limit", &self->b_AutoMoneyLimit);
			Menu::IntOption("Money session limit", &self->i_MaxAutoMoney, self->i_AutoMoneyAmount, self->i_AutoMoneyAmount * 10000, self->i_AutoMoneyAmount);
		}

		if (Menu::currentMenu("money_bag")) {

			Menu::Title("Money bag drop");

			Menu::BoolOption("Enable", &self->b_MoneyDrop);
			Menu::IntOption("Delay", &self->i_MoneyDropDelay, 10, 5000, 10);
			Menu::IntOption("Money", &self->i_MoneyDropAmount, 500, 40000, 500);
			Menu::BoolOption("Enable session limit", &self->b_MoneyDropLimit);
			Menu::IntOption("Money session limit", &self->i_MaxMoneyDrop, self->i_MoneyDropAmount, self->i_MoneyDropAmount * 10000, self->i_MoneyDropAmount);
		}		
		
		if (Menu::currentMenu("money_bank")) {

			Menu::Title("Money bank drop");

			if (Menu::Option("Give 200K banked"))
				Features::money_bank();
			Menu::BoolOption("Enable", &self->b_MoneyBank);
			Menu::IntOption("Delay", &self->i_MoneyBankDelay, 10, 10000, 10);
			Menu::BoolOption("Enable session limit", &self->b_MoneyBankLimit);
			Menu::IntOption("Money session limit", &self->i_MaxBankedMoney, 200000, 2000000000, 200000);
		}

		if (Menu::currentMenu("vehicule")) {

			Menu::Title("Vehicle");

			Menu::MenuOption("vehicle spawn", "veh_spawn");

			if (PED::IS_PED_IN_ANY_VEHICLE(self->player_ped, 0)) {
				Menu::MenuOption("Portable LSC", "lsc");
				Menu::MenuOption("Multipliers", "engine_modification");
				Vehicle player_vehicle = PED::GET_VEHICLE_PED_IS_IN(self->player_ped, 0);
				if (Menu::Option("Max upgrade"))
					Features::Max_veh(player_vehicle);
				if (Menu::Option("Fix vehicule"))
					Features::fix_veh(player_vehicle);
				if (Menu::Option("Flip vehicule"))
					Features::flip_veh(player_vehicle);
				if (Menu::Option("Change plate"))
					Features::set_plate(player_vehicle);
				if (Menu::BoolOption("Invisible vehicule", &self->b_VehicleInvisible))
					Features::veh_invisible(player_vehicle, self->b_VehicleInvisible);
				Menu::BoolOption("God mod vehicule", &self->b_VehicleGodMod);
				Menu::BoolOption("Rainbow color", &self->b_VehicleColorLoop);
			}
		}

		if (Menu::currentMenu("veh_spawn")) {

			Menu::Title("Vehicle spawn");

			Menu::BoolOption("Teleport in vehicle", &b_TeleportInSpawnedVehicle);
			Menu::BoolOption("Max upgraded vehicle", &b_UpgradeSpawnedVehicle);

			for (int i = 0; i < 25; i++) {
				char* cat = veh_cat_array[i];
				if (cat != "Vehicules") {
					Menu::MenuOption(cat, cat);
				}
				else if (cat == "Vehicules")
					break;
			}
		}

			/*Vehicle spawn menu*/
		for (int i = 0; i < 25; i++) {
			char* cat = veh_cat_array[i];
			if (Menu::currentMenu(cat)) {
				Menu::Title(cat);
				for (int j = 1; j < 70; j++) {
					if (veh_cat(j) == cat) {
						for (int h = 0; h < 10; h++) {
							char* veh = (char*)vehiculeModels[j - 1][h];
							if (veh != "") {
								uint vehicle_hash = $(veh);
								if (Menu::Option(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(vehicle_hash)))
									Features::spawn_vehicle_model(vehicle_hash, b_TeleportInSpawnedVehicle, b_UpgradeSpawnedVehicle);
							}
						}
					}
					else if (veh_cat(j) == "Vehicules")
						break;
				}
			}
			else if (cat == "Vehicules")
				break;
		}   

		if (Menu::currentMenu("engine_modification")) {
			Menu::Title("Multipliers");
			if (PED::IS_PED_IN_ANY_VEHICLE(self->player_ped, 0)) {
				Vehicle player_vehicle = PED::GET_VEHICLE_PED_IS_IN(self->player_ped, 0);
				Menu::FloatOption("Engine RPM", &self->f_VehicleEngineRPM, 1, 990, 1.000000015f);
				Menu::FloatOption("Engine torque", &self->f_VehicleEngineTorque, 1, 990, 0.500000015f);
				Menu::FloatOption("Light multiplier", &self->f_VehicleLightMultiplier, 1, 200, 1.0000015f);
				if (Menu::Option("Apply")) {
					Features::set_engine_rpm(player_vehicle, self->f_VehicleEngineRPM);
					Features::set_engine_torque(player_vehicle, self->f_VehicleEngineTorque);
					Features::set_light_multiplier(player_vehicle, self->f_VehicleLightMultiplier);
				}
			}
			else
				Menu::Option("You're not in a vehicle!");
		}

		if (Menu::currentMenu("lsc")) {
			Menu::Title("Portable LSC");
			if (PED::IS_PED_IN_ANY_VEHICLE(self->player_ped, 0)) {
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(self->player_ped, 0);

				Menu::MenuOption("Color", "veh_color");
				Menu::CharArray("Plate type", platesTypes, &i_PlateType, sizeof(platesTypes) / sizeof(*platesTypes) - 1);
				Features::set_plate_type(veh, i_PlateType);

				int spolierIndex, spolier = VEHICLE::GET_NUM_VEHICLE_MODS(veh, 0);
				if (spolier > 0)
					if (Menu::IntOption("Spolier", &spolierIndex, 0, spolier))
						Features::apply_vehicle_mod(veh, 0, spolierIndex);

				int frontBumperIndex, frontBumper = VEHICLE::GET_NUM_VEHICLE_MODS(veh, 1);
				if (frontBumper > 0)
					if (Menu::IntOption("Front bumper", &frontBumperIndex, 0, frontBumper))
						Features::apply_vehicle_mod(veh, 0, frontBumperIndex);

				int rearBumperIndex, rearBumper = VEHICLE::GET_NUM_VEHICLE_MODS(veh, 2);
				if (rearBumper> 0)
					if (Menu::IntOption("Rear bumper", &rearBumperIndex, 0, rearBumper))
						Features::apply_vehicle_mod(veh, 0, rearBumperIndex);
				

			}
			else
				Menu::Option("You're not in a vehicle!");
		}

		if (Menu::currentMenu("veh_color")) {
			Menu::Title("Color");
			if (!PED::IS_PED_IN_ANY_VEHICLE(self->player_ped, 0)) {
				Menu::Option("You're not in a vehicle!");
				return;
			}
			Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(self->player_ped);

			if (Menu::IntOption("Primary color RED", &self->i_Vehicle_Color_Red, 0, 255, 1))
				Features::set_primary_color(veh, self->i_Vehicle_Color_Red, self->i_Vehicle_Color_Green, self->i_Vehicle_Color_Blue);
			if (Menu::IntOption("Primary color GREEN", &self->i_Vehicle_Color_Green, 0, 255, 1))
				Features::set_primary_color(veh, self->i_Vehicle_Color_Red, self->i_Vehicle_Color_Green, self->i_Vehicle_Color_Blue);
			if (Menu::IntOption("Primary color BLUE", &self->i_Vehicle_Color_Blue, 0, 255, 1))
				Features::set_primary_color(veh, self->i_Vehicle_Color_Red, self->i_Vehicle_Color_Green, self->i_Vehicle_Color_Blue);
			Menu::Option("");

			if (Menu::IntOption("Secondary color RED", &self->i_Vehicle_Secondary_Color_Red, 0, 255, 1))
				Features::set_secondary_color(veh, self->i_Vehicle_Secondary_Color_Red, self->i_Vehicle_Secondary_Color_Green, self->i_Vehicle_Secondary_Color_Blue);
			if (Menu::IntOption("Secondary color GREEN", &self->i_Vehicle_Secondary_Color_Green, 0, 255, 1))
				Features::set_secondary_color(veh, self->i_Vehicle_Secondary_Color_Red, self->i_Vehicle_Secondary_Color_Green, self->i_Vehicle_Secondary_Color_Blue);
			if (Menu::IntOption("Secondary color BLUE", &self->i_Vehicle_Secondary_Color_Blue, 0, 255, 1))
				Features::set_secondary_color(veh, self->i_Vehicle_Secondary_Color_Red, self->i_Vehicle_Secondary_Color_Green, self->i_Vehicle_Secondary_Color_Blue);
			Menu::Option("");

			if (Menu::IntOption("Neon color RED", &self->i_Vehicle_Neon_Color_Red, 0, 255, 1))
				Features::set_neon_color(veh, self->i_Vehicle_Neon_Color_Red, self->i_Vehicle_Neon_Color_Green, self->i_Vehicle_Neon_Color_Blue);
			if (Menu::IntOption("Neon color GREEN", &self->i_Vehicle_Neon_Color_Green, 0, 255, 1))
				Features::set_neon_color(veh, self->i_Vehicle_Neon_Color_Red, self->i_Vehicle_Neon_Color_Green, self->i_Vehicle_Neon_Color_Blue);
			if (Menu::IntOption("Neon color BLUE", &self->i_Vehicle_Neon_Color_Blue, 0, 255, 1))
				Features::set_neon_color(veh, self->i_Vehicle_Neon_Color_Red, self->i_Vehicle_Neon_Color_Green, self->i_Vehicle_Neon_Color_Blue);
			Menu::Option("");

			if (Menu::IntOption("Perlecent color", &self->i_Vehicle_Perlecent_Color, 0, 160, 1))
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veh, self->i_Vehicle_Perlecent_Color, 0);

		}

		if (Menu::currentMenu("teleportation")) {

			Menu::Title("Teleportation");

			if (Menu::Option("Teleport to objective"))
				Features::teleport_to_objective();
			int num_of_waypoint = sizeof(Places) / sizeof(*Places);

			for (int i = 0; i < num_of_waypoint; i++)
				Menu::TeleportOption(Places[i].place_name, Places[i].x, Places[i].y, Places[i].z);

		}

		if (Menu::currentMenu("recovery")) {
			Menu::Title("Recovery");
			if (Menu::Option("Unlock Purchases"))
				Features::unlock_purchases();
			if (Menu::Option("Max Stats"))
				Features::unlock_maxstats();
			if (Menu::Option("Unlock Clothes"))
				Features::unlock_clothes();
			if (Menu::Option("Unlock LSC"))
				Features::unlock_LSC();
			if (Menu::Option("Unlock Tattoos"))
				Features::unlock_tattoos();
			if (Menu::Option("Max Armor & Snacks"))
				Features::unlock_max_armor_snaks();
			if (Menu::Option("Unlock Heist Vehicles"))
				Features::unlock_heist_vehicle();
			if (Menu::Option("Unlock Weapon Skins"))
				Features::unlock_wep_skin();
			if (Menu::Option("Max Playtime Edited"))
				Features::unlock_max_playtime();
			if (Menu::Option("Unlock Chrome Rims"))
				Features::unlock_chromerims();
			if (Menu::Option("Unlock Exclusive Shirts"))
				Features::unlock_explusive_shirts();
			if (Menu::Option("Redesign Character 1"))
				Features::unlock_redidsign_character1();
			if (Menu::Option("Redesign Character 2"))
				Features::unlock_redidsign_character2();
			if (Menu::Option("Skip Tutorials"))
				Features::unlock_skip_tuto();
			if (Menu::Option("Unlock Trophies"))
				Features::unlock_trophies();
			if (Menu::Option("Unlock Hairatyles"))
				Features::unlock_hairstyle();
			if (Menu::Option("Purchase Weapons"))
				Features::unlock_purchases_wep();
			if (Menu::Option("Roosevelt Listed"))
				Features::unlock_clear_badsport();
			if (Menu::Option("Clear Badsport"))
				Features::unlock_roosvelt_listed();
			if (Menu::Option("Clear Cheat Reports"))
				Features::unlock_clear_report();
			Menu::MenuOption("Level menu", "lvl_menu");
		}

		if (Menu::currentMenu("lvl_menu")) {
			Menu::Title("Level menu");
			if (Menu::Option("Level 50"))
				Features::set_player_rp(448800);
			if (Menu::Option("Level 100"))
				Features::set_player_rp(1584350);
			if (Menu::Option("Level 120"))
				Features::set_player_rp(2165850);
			if (Menu::Option("Level 150"))
				Features::set_player_rp(3075600);
			if (Menu::Option("Level 200"))
				Features::set_player_rp(4691850);
			if (Menu::Option("Level 250"))
				Features::set_player_rp(6433100);
			if (Menu::Option("Level 300"))
				Features::set_player_rp(8299350);
			if (Menu::Option("Level 350"))
				Features::set_player_rp(10290600);
			if (Menu::Option("Level 400"))
				Features::set_player_rp(12406850);
			if (Menu::Option("Level 450"))
				Features::set_player_rp(14648100);
			if (Menu::Option("Level 500"))
				Features::set_player_rp(17014350);
			if (Menu::Option("Level 600"))
				Features::set_player_rp(22121850);
			if (Menu::Option("Level 700"))
				Features::set_player_rp(27729350);
			if (Menu::Option("Level 800"))
				Features::set_player_rp(33836850);
			if (Menu::Option("Level 900"))
				Features::set_player_rp(40444350);
			if (Menu::Option("Level 999"))
				Features::set_player_rp(47478300);
			if (Menu::IntOption("Custom rp lvl", &self->i_Player_RP, 1, 9000000000000, 10))
				Features::set_player_rp(self->i_Player_RP);
		}

		if (Menu::currentMenu("menu_settings")) {

			Menu::Title("Menu");

			Menu::MenuOption("Title Text", "settings_theme_titletext");
			Menu::MenuOption("Title Rect", "settings_theme_titlerect");
			Menu::MenuOption("Scroller", "settings_theme_scroller");
			Menu::MenuOption("Options Text", "settings_theme_options");
			Menu::MenuOption("Options Rect", "settings_theme_optionsrect");
			if (Menu::Option("Save Theme")) Menu::SaveMenuTheme(menuStyleLocation);
			if (Menu::Option("Load Theme")) Menu::LoadMenuTheme(menuStyleLocation);
			if (Menu::Option("Revert To Default")) {
				titleText = { 0, 0, 0, 255 };
				titleRect = { 255, 200, 0, 255 };
				scroller = { 80, 80, 80, 200 };
				options = { 0, 0, 0, 255 };
				optionsrect = { 255, 220, 30, 60 };
			}
		}

		if (Menu::currentMenu("settings_theme_titletext")) {

			Menu::Title("Title Text");

			Menu::IntOption("Red: ", &titleText.r, 0, 255);
			Menu::IntOption("Green: ", &titleText.g, 0, 255);
			Menu::IntOption("Blue: ", &titleText.b, 0, 255);
			Menu::IntOption("Alpha: ", &titleText.a, 0, 255);
		}

		if (Menu::currentMenu("settings_theme_titlerect")) {

			Menu::Title("Title Rect");

			Menu::IntOption("Red: ", &titleRect.r, 0, 255);
			Menu::IntOption("Green: ", &titleRect.g, 0, 255);
			Menu::IntOption("Blue: ", &titleRect.b, 0, 255);
			Menu::IntOption("Alpha: ", &titleRect.a, 0, 255);
		}

		if (Menu::currentMenu("settings_theme_scroller")) {

			Menu::Title("Scroller");

			Menu::IntOption("Red: ", &scroller.r, 0, 255);
			Menu::IntOption("Green: ", &scroller.g, 0, 255);
			Menu::IntOption("Blue: ", &scroller.b, 0, 255);
			Menu::IntOption("Alpha: ", &scroller.a, 0, 255);
		}

		if (Menu::currentMenu("settings_theme_options")) {

			Menu::Title("Options Text");

			Menu::IntOption("Red: ", &options.r, 0, 255);
			Menu::IntOption("Green: ", &options.g, 0, 255);
			Menu::IntOption("Blue: ", &options.b, 0, 255);
			Menu::IntOption("Alpha: ", &options.a, 0, 255);
		}

		if (Menu::currentMenu("settings_theme_optionsrect")) {

			Menu::Title("Options Rect");

			Menu::IntOption("Red: ", &optionsrect.r, 0, 255);
			Menu::IntOption("Green: ", &optionsrect.g, 0, 255);
			Menu::IntOption("Blue: ", &optionsrect.b, 0, 255);
			Menu::IntOption("Alpha: ", &optionsrect.a, 0, 255);
		}

		Menu::endMenu();
	}
	updateFeatures();
}

void updateFeatures() {
	while (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), TRUE))
		WAIT(0);
	updateSelfFeatures();

	for (int i = 0; i < 32; i++) {
		player_data *current_player = &lobby_players[i];
		if (current_player->player_name.compare("~HUD_COLOUR_RED~**INVALID**") != 0) {
			process_remote_money_features(current_player);
		}
	}
	
}

void updateSelfFeatures() {
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), TRUE)) {
		Features::toggle_super_jump(self->b_SuperJump, self->player);
		Features::never_wanted(self->b_NerverWanted, self->player);
		Features::explosive_ammo(self->player, self->b_ExplosiveAmmo);
		Features::fire_ammo(self->player, self->b_FireAmmo);
		Features::money_ammo(self->player_ped, self->b_WeaponMoneyAmmo);

		process_self_money_features();

		if (PED::IS_PED_IN_ANY_VEHICLE(self->player_ped, 0)) {
			Vehicle player_vehicle = PED::GET_VEHICLE_PED_IS_IN(self->player_ped, 0);

			Features::color_loop(player_vehicle, self->b_VehicleColorLoop);
		}

	}
}

void process_self_money_features() {
	if (self->b_AutoMoney || self->b_MoneyBank || self->b_MoneyDrop) {
		
		if (self->b_AutoMoney) {
			Features::auto_money(self->player_ped, self->i_AutoMoneyAmount, self->i_AutoMoneyDelay);
			if (self->b_AutoMoneyLimit) {
				self->i_MaxAutoMoney -= self->i_AutoMoneyAmount;
				if (self->i_MaxAutoMoney <= 0) {
					self->b_AutoMoney = false;
					self->b_AutoMoneyLimit = false;
				}
			}
		}

		if (self->b_MoneyDrop) {
			Features::money_drop(self->player_ped, self->i_MoneyDropAmount, self->i_MoneyDropDelay);
			if (self->b_MoneyDropLimit) {
				self->i_MaxMoneyDrop -= self->i_MoneyDropAmount;
				if (self->i_MaxMoneyDrop <= 0) {
					self->b_MoneyDrop = false;
					self->b_MoneyDropLimit = false;
				}
			}
		}

		if (self->b_MoneyBank) {
			Features::auto_money(self->player_ped, self->i_AutoMoneyAmount, self->i_AutoMoneyDelay);
			if (self->b_AutoMoneyLimit) {
				self->i_MaxBankedMoney -= 200000;
				if (self->i_MaxBankedMoney <= 0) {
					self->b_MoneyBank = false;
					self->b_MoneyBankLimit = false;
				}
			}
		}

	}
}

void process_remote_money_features(player_data *current_player) {
	if (current_player->b_AutoMoney || current_player->b_MoneyBank || current_player->b_MoneyDrop) {

		if (current_player->b_AutoMoney) {
			Features::auto_money(current_player->player_ped, current_player->i_AutoMoneyAmount, current_player->i_AutoMoneyDelay);
			if (current_player->b_AutoMoneyLimit) {
				current_player->i_MaxAutoMoney -= current_player->i_AutoMoneyAmount;
				if (current_player->i_MaxAutoMoney <= 0) {
					current_player->b_AutoMoney = false;
					current_player->b_AutoMoneyLimit = false;
				}
			}
		}

		if (current_player->b_MoneyDrop) {
			Features::money_drop(current_player->player_ped, current_player->i_MoneyDropAmount, current_player->i_MoneyDropDelay);
			if (current_player->b_MoneyDropLimit) {
				current_player->i_MaxMoneyDrop -= current_player->i_MoneyDropAmount;
				if (current_player->i_MaxMoneyDrop <= 0) {
					current_player->b_MoneyDrop = false;
					current_player->b_MoneyDropLimit = false;
				}
			}
		}

		if (current_player->b_MoneyBank) {
			Features::auto_money(current_player->player_ped, current_player->i_AutoMoneyAmount, current_player->i_AutoMoneyDelay);
			if (current_player->b_AutoMoneyLimit) {
				current_player->i_MaxBankedMoney -= 200000;
				if (current_player->i_MaxBankedMoney <= 0) {
					current_player->b_MoneyBank = false;
					current_player->b_MoneyBankLimit = false;
				}
			}
		}

	}
}

int checkSelfPlayerIndex() {
	for (int i = 0; i < 32; i++) {
		if (PLAYER::PLAYER_ID() == PLAYER::INT_TO_PLAYERINDEX(i))
			return i;
	}
}