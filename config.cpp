#include "\vbs2\basic_defines.hpp"
#define __CurrentDir__ \vbs2\customer\plugins\behaviors_anna_vicikova

//Class necessary for VBS to load the new addon correctly
class CfgPatches
{
	class vbs2_vbs_plugins_behaviors_anna_vicikova

	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {
			vbs2_editor, 
			vbs2_people
		};
		modules[] =
		{
			vbs_core_content_module
		};
	};
};

// Adds btset to list of btsets which are loaded automatically
class CfgBehaviorTrees
{
	class behaviors_anna_vicikova
 //this is an arbitrary className, it needs to be unique though
	{
		path = "\vbs2\customer\plugins\behaviors_anna_vicikova\data\behaviors_anna_vicikova\behaviors_anna_vicikova.btset"; //This is the relative path to the BT-set file to load
		name = "behaviors_anna_vicikova"; // This is the btset name duplicated in the configuration
	};
};

class vbs_functions_base;
class CfgFunctions
{
	// Macro to build a function in sripts top folder
	#define MAKE_CORE_FUNCTION(functionName)                                 \
	class fn_vbs_behaviors_anna_vicikova_##functionName : vbs_functions_base                     \
	{                                                                       \
		path = __CurrentDir__\data\scripts\fn_vbs_behaviors_anna_vicikova__##functionName##.sqf;  \
	}

};

// formations
class CfgFormations
{
	class West
	{
		#include "cfgFormations.hpp"
	};

	class East : West
	{
		#include "cfgFormations.hpp"
	};

	class Civ : West
	{
		#include "cfgFormations.hpp"
	};

	class Guer : West
	{
		#include "cfgFormations.hpp"
	};
};

// Defines the new order as available from the Control AI - Military
class CfgAvailableBehaviors
{
	class behaviors_anna_vicikova_team_occupy
	{
		icon = "\vbs2\customer\plugins\behaviors_anna_vicikova\data\behaviors_anna_vicikova.paa";
		allowRotate = true;

		identity = "generic_team";
		displayname = "AV My Waypoint";
		description = "Veri cool.";				

		//displayCondition = "\core\addons\plugins\behaviors_anna_vicikova\data\scripts\waypointDisplayCondition.sqf";

		newOrderSubject = "NewOrder";
		
		class RootBehaviors
		{
			group[] = {"behaviors_anna_vicikova", "my_behavior"};
			entity[] = {"generic_behaviors_public", "genericRoot"};
		};
		
		class Parameters
		{
			class orderName
			{
				displayName = "orderName";
				value = "occupy";
				type = "string";
			}
			class orderParameters
			{
				displayName = "orderParameters";
				value = "";
				type = "table";
			};
			class reportCompletedToExternal
			{
				displayName = "reportCompletedToExternal";
				value = "true";
				type = "boolean";
			};
			class debugEnabled
			{
				displayName = "debugEnabled";
				value = "false";
				type = "boolean";
			};
		};
	};
};
