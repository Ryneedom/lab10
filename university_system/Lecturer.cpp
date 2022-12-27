#include "Lecturer.h"

void Lecturer::setCourse(Course c) {
	this->course = c;
}

Course Lecturer::getCourse()
{
    return this->course;
}

void Lecturer::setSocial_security_number(int social_security_number)
{
    this->social_security_number = social_security_number;
}

int Lecturer::getSocial_security_number()
{
    return this->social_security_number;
}

void Lecturer::setEmail(std::string email)
{
    this->email = email;
}

std::string Lecturer::getEmail()
{
    return this->email;
}

void Lecturer::setName(std::string name)
{
    this->name = name;
}

std::string Lecturer::getName()
{
    return this->name;
}
