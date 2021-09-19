#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	string target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const string& target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

	virtual void execute(Bureaucrat const & executor) const;
	const string &getTarget() const;
};

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &other);