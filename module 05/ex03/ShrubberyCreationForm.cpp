#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) :
	Form("ShrubberyCreationForm", 145, 137), target(target) {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::ofstream file;

	file.open(target + "_shrubbery");
	file << "          .     .  .      +     .      .          .\n"
				   "     .       .      .     #       .           .\n"
				   "        .      .         ###            .      .      .\n"
				   "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
				   "          .      . \"####\"###\"####\"  .\n"
				   "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
				   "  .             \"#########\"#########\"        .        .\n"
				   "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
				   "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
				   "                .\"##\"#####\"#####\"##\"           .      .\n"
				   "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
				   "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
				   "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
				   "            .     \"      000      \"    .     .\n"
				   "       .         .   .   000     .        .       .\n"
				   ".. .. ..................O000O........................ ......\n";

}

const string &ShrubberyCreationForm::getTarget() const {
	return target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other) {
	target = other.getTarget();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &other) {
	return out << "form <" + other.getName() + ">";
}
