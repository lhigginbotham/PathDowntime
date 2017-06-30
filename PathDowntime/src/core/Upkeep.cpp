
#include "Upkeep.h"

int determineUpkeep(Character player)
{
	int upkeep = 0;
	for (auto org : player.organizations)
	{
		for (auto building : org.buildings)
		{
			upkeep += building.calculateUpkeep();
		}
	}
	return upkeep;
}

bool payCosts(Character player, const unsigned int costs)
{
	if (player.gold < costs)
	{
		return false;
	}
	player.gold = player.gold - costs;
	return true;
}

int calculateCapitalAttrition(const unsigned int daysAway)
{
	return daysAway / 7;
}

void applyAttrition(Character player, const unsigned int attrition)
{
	for (auto org : player.organizations)
	{
		if (player.location != org.location)
		{
			org.applyCapitalAttrition(attrition);
		}
	}
}

bool determineBuisnessAttrition(const unsigned int daysAway)
{
	if (daysAway > 30)
	{
		//TODO Implement Buisness Attrition
		//Need to do stuff like incorporate leadership/random events
		return true;
	}
	return false;
}