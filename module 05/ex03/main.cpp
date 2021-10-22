#include "Intern.hpp"

int main() {
	Bureaucrat bureaucrat("importantPerson", 2);
	Intern someRandomIntern;
	Form *form;

	try {
		form = someRandomIntern.makeForm("PresidentialPardonForm", "target");
		form->beSigned(bureaucrat);
		bureaucrat.executeForm(*form);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	try {
		form = someRandomIntern.makeForm("fakeForm", "target");
		form->beSigned(bureaucrat);
		bureaucrat.executeForm(*form);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	} 

	delete form;
	return 0;
}
