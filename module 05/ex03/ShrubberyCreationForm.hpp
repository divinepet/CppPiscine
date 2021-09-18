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
	virtual ~ShrubberyCreationForm();
	virtual void execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	const string &getTarget() const;
};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &other);