#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const string &target) :
	Form("PresidentialPardonForm", 25, 5), target(target) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	cout << target + " has been pardoned by Zafod Beeblebrox" << endl;
}

const string &PresidentialPardonForm::getTarget() const {
	return target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other) {
	target = other.getTarget();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &other) {
	return out << "form <" + other.getName() + ">";
}
