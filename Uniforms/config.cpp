class CfgPatches
{
    class BGR_Uniforms_CBUU
    {
        units[] =
        {
            ""
        };
        weapons[] =
        {
            ""
        };
        requiredVersion = 0.100000;
        requiredAddons[] = {};
    };
};

class cfgWeapons
{
    //Dependency map

    //Default uniforms (adjust values on this uniform)
    class BGR_Uniforms_CBUU_Desert_FT : TCP_U_B_CBUU_FieldTop_Full_Gloves_Bloused_Urban
    {
        author="Veta";
        dlc="BGR Aux";
        displayName="[BGR] CBUU Field Top (Desert)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Arid\CBUU_FieldTop_CO.paa"
        };
    };
    //Types of Field top uniforms
    class BGR_Uniforms_CBUU_Snow_FT : BGR_Uniforms_CBUU_Desert_FT
    {

    };
    class BGR_Uniforms_CBUU_Urban_FT : BGR_Uniforms_CBUU_Desert_FT
    {

    };
    class BGR_Uniforms_CBUU_Woodland_FT : BGR_Uniforms_CBUU_Desert_FT
    {

    };
};

class XtdGearModels
{

};

class XtdGearInfos
{

};