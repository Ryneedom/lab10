#include "Dean.h"
#include "Employee.h"

void Dean::controlFaculty(Faculty f) {
    this->faculty = f;
}

void Dean::setSocial_security_number(int social_security_number)
{
    this->social_security_number = social_security_number;
}

int Dean::getSocial_security_number()
{
    return this->social_security_number;
}

void Dean::setEmail(std::string email)
{
    this->email = email;
}

std::string Dean::getEmail()
{
    return this->email;
}

void Dean::setName(std::string name)
{
    this->name = name;
}

std::string Dean::getName()
{
    return this->name;
}
