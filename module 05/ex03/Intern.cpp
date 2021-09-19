#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form* Intern::makeForm(const string &name, const string &target) {
	Form *forms[] = {new PresidentialPardonForm(target), new ShrubberyCreationForm(target), new RobotomyRequestForm(target)};
	for (int i = 0; i < 3; ++i) {
		if (forms[i]->getName() == name) {
			cout << "Intern creates <" + forms[i]->getName() + ">" << endl;
			return forms[i];
		}
	}
	throw Form::UnknownFormException();
}
