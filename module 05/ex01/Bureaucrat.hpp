#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Bureaucrat {
	Bureaucrat();
	string name;
	unsigned int grade;
public:
	Bureaucrat(const string &name, unsigned int grade);
	Bureaucrat(const Bureaucrat &obj);
	virtual ~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &other);

	const string &getName() const;
	unsigned int getGrade() const;
	void gradeUp();
	void gradeDown();
	string signForm(bool answer, string name);
	class GradeTooHighException: public std::exception { virtual const char* what() const throw(); };
	class GradeTooLowException: public std::exception { virtual const char* what() const throw(); };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);