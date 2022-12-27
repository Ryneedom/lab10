#include "Employee.h"

int Employee::getSocial_security_number() {
	return this->social_security_number;
}

void Employee::setSocial_security_number(int social_security_number) {
	this->social_security_number = social_security_number;
}

std::string Employee::getName() {
	return this->name;
}

void Employee::setName(std::string name) {
	this->name = name;
}

std::string Employee::getEmail() {
	return this->email;
}

void Employee::setEmail(std::string email) {
	this->email = email;
}
