#include "Project.h"

std::string Project::getName() {
	return this->name;
}

void Project::setName(std::string name) {
	this->name = name;
}

int Project::getHours() {
	return this->hours;
}

void Project::setHours(int hours) {
	this->hours = hours;
}
