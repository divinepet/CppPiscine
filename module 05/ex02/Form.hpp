#pragma once

#include <iostream>

class Form;
#include "Bureaucrat.hpp"
using std::string;
using std::cout;
using std::endl;

class Form {
	string name;
	bool sign;
	unsigned int gradeToSign;
	unsigned int gradeToExecute;
protected:
	Form();
public:
	Form(const string &name, unsigned int gradeToSign, unsigned int gradeToExecute);
	Form(const Form &obj);
	virtual ~Form();

	Form &operator=(Form const &other);

	const string &getName() const;
	bool getSign() const;
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExecute() const;
	virtual void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &executor) const = 0;
	class UnsignedFormException: public std::exception { virtual const char* what() const throw(); };
};

std::ostream &operator<<(std::ostream &out, Form const &other);
