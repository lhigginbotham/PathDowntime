#include "Room.h"

Room::Room(std::string name, std::string benefit, std::vector<int> earningsBonus, std::vector<int> cost, int time, int minSize, int maxSize) : name(name),
	       benefit(benefit), earningsBonus(earningsBonus), cost(cost), time(time), minSize(minSize), maxSize(maxSize)
{
	std::cout << "In room constructor\n";
	std::cout << "Name: " << name << "\nEarnings: " <<
		earningsBonus[static_cast<int>(IncomeType::Gold)] << " " << earningsBonus[static_cast<int>(IncomeType::Goods)] << " " <<
		earningsBonus[static_cast<int>(IncomeType::Influence)] << " " << earningsBonus[static_cast<int>(IncomeType::Labor)] << " " <<
		earningsBonus[static_cast<int>(IncomeType::Magic)] << "\nMax Size: " << maxSize << "\n";
}

Room::~Room()
{
}

std::string Room::getName()
{
	return name;
}
