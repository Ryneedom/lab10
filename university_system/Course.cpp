#include "Course.h"

int Course::getUnique_number() {
	return this->unique_number;
}

void Course::setUnique_number(int unique_number) {
	this->unique_number = unique_number;
}

std::string Course::getName() {
	return this->name;
}

void Course::setName(std::string name) {
	this->name = name;
}

int Course::getWeekly_duration() {
	return this->weekly_duration;
}

void Course::setWeekly_duration(int weekly_duration) {
	this->weekly_duration = weekly_duration;
}
