#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Form {
	Form();
	string name;
	bool sign;
	unsigned int gradeToSign;
	unsigned int gradeToExecute;
public:
	Form(const string &name, unsigned int gradeToSign, unsigned int gradeToExecute);
	virtual ~Form();
	Form &operator=(Form const &other);
	const string &getName() const;
	bool getSign() const;
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExecute() const;
	void beSigned(Bureaucrat &bureaucrat);
	class GradeTooHighException: public std::exception { virtual const char* what() const throw(); };
	class GradeTooLowException: public std::exception { virtual const char* what() const throw(); };
};

std::ostream &operator<<(std::ostream &out, Form const &other);
