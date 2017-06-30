#include "Building.h"

Building::Building(std::string name, std::vector<int> income): name(name), income(income)
{
	std::cout << "Name: " << name << "\nIncome: " << income[0] << std::endl;
}

Building::Building(std::string name, std::vector<int> income, std::vector<Room> rooms) : name(name), income(income), rooms(rooms)
{

}

Building::Building(std::string name, std::vector<int> income, std::vector<Manager> managers, std::vector<Room> rooms) : name(name), income(income), managers(managers), rooms(rooms)
{

}

Building::Building(std::string name, std::vector<Room> rooms) : name(name), rooms(rooms)
{
	calculateIncome(rooms);
}

Building::~Building()
{
	//dtor
}

void Building::addRoom(Room room)
{
	rooms.push_back(room);
}

/// <summary>
/// 
/// </summary>
/// <param name="rooms"></param>
/// <param name="local"></param>
/// <param name="days"></param>
/// <param name="type"></param>
/// <returns></returns>
std::vector<int> Building::passTime(std::vector<Room> rooms, bool local, int days, IncomeType type)
{
	//TODO: Pull out all the resource depreciation from this system
	std::vector<int> earningsBonus = { 0, 0, 0, 0, 0 };
	earningsBonus = calculateEarnings(days, type);
	return earningsBonus;
}


/// <summary>
/// 
/// </summary>
/// <param name="rooms"></param>
void Building::calculateIncome(std::vector<Room> rooms)
{
	std::vector<int> sumEarnings = {0, 0, 0, 0, 0};
	if(!rooms.empty())
	{
		for(Room& room : rooms)
		{
			for(int i = 0; i < static_cast<int>(IncomeType::NUM_OF_INCOME_TYPE); i++)
			{
				sumEarnings[i] += room.earningsBonus[i];
			}
		}
	}
	this->income = sumEarnings;
}

/// <summary>
/// 
/// </summary>
/// <param name="time"></param>
/// <param name="type"></param>
/// <returns></returns>
std::vector<int> Building::calculateEarnings(int time, IncomeType type)
{
	std::vector<int> earningsBonus = { 0, 0, 0, 0, 0 };
	for (int i = 0; i < time; i++)
	{
		earningsBonus[static_cast<int>(type)] += income[static_cast<int>(type)];
	}
	return earningsBonus;
}

int Building::calculateUpkeep() noexcept
{
	int upkeep = 0;
	for (auto manager : this->managers)
	{
		upkeep += manager.wage;
	}
	return upkeep;
}