#pragma once

#include <fstream>
#include "Form.hpp"


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