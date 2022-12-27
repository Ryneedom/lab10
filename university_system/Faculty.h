#ifndef FACULTY_H
#define FACULTY_H

#include <string>
class Faculty {

private:
    std::string name;

public:
    std::string getName();

	void setName(std::string name);
};

#endif
