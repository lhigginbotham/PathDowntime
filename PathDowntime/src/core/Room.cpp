#include "Room.h"

Room::Room(std::string name, std::string benefit, std::vector<int> earnings, std::vector<int> cost, int time, int minSize, int maxSize) : name(name),
           benefit(benefit), earnings(earnings), cost(cost), time(time), minSize(minSize), maxSize(maxSize)
{
    std::cout << "In room constructor\n";
    std::cout << "Name: " << name << "\nEarnings: " <<
        earnings[static_cast<int>(IncomeType::Gold)] << " " << earnings[static_cast<int>(IncomeType::Goods)] << " " <<
        earnings[static_cast<int>(IncomeType::Influence)] << " " << earnings[static_cast<int>(IncomeType::Labor)] << " " <<
        earnings[static_cast<int>(IncomeType::Magic)] << "\nMax Size: " << maxSize << "\n";
}

Room::~Room()
{
}

std::string Room::getName()
{
    return name;
}
