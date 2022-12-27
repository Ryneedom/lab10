#ifndef PROJECT_H
#define PROJECT_H

#include <string>

class Project {

private:
    std::string name;
	int hours;

public:
    std::string getName();

	void setName(std::string name);

	int getHours();

	void setHours(int hours);
};

#endif
