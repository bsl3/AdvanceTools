#define AXO_MOD 
#define MOD_ID "advanced_tools"
#include "AxoAPI.h"

extern "C" __declspec(dllexport)
void ModEntry(AxoMod* /*mod*/, AxoAPITable* api) {
    AxoMod_SetAPI(api);
// Here you register things like blocks, items, etc.
    //items
    AxoItemDef steel_ingot;
    steel_ingot.iconName = L"steel_ingot"; // From textures/items
    steel_ingot.name = "Steel Ingot";
    steel_ingot.maxStackSize = 64; // Stack Size
    steel_ingot.creativeTab = 4;
    
    if (AxoAPI_RegisterItem(&steel_ingot))
        AxoAPI_Log("Steel Ingot DONE.");
    else
        AxoAPI_Log("Steel Ingot ERROR.");



}

extern "C" __declspec(dllexport)
void OnTick() {
    // Currently not used for anything.
}

extern "C" __declspec(dllexport)
void OnShutdown() {
    // Method called on shutdown
}
