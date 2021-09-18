#pragma once

#include <iostream>
#include "Form.hpp"

using std::string;
using std::cout;
using std::endl;

class PresidentialPardonForm : public Form {
	string target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const string& target);
	virtual ~PresidentialPardonForm();
	virtual void execute(Bureaucrat const & executor) const;
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

	const string &getTarget() const;
};

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &other);