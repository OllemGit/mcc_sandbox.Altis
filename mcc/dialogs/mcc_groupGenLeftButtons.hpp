#define MCC_buttonsSpace 0.0769695
class MCC_leftButtonsControls: MCC_RscControlsGroup
{
	idc = -1;
	x = 0.110417 * safezoneW + safezoneX;
	y = 0.0931586 * safezoneH + safezoneY;	//0.0439824
	w = 0.06875 * safezoneW;
	h = 0.472816 * safezoneH;	

	class Controls
	{	
			
		class MCC_groupGenSpawnButton: MCC_RscButton 
		{
			idc = -1; 
			text = "Spawn"; 
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Spawn units or groups"; 
			onButtonClick = __EVAL("[6] execVM '"+MCCPATH+"mcc\general_scripts\groupGen\controlsHandle.sqf'");
			
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
		};

		class MCC_3DEditor: MCC_RscButton 
		{
			idc = -1; text = "3D Editor"; 
			
			y = MCC_buttonsSpace * 1;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Open 3D editor"; 
			onButtonClick = __EVAL("[0] execVM '"+MCCPATH+"mcc\pop_menu\spawn_group3d.sqf'");
		};

		class MCC_boxGenerator: MCC_RscButton
		{
			idc = -1;
			text = "Box Generator"; //--- ToDo: Localize;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Open Box Generator"; 
			onButtonClick = "if (mcc_missionmaker == (name player)) then {createDialog 'boxGen';} else {player globalchat 'Access Denied'};";
			
			y = MCC_buttonsSpace * 2;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
		};

		class MCC_callCASButton: MCC_RscButton
		{
			idc = -1;
			text = "CAS"; //--- ToDo: Localize;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Open Close Air Support Generator"; 
			onButtonClick = __EVAL("[4] execVM '"+MCCPATH+"mcc\general_scripts\groupGen\controlsHandle.sqf'");
			
			y = MCC_buttonsSpace * 3;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
		};

		class MCC_callArtilleryButton: MCC_RscButton
		{
			idc = -1;
			text = "Artillery"; //--- ToDo: Localize;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Open artillery Generator"; 
			onButtonClick = __EVAL("[5] execVM '"+MCCPATH+"mcc\general_scripts\groupGen\controlsHandle.sqf'");
			
			y = MCC_buttonsSpace * 4;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
		};

		class MCC_callEvacButton: MCC_RscButton
		{
			idc = -1;
			text = "Evac"; //--- ToDo: Localize;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Open Evac Generator"; 
			onButtonClick = __EVAL("[7] execVM '"+MCCPATH+"mcc\general_scripts\groupGen\controlsHandle.sqf'");
			
			y = MCC_buttonsSpace * 5;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
		};

		class MCC_callIEDButton: MCC_RscButton
		{
			idc = -1;
			text = "IED"; //--- ToDo: Localize;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Open IEDs Generator"; 
			onButtonClick = __EVAL("[8] execVM '"+MCCPATH+"mcc\general_scripts\groupGen\controlsHandle.sqf'");
			
			y = MCC_buttonsSpace * 6;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
		};

		class MCC_callConvoyButton: MCC_RscButton
		{
			idc = -1;
			text = "Convoy"; //--- ToDo: Localize;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Open Convoy Generator"; 
			onButtonClick = __EVAL("[9] execVM '"+MCCPATH+"mcc\general_scripts\groupGen\controlsHandle.sqf'");
			
			y = MCC_buttonsSpace * 7;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
		
		class MCC_AC130ConvoyButton: MCC_RscButton
		{
			idc = -1;
			text = "AC-130"; //--- ToDo: Localize;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			tooltip = "Spawn AC-130 (use MCC console to control it)"; 
			onButtonClick = __EVAL ("[0] execVM '"+MCCPATH+"mcc\general_scripts\uav\uavSpawn.sqf'");
			
			y = MCC_buttonsSpace * 8;
			w = 0.06875 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
	};
};