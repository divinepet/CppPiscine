#include "Bureaucrat.hpp"
const string CYAN = "\x1B[3;96m\n\t\t";
const string RESET = "\033[0m";

int main() {
	cout << CYAN + "CALL EXCEPTIONS UPON CONSTRUCTION" + RESET << endl;

	try {
		Bureaucrat bureaucrat_grader("False-grader", 0);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	try {
		Bureaucrat bureaucrat_grader("False-grader", 151);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	cout << CYAN + "COPY AND ASSIGN OVERLOAD" + RESET << endl;

	Bureaucrat bureaucrat_1("Fat Nick", 1);
	Bureaucrat bureaucrat_2("Johnny Walker", 150);
	Bureaucrat bureaucrat_3 = bureaucrat_1;
	bureaucrat_1 = bureaucrat_2;

	cout << bureaucrat_1 << endl;
	cout << bureaucrat_2 << endl;
	cout << bureaucrat_3 << endl;

	cout << CYAN + "UP AND DOWN METHODS CALL" + RESET << endl;
	try {
		bureaucrat_1.gradeDown();
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}
	bureaucrat_2.gradeUp();
	cout << bureaucrat_1 << endl;
	cout << bureaucrat_2 << endl;

	Bureaucrat *bureaucrat = new Bureaucrat("Stan", 45);
	delete bureaucrat;
	return 0;
}
