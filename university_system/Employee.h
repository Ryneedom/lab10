#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {

protected:
	int social_security_number;
    std::string name;
    std::string email;

public:
	virtual int getSocial_security_number();

	virtual void setSocial_security_number(int social_security_number);

    virtual std::string getName();

	virtual void setName(std::string name);

    virtual std::string getEmail();

	virtual void setEmail(std::string email);
};

#endif
