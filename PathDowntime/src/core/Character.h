#ifndef CHARACTER_H
#define CHARACTER_H

#include "Organization.h"

class Character
{
	public:
		Character();
		~Character();
		std::vector<Organization> createOrganization();
	private:
		std::string name;
		std::vector<Organization> organizations;
};

#endif