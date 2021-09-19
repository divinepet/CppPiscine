#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	string target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const string& target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

	virtual void execute(Bureaucrat const & executor) const;
	const string &getTarget() const;
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &other);