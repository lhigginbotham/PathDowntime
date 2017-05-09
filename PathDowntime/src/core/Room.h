#ifndef ROOM_H
#define ROOM_H

#include "Constants.h"

class Room
{
	public:
		std::vector<int> earningsBonus;
		Room(std::string name, std::string benefit, std::vector<int> earningsBonus, std::vector<int> cost, int time, int minSize, int maxSize);
		virtual ~Room();
		std::string getName();

	protected:
	private:
		std::string name;
		std::string benefit;
		std::vector<int> cost;
		int time;
		int minSize;
		int maxSize;
};

#endif // ROOM_H
