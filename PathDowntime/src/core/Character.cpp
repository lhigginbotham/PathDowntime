#include "Character.h"



Character::Character()
{
}

Character::Character(std::string name, std::vector<Organization> organizations, int gold) : name(name), organizations(organizations), gold(gold)
{
}

Character::~Character()
{
}

std::vector<Organization> Character::createOrganization()
{
	std::vector<Organization> org;
	return org;
}