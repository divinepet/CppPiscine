#pragma once

#include <iostream>
//#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

using std::string;
using std::cout;
using std::endl;

class Intern {
public:
	Intern();
	virtual ~Intern();
	Intern &operator=(Intern const &other);
	Form* makeForm(const string &name, const string &target);
};

std::ostream &operator<<(std::ostream &out, Intern const &other);