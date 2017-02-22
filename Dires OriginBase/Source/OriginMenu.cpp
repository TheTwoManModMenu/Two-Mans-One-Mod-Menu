#include "stdafx.h"

void updateFeatures();

bool firstload = true;
LPCWSTR menuStyleLocation = L".\\NaaNModMenu\\Style\\MenuStyle.ini";

typedef struct {									// here you put all data specific to a player you want to save, for exemple: bool godMod	
	///-------------------------------------------BASIC INFO-------------------------------------------///
	Ped player_ped;									// here is the basic you need to affect a specific player.
	Player player;
	Entity player_entity;							// in fact should be same as "player_ped" but we save it to avoid memory issues when using natives
	int player_index;




} player_data;

typedef struct {									// here you put all data specific to our player you want to save, for exemple: bool godMod	
	///-------------------------------------------BASIC INFO-------------------------------------------///
	Ped player_ped;
	Player player;
	Entity player_entity;							// in fact should be same as "player_ped" but we save it to avoid memory issues when using natives
	int player_index;

	///-------------------------------------------BOOLEANS-------------------------------------------///
	bool b_ExplosiveAmmo,
		b_InfiniteAmmo,
		b_GodMod,
		b_NoRagDoll,
		b_Invisible,
		b_SuperJump,
		b_NerverWanted,
		b_AutoMoney,
		b_MoneyDrop,
		b_VehicleGodMod, 
		b_VehicleColorLoop,
		b_VehicleInvisible;


	///-------------------------------------------INTEGERS-------------------------------------------///

	int i_AutoMoneyDelay = 200,
		i_AutoMoneyAmount = 2000,
		i_MoneyDropDelay = 200,
		i_MoneyDropAmount = 5000,
		i_MoneyDropModelIndex;


	///-------------------------------------------FLOATS-------------------------------------------///
	float f_VehicleEngineRPM = 1.0f,
		f_VehicleEngineTorque = 1.0f,
		f_VehicleLightMultiplier = 1.0f;
		


} self_player_data;

#pragma region General-Data

bool b_TeleportInSpawnedVehicle;
bool b_UpgradeSpawnedVehicle;
int i_PlateType;

#pragma endregion


self_player_data self;		
player_data lobby_players[]; // array for every players in lobby

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
				Features::give_weap(self_ped);
			Menu::BoolOption("Explosive bullets", &self.b_ExplosiveAmmo);
			Menu::BoolOption("infinte ammo", &self.b_InfiniteAmmo);
		}

		if (Menu::currentMenu("self")) {


			Menu::Title("Self");

			Menu::MenuOption("Skin", "skin");
			if (Menu::BoolOption("God mod", &self.b_GodMod))
				Features::toggle_GodMod(self.b_GodMod, self);
			if (Menu::BoolOption("Invisibility", &self.b_Invisible))
				Features::toggle_Invisibility(self.b_Invisible, self_ped);
			Menu::BoolOption("Super jump", &self.b_SuperJump);
			Menu::BoolOption("Never wanted", &self.b_NerverWanted);
			Menu::BoolOption("No ragdoll", &self.b_NoRagDoll);
		}

		if (Menu::currentMenu("skin")) {

			Menu::Title("Skin");

			if (Menu::Option("Reset skin"))
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
			}
		}

		if (Menu::currentMenu("online")) {
			Menu::Title("Online");
		}

		if (Menu::currentMenu("money_drop")) {

			Menu::Title("Money drop");

			Menu::MenuOption("Auto money", "auto_money");
			Menu::MenuOption("Money bag spawn", "money_bag");
		}

		if (Menu::currentMenu("auto_money")) {

			Menu::Title("Auto money");
			Menu::BoolOption("Active", &self.b_AutoMoney);
			Menu::IntOption("Money", &self.i_AutoMoneyAmount, 500, 2000, 500);
			Menu::IntOption("Delay", &self.i_AutoMoneyDelay, 100, 5000, 10);
		}

		if (Menu::currentMenu("money_bag")) {

			Menu::Title("Money bag drop");

			Menu::BoolOption("Active", &self.b_MoneyDrop);
			Menu::IntOption("Delay", &self.i_MoneyDropDelay, 10, 5000, 10);
			Menu::IntOption("Money", &self.i_MoneyDropAmount, 500, 10000, 500);
			Menu::CharArray("Model", MoneyModelMenu, &self.i_MoneyDropModelIndex, sizeof(MoneyModel) / sizeof(*MoneyModel) - 1);
		}

		if (Menu::currentMenu("vehicule")) {

			Menu::Title("Vehicle");

			Menu::MenuOption("vehicle spawn", "veh_spawn");
			Menu::MenuOption("Portable LSC", "lsc");
			Menu::MenuOption("Multipliers", "engine_modification");
			if (Menu::Option("Max upgrade"))
				Features::Max_veh(self_ped);
			if (Menu::Option("Fix vehicule"))
				Features::fix_veh(self_ped);
			if (Menu::Option("Flip vehicule"))
				Features::flip_veh(self_ped);
			if (Menu::Option("Change plate"))
				Features::set_plate(self_ped);
			if (Menu::BoolOption("Invisible vehicule", &self.b_VehicleInvisible))
				Features::veh_invisible(self_ped, self.b_VehicleInvisible);
			Menu::BoolOption("God mod vehicule", &self.b_VehicleGodMod);
			Menu::BoolOption("Rainbow color", &self.b_VehicleColorLoop);
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

		for (int i = 0; i < 25; i++) {
			char* cat = veh_cat_array[i];
			if (Menu::currentMenu(cat)) {
				Menu::Title(cat);
				for (int j = 1; j < 70; j++) {
					if (veh_cat(j) == cat) {
						for (int h = 0; h < 10; h++) {
							char* veh = (char*)vehiculeModels[j - 1][h];
							if (veh != "")
								if (Menu::Option(veh))
									Features::spawn_vehicle_model($(veh), b_TeleportInSpawnedVehicle, b_UpgradeSpawnedVehicle);
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
			if (PED::IS_PED_IN_ANY_VEHICLE(self_ped, 0)) {
				Menu::FloatOption("Engine RPM", &self.f_VehicleEngineRPM, 1, 990, 1.000000015f);
				Menu::FloatOption("Engine torque", &self.f_VehicleEngineTorque, 1, 990, 0.500000015f);
				Menu::FloatOption("Light multiplier", &self.f_VehicleLightMultiplier, 1, 200, 1.0000015f);
			}

		}

		if (Menu::currentMenu("lsc")) {
			Menu::Title("Portable LSC");
			if (PED::IS_PED_IN_ANY_VEHICLE(self_ped, 0)) {
				Menu::MenuOption("Color", "veh_color");
				Menu::CharArray("Plate type", platesTypes, &i_PlateType, sizeof(platesTypes) / sizeof(*platesTypes) - 1);
				Features::set_plate_type(veh, i_PlateType);
			}
		}

		if (Menu::currentMenu("veh_color")) {
			Menu::Title("Color");
			if (!PED::IS_PED_IN_ANY_VEHICLE(self_ped, 0))
				return;
			Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(self_ped);

			if (Menu::IntOption("Primary color RED", &veh_color_r, 0, 255, 1))
				Features::set_primary_color(veh, veh_color_r, veh_color_g, veh_color_b);
			if (Menu::IntOption("Primary color GREEN", &veh_color_g, 0, 255, 1))
				Features::set_primary_color(veh, veh_color_r, veh_color_g, veh_color_b);
			if (Menu::IntOption("Primary color BLUE", &veh_color_b, 0, 255, 1))
				Features::set_primary_color(veh, veh_color_r, veh_color_g, veh_color_b);
			Menu::Option("");

			if (Menu::IntOption("Secondary color RED", &veh_scolor_r, 0, 255, 1))
				Features::set_secondary_color(veh, veh_scolor_r, veh_scolor_g, veh_scolor_b);
			if (Menu::IntOption("Secondary color GREEN", &veh_scolor_g, 0, 255, 1))
				Features::set_secondary_color(veh, veh_scolor_r, veh_scolor_g, veh_scolor_b);
			if (Menu::IntOption("Secondary color BLUE", &veh_scolor_b, 0, 255, 1))
				Features::set_secondary_color(veh, veh_scolor_r, veh_scolor_g, veh_scolor_b);
			Menu::Option("");

			if (Menu::IntOption("Neon color RED", &veh_ncolor_r, 0, 255, 1))
				Features::set_neon_color(veh, veh_ncolor_r, veh_ncolor_g, veh_ncolor_b);
			if (Menu::IntOption("Neon color GREEN", &veh_ncolor_g, 0, 255, 1))
				Features::set_neon_color(veh, veh_ncolor_r, veh_ncolor_g, veh_ncolor_b);
			if (Menu::IntOption("Neon color BLUE", &veh_ncolor_b, 0, 255, 1))
				Features::set_neon_color(veh, veh_ncolor_r, veh_ncolor_g, veh_ncolor_b);
			Menu::Option("");

			if (Menu::IntOption("Perlecent color", &perlecent_color, 0, 160, 1))
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veh, perlecent_color, 0);

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
			if (Menu::IntOption("Custom rp lvl", &rp_lvl, 1, 9000000000000, 10))
				Features::set_player_rp(rp_lvl);
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
}