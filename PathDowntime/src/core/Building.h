#ifndef BUILDING_H
#define BUILDING_H

#include "Room.h"

class Building
{
	public:
		Building(std::string name, std::vector<int> income);
		Building(std::string name, std::vector<int> income, std::vector<Room> rooms);
		Building(std::string name, std::vector<Room> rooms);
		virtual ~Building();
		void addRoom(Room room);
		std::vector<int> passTime(std::vector<Room> rooms, bool local, int days, IncomeType type);
	protected:
	private:
		std::string name;
		std::vector<int> income;
		std::vector<Room> rooms;
		void calculateIncome(std::vector<Room> room);
		std::vector<int> calculateEarnings(int time, IncomeType type);
};

#endif // BUILDING_H
