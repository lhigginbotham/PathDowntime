#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include "Building.h"

class Organization
{
	public:
		Organization();
		~Organization();
		std::vector<Building> buildings;
		std::string location;
		void applyCapitalAttrition(const unsigned int deduction);
	private:
		std::string name;
		std::vector<int> assets;
};

#endif