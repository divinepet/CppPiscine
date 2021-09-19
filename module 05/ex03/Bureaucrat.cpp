#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) {}

Bureaucrat::Bureaucrat(const string &name, unsigned int grade) : name(name), grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

string Bureaucrat::signForm(bool answer, string name) const {
	if (answer)
		return "<" + this->name + "> signs <" + name + ">";
	else
		return "<" + this->name + "> cant sign <" + name + "> because ";
}

void Bureaucrat::executeForm(const Form &form) {
	if (form.getSign()) {
		cout << "<" + name + "> executes <" + form.getName() + ">" << endl;
		form.execute(*this);
	}
	else if (grade > form.getGradeToExecute())
		cout << "grade is too low for execute this form!" << endl;
}

const string &Bureaucrat::getName() const { return name; }

unsigned int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::gradeUp() { (grade - 1 < 1) ? throw GradeTooHighException() : grade--; }

void Bureaucrat::gradeDown() { (grade + 1 > 150) ? throw GradeTooLowException() : grade++; }

const char* Bureaucrat::GradeTooHighException::what() const throw() { return "Error: Grade too high"; }

const char* Bureaucrat::GradeTooLowException::what() const throw() { return "Error: Grade too low"; }

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
	name = other.name;
	grade = other.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	return out << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">";
}