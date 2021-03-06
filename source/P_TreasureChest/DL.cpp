#include "TreasureChest.h"
#include "Bubble.h"

void init()
{
	OBJ_TO_ACTOR_ID_TABLE[TREASURE_CHEST_OBJECT_ID] = TREASURE_CHEST_ACTOR_ID;
	
	ACTOR_SPAWN_TABLE[TREASURE_CHEST_ACTOR_ID] = (u32)&TreasureChest::spawnData;
	ACTOR_SPAWN_TABLE[BUBBLE_ACTOR_ID] = (u32)&Bubble::spawnData;
	
	TreasureChest::modelFile.Construct(TREASURE_CHEST_MODEL_FILE_ID);
	TreasureChest::animFile.Construct(TREASURE_CHEST_ANIMATION_FILE_ID);
}

void cleanup()
{
	
}