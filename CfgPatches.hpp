class cfgPatches
{
	class TAW_AUX_BALANCE
	{
		name="TAW Aux Balance";
		author="TAW";
		requiredAddons[]={
			"A3_Data_F",
			"A3_Functions_F",
			"A3_Air_F",
			"A3_Characters_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Tank",
			"A3_Weapons_F_Sams",
			"A3_Weapons_F_Enoch",
			"rhsusf_main",
			"rhsusf_melb",
			"rhsusf_c_heavyweapons",
			"rhsusf_c_airweapons"
		};
		requiredVersion=1.0;
		weapons[]={};
		units[]={"B_UAV_02_dynamicLoadout_F_mk2", "B_UAV_05_F_mk2", "B_T_UAV_03_dynamicLoadout_F_mk2"};
		magazines[]={};
		ammo[]={};
	};
};