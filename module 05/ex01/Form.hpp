#pragma once

#include "Bureaucrat.hpp"

class Form {
	Form();
	string name;
	bool sign;
	unsigned int gradeToSign;
	unsigned int gradeToExecute;
public:
	Form(const string &name, unsigned int gradeToSign, unsigned int gradeToExecute);
	Form(const Form &obj);
	virtual ~Form();

	Form &operator=(Form const &other);

	const string &getName() const;
	bool getSign() const;
	void beSigned(Bureaucrat &bureaucrat);
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExecute() const;
};

std::ostream &operator<<(std::ostream &out, Form const &other);
