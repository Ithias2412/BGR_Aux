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
    class UniformItem {};
    class TCP_U_B_CBUU_FieldTop_Full_Base
    {
        class ItemInfo : UniformItem {};
    };
    class TCP_U_B_CBUU_TacShirt_Full_Base
    {
        class ItemInfo : UniformItem {};
    };
    class TCP_U_B_CBUU_TShirt_Tucked_Base {
        class ItemInfo : UniformItem {};
    };
    class TCP_U_B_CBUU_FieldTop_Full_Unzipped_Base : TCP_U_B_CBUU_FieldTop_Full_Base
    {
        class ItemInfo : ItemInfo {};
    };
    class TCP_U_B_CBUU_TacShirt_Full_Arid : TCP_U_B_CBUU_TacShirt_Full_Base
    {
        class ItemInfo : ItemInfo {};
    };
    class TCP_U_B_CBUU_TShirt_Tucked_Arid : TCP_U_B_CBUU_TShirt_Tucked_Base {
        class ItemInfo : ItemInfo {};
    };
    class TCP_U_B_CBUU_FieldTop_Full_Unzipped_Arid : TCP_U_B_CBUU_FieldTop_Full_Unzipped_Base {
        class ItemInfo : ItemInfo {};
    };

    //Default uniforms (adjust values on this uniform)
    class BGR_Uniforms_CBUU_Desert_FT : TCP_U_B_CBUU_FieldTop_Full_Unzipped_Arid
    {
        author="Veta";
        dlc="BGR Aux";
        displayName="[BGR] CBUU Field Top (Desert)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Arid\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_FieldTop_Full_Arid;
        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS : TCP_U_B_CBUU_TacShirt_Full_Arid
    {
        author="Veta";
        dlc="BGR Aux";
        displayName="[BGR] CBUU Tac Shirt (Desert)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Arid\CBUU_TacShirt_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_TacShirt_Full_Arid;
        };
    };
    class BGR_Uniforms_CBUU_Desert_TS : TCP_U_B_CBUU_TShirt_Tucked_Arid
    {
        author="Veta";
        dlc="BGR Aux";
        displayName="[BGR] CBUU T-Shirt (Desert)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Tan\CBUU_Undershirt_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_TShirt_Tucked_Arid;
        };
    };
    //Camos of Field top uniforms
    class BGR_Uniforms_CBUU_Snow_FT : BGR_Uniforms_CBUU_Desert_FT
    {
        displayName="[BGR] CBUU Field Top (Snow)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Arctic\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_FieldTop_Full_Arctic;
        };
    };
    class BGR_Uniforms_CBUU_Urban_FT : BGR_Uniforms_CBUU_Desert_FT
    {
        displayName="[BGR] CBUU Field Top (Urban)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Urban\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_FieldTop_Full_Urban;
        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT : BGR_Uniforms_CBUU_Desert_FT
    {
        displayName="[BGR] CBUU Field Top (Woodland)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Woodland\CBUU_FieldTop_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_FieldTop_Full_Woodland;
        };
    };
    //Camos of Tac Shirt uniforms
    class BGR_Uniforms_CBUU_Snow_TacS : BGR_Uniforms_CBUU_Desert_TacS
    {
        displayName="[BGR] CBUU Tac Shirt (Snow)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Arctic\CBUU_TacShirt_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_TacShirt_Full_Arctic;
        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS : BGR_Uniforms_CBUU_Desert_TacS
    {
        displayName="[BGR] CBUU Tac Shirt (Urban)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Urban\CBUU_TacShirt_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_TacShirt_Full_Urban;
        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS : BGR_Uniforms_CBUU_Desert_TacS
    {
        displayName="[BGR] CBUU Tac Shirt (Woodland)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Woodland\CBUU_TacShirt_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_TacShirt_Full_Woodland;
        };
    };
    //Camos of T-Shirt uniforms
    class BGR_Uniforms_CBUU_Snow_TS : BGR_Uniforms_CBUU_Desert_TS
    {
        displayName="[BGR] CBUU T-Shirt (Snow)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\White\CBUU_Undershirt_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_TacShirt_Full_Arctic;
        };
    };
    class BGR_Uniforms_CBUU_Urban_TS : BGR_Uniforms_CBUU_Desert_TS
    {
        displayName="[BGR] CBUU T-Shirt (Urban)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_Undershirt_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_TacShirt_Full_Urban;
        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS : BGR_Uniforms_CBUU_Desert_TS
    {
        displayName="[BGR] CBUU T-Shirt (Woodland)";
        hiddenSelectionsTextures[] =
        {
            "\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Olive\CBUU_Undershirt_CO.paa"
        };
        class ItemInfo : ItemInfo
        {
            uniformClass = TCP_B_CBUU_TacShirt_Full_Woodland;
        };
    };
    //Other types of Field top uniforms
    //Desert
    class BGR_Uniforms_CBUU_Desert_FT_Zipped : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Gloves : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Gloves : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Gloves : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Gloves : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Gloves : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Gloves : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Snow
    class BGR_Uniforms_CBUU_Snow_FT_Zipped : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Quarter : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Half : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Gloves : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Quarter : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Half : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Gloves : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Quarter_Gloves : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Quarter_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Quarter_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Half_Gloves : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Half_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Half_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Zipped_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Quarter_Gloves : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Quarter_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Quarter_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Half_Gloves : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Half_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Half_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_FT_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Urban
    class BGR_Uniforms_CBUU_Urban_FT_Zipped : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Quarter : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Half : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Gloves : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Quarter : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Half : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Gloves : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Quarter_Gloves : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Quarter_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Quarter_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Half_Gloves : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Half_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Half_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Zipped_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Quarter_Gloves : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Quarter_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Quarter_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Half_Gloves : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Half_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Half_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_FT_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Woodland
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Quarter : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Half : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Gloves : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Quarter : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Half : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Gloves : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Quarter_Gloves : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Quarter_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Quarter_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Half_Gloves : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Half_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Half_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Zipped_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Quarter_Gloves : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Quarter_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Quarter_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Half_Gloves : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Half_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Half_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_FT_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_FT
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Other types of Tac Shirt uniforms
    //Desert
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Quarter : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Half : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Gloves : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Quarter : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Half : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Gloves : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Quarter_Gloves : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Quarter_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Quarter_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Half_Gloves : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Half_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Half_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Zipped_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Quarter_Gloves : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Quarter_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Quarter_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Half_Gloves : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Half_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Half_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TacS_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Snow
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Quarter : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Half : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Gloves : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Quarter : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Half : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Gloves : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Quarter_Gloves : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Quarter_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Quarter_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Half_Gloves : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Half_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Half_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Zipped_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Quarter_Gloves : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Quarter_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Quarter_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Half_Gloves : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Half_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Half_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TacS_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Urban
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Quarter : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Half : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Gloves : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Quarter : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Half : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Gloves : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Quarter_Gloves : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Quarter_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Quarter_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Half_Gloves : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Half_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Half_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Zipped_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Quarter_Gloves : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Quarter_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Quarter_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Half_Gloves : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Half_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Half_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TacS_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Woodland
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Quarter : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Half : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Gloves : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Quarter : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Half : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Gloves : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Quarter_Gloves : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Quarter_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Quarter_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Half_Gloves : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Half_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Half_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Zipped_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Quarter_Gloves : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Quarter_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Quarter_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Quarter_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Quarter_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Quarter_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Quarter_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Half_Gloves : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Half_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Half_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Half_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Half_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Half_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Half_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TacS_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TacS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Other types of TShirt uniforms
    //Desert
    class BGR_Uniforms_CBUU_Desert_TS_Untucked : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Gloves : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Bloused : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Kneepads : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Untucked_Gloves : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Untucked_Bloused : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Untucked_Kneepads : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Untucked_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Untucked_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Untucked_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Untucked_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Gloves_Bloused : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Gloves_Kneepads : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_TS_Bloused_Kneepads : BGR_Uniforms_CBUU_Desert_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Snow
    class BGR_Uniforms_CBUU_Snow_TS_Untucked : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Gloves : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Bloused : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Kneepads : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Untucked_Gloves : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Untucked_Bloused : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Untucked_Kneepads : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Untucked_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Untucked_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Untucked_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Untucked_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Gloves_Bloused : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Gloves_Kneepads : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Snow_TS_Bloused_Kneepads : BGR_Uniforms_CBUU_Snow_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Urban
    class BGR_Uniforms_CBUU_Urban_TS_Untucked : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Gloves : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Bloused : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Kneepads : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Untucked_Gloves : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Untucked_Bloused : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Untucked_Kneepads : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Untucked_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Untucked_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Untucked_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Untucked_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Gloves_Bloused : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Gloves_Kneepads : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Urban_TS_Bloused_Kneepads : BGR_Uniforms_CBUU_Urban_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    //Woodland
    class BGR_Uniforms_CBUU_Woodland_TS_Untucked : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Gloves : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Bloused : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Kneepads : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Untucked_Gloves : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Untucked_Bloused : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Untucked_Kneepads : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Untucked_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Untucked_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Untucked_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Untucked_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Gloves_Bloused : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Gloves_Kneepads : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Gloves_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Woodland_TS_Bloused_Kneepads : BGR_Uniforms_CBUU_Woodland_TS
    {
        ItemInfo : ItemInfo
        {

        };
    };
};

class cfgVehicles
{
    //Dependancy Map
    class TCP_B_CBUU_FieldTop_Full_Unzipped_Arid {};
    class TCP_B_CBUU_TacShirt_Full_Arid {};
    class TCP_B_CBUU_TShirt_Tucked_Arid {};

    //Default Classes (adjust values on this uniform)
    class BGR_Uniforms_CBUU_Desert_FT_V : TCP_B_CBUU_FieldTop_Full_Unzipped_Arid
    {
        author="Veta";
        dlc="BGR Aux";
        camouflage = 0.3
    };
    class BGR_Uniforms_CBUU_Desert_TacS_V : TCP_B_CBUU_TacShirt_Full_Arid
    {
        author="Veta";
        dlc="BGR Aux";
        camouflage = 0.3
    };
    class BGR_Uniforms_CBUU_Desert_TS_V : TCP_B_CBUU_TShirt_Tucked_Arid
    {
        author="Veta";
        dlc="BGR Aux";
        camouflage = 0.3
    };
    //Types of Field Top Uniforms
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "gloves",
            "foreArms",
            "upperArms",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "gloves",
            "upperArms",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "gloves",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Gloves_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "hands"
            "foreArms",
            "upperArms",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "gloves",
            "foreArms",
            "upperArms",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "gloves",
            "foreArms",
            "upperArms",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "gloves",
            "upperArms",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "gloves",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Gloves_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "hands",
            "foreArms",
            "upperArms",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "gloves",
            "foreArms",
            "upperArms",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "gloves",
            "foreArms",
            "upperArms",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Gloves_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "hands",
            "upperArms",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "gloves",
            "upperArms",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "gloves",
            "upperArms",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Gloves_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "hands",
            "upperArms",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Gloves_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "hands",
            "upperArms",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Gloves_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "hands",
            "upperArms",
            "pantssknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Quarter_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "gloves",
            "upperArms",
            "pantssknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Gloves_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "hands",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "gloves",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "gloves",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Gloves_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "hands",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Gloves_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "hands",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Gloves_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "hands",
            "pantssknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Half_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "gloves",
            "pantssknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Gloves_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "hands",
            "foreArms",
            "upperArms",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Gloves_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "hands",
            "foreArms",
            "upperArms",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Gloves_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "hands",
            "foreArms",
            "upperArms",
            "pantssknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Zipped_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtOpen",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "gloves",
            "foreArms",
            "upperArms",
            "pantssknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Gloves_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "hands",
            "upperArms",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "gloves",
            "upperArms",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "gloves",
            "upperArms",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Gloves_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "hands",
            "upperArms",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Gloves_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "hands",
            "upperArms",
            "pantssknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Gloves_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "hands",
            "upperArms",
            "pantssknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Quarter_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveHalfRoll",
            "sleeveSlim",
            "gloves",
            "upperArms",
            "pantssknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Gloves_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "hands",
            "pantshknees",
            "pantsBloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "camo2",
            "insignia",
            "clan",
            "shirtClosed",
            "sleeve3Quarter",
            "sleeve3QuarterRoll",
            "sleeveQuarter",
            "sleeveQuarterRoll",
            "sleeveSlim",
            "sleeveFull",
            "gloves",
            "pantshknees",
            "pantsUnbloused",
            "nameM43A",
            "nameM43D",
            "nameCH43A",
            "affiliationBaseSec",
            "affiliationGungnirS",
            "affiliationGungnirL",
            "affiliationODST",
            "affiliationPatrolCap",
            "affiliationUtilityCap",
            "affiliationUtilityCover",
            "rankM43A",
            "rankM43D",
            "bloodTypeBaseSec",
            "bloodTypeGungnirS",
            "bloodTypeGungnirL",
            "bloodTypeODST",
            "bloodTypeBREACHER",
            "bloodTypeSHARPSHOOTER"
        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Gloves_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Gloves_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Gloves_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Half_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Gloves_Bloused_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Gloves_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Gloves_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };
    class BGR_Uniforms_CBUU_Desert_FT_Bloused_Kneepads_V : BGR_Uniforms_CBUU_Desert_FT_V
    {
        ItemInfo : ItemInfo
        {

        };
    };

};

class XtdGearModels
{

};

class XtdGearInfos
{

};