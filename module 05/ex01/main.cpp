#include "Form.hpp"

int main() {
	Form* form = new Form("Blank", 50, 50);
	Bureaucrat* bureaucrat_1 = new Bureaucrat("Ken", 40);
	Bureaucrat* bureaucrat_2 = new Bureaucrat("Rob", 60);

	try {
		form->beSigned(*bureaucrat_1);
		form->beSigned(*bureaucrat_2);
	} catch (std::exception &exception) {
		cout << exception.what() << endl;
	}

	delete form, delete bureaucrat_1, delete bureaucrat_2;
	return 0;
}
