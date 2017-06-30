#include "Organization.h"



Organization::Organization()
{
}


Organization::~Organization()
{
}

void Organization::applyCapitalAttrition(const unsigned int deduction)
{
	for (int i = 1; i < this->assets.size(); i++)
	{
		if (this->assets[i] - deduction < 0)
		{
			this->assets[i] = 0;
		}
		else
		{
			this->assets[i] -= deduction;
		}
	}
}