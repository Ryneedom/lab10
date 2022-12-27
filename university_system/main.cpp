#include "Faculty.h"
#include "Institute.h"
#include "Employee.h"
#include "Dean.h"
#include "ResearchEmployee.h"
#include "Project.h"
#include "Lecturer.h"
#include "Course.h"

#include <iostream>

using namespace std;
int main(void)
{
    Faculty faculty;
    faculty.setName("Факультет компьютерных наук");

    Institute institute;
    institute.set_number(12);

    Employee employee;
    employee.setName("Соломатин Дмитрий Иванович");
    employee.setEmail("solomatin@sc.vsu.ru");
    employee.setSocial_security_number(13);

    Dean dean;
    dean.setName("Крыловецкий Александр Абрамович");
    dean.setEmail("krylovetskyi@sc.vsu.ru");
    dean.setSocial_security_number(1);
    dean.controlFaculty(faculty);

    ResearchEmployee rEmployee;
    rEmployee.setName("Чекмарев Андрей Игоревич");
    rEmployee.setEmail("chekmarev@sc.vsu.ru");
    rEmployee.setSocial_security_number(10);
    rEmployee.setInstitute(institute);

    Project project;
    project.setName("ФКН БРС");
    project.setHours(180);

    rEmployee.setSpecialProject(project);

    Course course;
    course.setName("Основы ОС UNIX");
    course.setUnique_number(25);
    course.setWeekly_duration(2);

    Lecturer lecturer;
    lecturer.setName("Власов Сергей Васильевич");
    lecturer.setEmail("svv@sc.vsu.ru");
    lecturer.setSocial_security_number(6);

    lecturer.setCourse(course);

    cout << "Факультет: " << faculty.getName() << endl;
    cout << "Кафедра Программирования и информационных систем: количество сотрудников - " << institute.get_number() << endl;
    cout << employee.getSocial_security_number() << " сотрудник: " << employee.getName() << ", email " << employee.getEmail() << endl;
    cout << "Декан:" << endl;
    cout << dean.getSocial_security_number() << " декан: " << dean.getName() << ", email " << dean.getEmail() << endl;
    cout << "Заведует факультетом: " << dean.faculty.getName() << endl;
    cout << rEmployee.getSocial_security_number() << " научный сотрудник: " << rEmployee.getName() << ", email " << rEmployee.getEmail() << endl;
    cout << "Работает над проектом: " << project.getName() << ", количество часов: " << project.getHours() << endl;
    cout << lecturer.getSocial_security_number() << " сотрудник - преподаватель: " << lecturer.getName() << ", email " << lecturer.getEmail() << endl;
    cout << "Ведет курс № " << course.getUnique_number() << ", " << course.getName() << ", " << course.getWeekly_duration() << " часа в неделю" << endl;
    return 0;
}
