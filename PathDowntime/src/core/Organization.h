#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include "Building.h"

class Organization
{
	public:
		Organization();
		~Organization();
	private:
		std::string name;
		std::string location;
		std::vector<int> assets;
		std::vector<Building> buildings;
};

#endif