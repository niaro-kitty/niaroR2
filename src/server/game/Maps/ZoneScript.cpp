#include "ZoneScript.h"
#include "Creature.h"

uint32 ZoneScript::GetCreatureEntry(uint32, const CreatureData *data)
{
    return data->id;
}

uint32 ZoneScript::GetGameObjectEntry(uint32, uint32 entry)
{
    return entry;
}
