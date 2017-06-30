#ifndef CHARACTER_H
#define CHARACTER_H

#include "Organization.h"

class Character
{
	public:
		Character();
		Character(std::string name, std::vector<Organization> organizations, int gold);
		~Character();
		std::vector<Organization> createOrganization();
		std::vector<Organization> organizations;
		int gold;
		std::string location;
	private:
		std::string name;
};

#endif