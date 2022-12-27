#ifndef RESEARCHEMPLOYEE_H
#define RESEARCHEMPLOYEE_H

#include "Employee.h"
#include "Institute.h"
#include "Project.h"

class ResearchEmployee : Employee {

protected:
	Institute institute;
	Project project;

public:
	void setSpecialProject(Project p);

	Institute getInstitute();

	void setInstitute(Institute institute);

    int getSocial_security_number() override;

    void setSocial_security_number(int social_security_number) override;

    std::string getName() override;

    void setName(std::string name) override;

    std::string getEmail() override;

    void setEmail(std::string email) override;
};

#endif
