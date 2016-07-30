/**
    Hello future me. The reason that you choose to use vectors for the earnings and income despite the fact that it seems like they would be better there design wise
    is because you can't initialize arrays of the appropriate size without using magic numbers in the class constructors and you wanted to use strongly typed enums.
    Don't try it, it doesn't work. Seriously.
**/

#include "Building.h"

int main(int argc, char *argv[]){

    std::vector<int> test = {1, 2, 3, 4, 5};
    std::vector<int> earnings = {2, 2, 0, 0, 0};

    std::vector<int> cost = {4, 1, 4, 0, 190};
    Room falseFront("False Front", "Benefit", earnings, cost, 12, 10, 20);

    std::vector<Room> rooms;
    rooms.push_back(falseFront);
    Building building("Front one", test, rooms);

    std::vector<int> earnings2 = {2, 2, 2, 2, 2};
    Room test2("Error", "Benefit", earnings2, cost, 12, 10, 20);
    std::vector<Room> testRoom;

    testRoom.push_back(falseFront);
    testRoom.push_back(test2);

    Building build("Dat Building", testRoom);
		
	std::string exit;
	std::cin >> exit;


    return 0;
}
