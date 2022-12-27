#include "ResearchEmployee.h"

void ResearchEmployee::setSpecialProject(Project p) {
    this->project = p;
}

Institute ResearchEmployee::getInstitute() {
	return this->institute;
}

void ResearchEmployee::setInstitute(Institute institute) {
	this->institute = institute;
}

void ResearchEmployee::setSocial_security_number(int social_security_number)
{
    this->social_security_number = social_security_number;
}

int ResearchEmployee::getSocial_security_number()
{
    return this->social_security_number;
}

void ResearchEmployee::setEmail(std::string email)
{
    this->email = email;
}

std::string ResearchEmployee::getEmail()
{
    return this->email;
}

void ResearchEmployee::setName(std::string name)
{
    this->name = name;
}

std::string ResearchEmployee::getName()
{
    return this->name;
}
