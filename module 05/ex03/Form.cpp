#include "Form.hpp"

Form::Form() {}

Form::~Form() {}

Form::Form(const string &name, unsigned int gradeToSign, unsigned int gradeToExecute) {
	this->name = name;
	this->sign = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else {
		this->gradeToSign = gradeToSign;
		this->gradeToExecute = gradeToExecute;
	}
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() < gradeToSign) {
		this->sign = true;
		cout << bureaucrat.signForm(sign, name) << endl;
	} else {
		this->sign = false;
		cout << bureaucrat.signForm(sign, name);
		throw GradeTooLowException();
	}
}

void Form::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > gradeToExecute)
		throw GradeTooLowException();
	else if (!sign)
		throw UnsignedFormException();
}

const string &Form::getName() const { return name; }

bool Form::getSign() const { return sign; }

unsigned int Form::getGradeToSign() const { return gradeToSign; }

unsigned int Form::getGradeToExecute() const { return gradeToExecute; }

Form &Form::operator=(Form const &other) {
	name = other.name;
	sign = other.sign;
	gradeToSign = other.gradeToSign;
	gradeToExecute = other.gradeToExecute;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &other) {
	return out << "Form<" + other.getName()
	<< ">, grades-to-sign(" << other.getGradeToSign()
	<< "), grades-to-execute(" << other.getGradeToExecute()
	<< "), status: " << other.getSign();
}

const char* Form::GradeTooHighException::what() const throw() { return "Error: Grade too high"; }

const char* Form::GradeTooLowException::what() const throw() { return "Error: Grade too low"; }

const char* Form::UnsignedFormException::what() const throw() { return "Error: Form has not been signed"; }

const char* Form::UnknownFormException::what() const throw() { return "Error: No such form exists"; }