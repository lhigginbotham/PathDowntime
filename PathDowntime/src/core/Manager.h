#ifndef MANAGER_H_
#define MANAGER_H_

#include <string>
#include <vector>

class Manager
{
public:
	Manager(std::string name, int wage, std::vector<std::string> skills, std::string description);
	virtual ~Manager();
	std::string name;
	int wage;
	std::vector<std::string> skills;
	std::string description;
private:

};

#endif MANAGER_H_
