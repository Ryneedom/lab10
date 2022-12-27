#ifndef LECTURER_H
#define LECTURER_H

#include "Employee.h"
#include "ResearchEmployee.h"
#include "Course.h"

class Lecturer : ResearchEmployee {

private:
	int social_security_number;
    std::string name;
    std::string email;
	Course course;

public:

	void setCourse(Course c);
    Course getCourse();

    void setInstitute(Institute institute);

    int getSocial_security_number() override;

    void setSocial_security_number(int social_security_number) override;

    std::string getName() override;

    void setName(std::string name) override;

    std::string getEmail() override;

    void setEmail(std::string email) override;

};

#endif
