class CfgPatches
{
    class Hexenzirkel_Cars
    {
        units[] =
        {
            "Hexenzirkel_DodgeCharger_Police"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Wheeled_Sedan_02"
        };
    };
};

class CfgMods
{
    class Hexenzirkel_Cars
    {
        dir = "Hexenzirkel_Cars";
        name = "Hexenzirkel Cars";
        author = "Hexenzirkel";
        type = "mod";
        dependencies[] =
        {
            "World"
        };

        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {};
            };
        };
    };
};

class CfgVehicles
{
    class Sedan_02;

    class Hexenzirkel_DodgeCharger_Police: Sedan_02
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hexenzirkel Dodge Charger Police";
        descriptionShort = "Polizeifahrzeug des Hexenzirkels";
        model = "\Hexenzirkel_Cars\model\Hexenzirkel_DodgeCharger_Police.p3d";

        class AnimationSources
        {
            class DoorsDriver
            {
                source = "user";
                initPhase = 0;
                animPeriod = 0.8;
            };

            class DoorsCoDriver: DoorsDriver {};
            class DoorsCargo1: DoorsDriver {};
            class DoorsCargo2: DoorsDriver {};

            class DoorsHood: DoorsDriver
            {
                animPeriod = 1.0;
            };

            class DoorsTrunk: DoorsDriver
            {
                animPeriod = 1.0;
            };
        };
    };
};
