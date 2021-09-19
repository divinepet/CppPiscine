#pragma once

#include <iostream>
#include <fstream>
#include "Form.hpp"

using std::string;
using std::cout;
using std::endl;

class ShrubberyCreationForm : public Form {
	string target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(const string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	virtual void execute(Bureaucrat const & executor) const;
	const string &getTarget() const;
};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &other);