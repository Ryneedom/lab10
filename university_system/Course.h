#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {

private:
	int unique_number;
    std::string name;
	int weekly_duration;

public:
	int getUnique_number();

	void setUnique_number(int unique_number);

    std::string getName();

	void setName(std::string name);

	int getWeekly_duration();

	void setWeekly_duration(int weekly_duration);
};

#endif
