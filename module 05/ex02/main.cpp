#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
const string CYAN = "\x1B[3;96m\t\t";
const string RESET = "\033[0m";

int main() {
	Bureaucrat *bureaucrat_1 = new Bureaucrat("petuh", 136);
	Bureaucrat *bureaucrat_2 = new Bureaucrat("intern", 44);
	Bureaucrat *bureaucrat_3 = new Bureaucrat("groover", 4);

	Form *form_1 = new ShrubberyCreationForm("happy_x-mas!");
	Form *form_2 = new RobotomyRequestForm("robocop");
	Form *form_3 = new PresidentialPardonForm("asshole");

	cout << CYAN + "OK TEST" + RESET << endl;
	try {
		form_1->beSigned(*bureaucrat_1);
		bureaucrat_1->executeForm(*form_1);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	try {
		form_2->beSigned(*bureaucrat_2);
		bureaucrat_2->executeForm(*form_2);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	try {
		form_3->beSigned(*bureaucrat_3);
		bureaucrat_3->executeForm(*form_3);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	cout << CYAN + "TOO SMALL GRADE FOR SIGN" + RESET << endl;
	try {
		form_3->beSigned(*bureaucrat_1);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	cout << CYAN + "TOO SMALL GRADE FOR EXECUTE" + RESET << endl;
	try {
		bureaucrat_1->executeForm(*form_3);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	delete bureaucrat_1, delete bureaucrat_2, delete bureaucrat_3;
	delete form_1, delete form_2, delete form_3;
	return 0;
}
