#pragma once

#include <iostream>
#include "Form.hpp"

using std::string;
using std::cout;
using std::endl;

class RobotomyRequestForm : public Form {
	string target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const string& target);
	virtual ~RobotomyRequestForm();
	virtual void execute(Bureaucrat const & executor) const;
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

	const string &getTarget() const;
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &other);