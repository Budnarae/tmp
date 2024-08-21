#include "Intern.hpp"

/* Orthodox Canonical Form */
Intern::Intern() {}
Intern::Intern(const Intern &cp) {(void)cp;}
Intern::~Intern() {}
Intern	&Intern::operator=(const Intern &rhv) {(void)rhv; return (*this);};

/* public member function */
AForm	*Intern::makeForm(const string &form_name, const string &target)
{
	if (form_name == "shrubbery creation")
		return (new ShrubberyCreationForm(target));
	else if (form_name == "robotomy request")
		return (new RobotomyRequestForm(target));
	else if (form_name == "presidential pardon")
		return (new PresidentialPardomForm(target));
	else
	{
		cout << "There's no such form." << endl;
		return (0);
	}
}