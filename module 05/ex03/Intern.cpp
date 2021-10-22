#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form* Intern::makeForm(const string &name, const string &target) {
	Form *forms[3] = {new PresidentialPardonForm(target), new ShrubberyCreationForm(target), new RobotomyRequestForm(target)};
	for (size_t i = 0; i < 3; ++i) {
		if (forms[i]->getName() == name) {
			cout << "Intern creates <" + forms[i]->getName() + ">" << endl;
			for (size_t j = 0; j < 3; j++) {
				if (j == i) continue;
				delete forms[j];
			}
			return forms[i];
		}
	}
	for (size_t j = 0; j < 3; j++)
		delete forms[j];
	throw Form::UnknownFormException();
}
