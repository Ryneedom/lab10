#ifndef DEAN_H
#define DEAN_H

#include "Employee.h"
#include "Faculty.h"

class Dean : Employee {

public:
	Faculty faculty;

	void controlFaculty(Faculty f);

    int getSocial_security_number() override;

    void setSocial_security_number(int social_security_number) override;

    std::string getName() override;

    void setName(std::string name) override;

    std::string getEmail() override;

    void setEmail(std::string email) override; 
};

#endif
