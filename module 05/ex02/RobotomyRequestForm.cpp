#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const string &target)
: Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj) {
	this->target = obj.target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	cout << "* Makes some drilling noises *" << endl;
	if ((rand() % 100) > 50)
		cout << target + " has been robotomized successfully" << endl;
	else
		cout << "something went wrong..." << endl;

}

const string &RobotomyRequestForm::getTarget() const {
	return target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other) {
	target = other.getTarget();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &other) {
	return out << "form <" + other.getName() + ">";
}
