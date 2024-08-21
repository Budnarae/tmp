#include "PresidentialPardonForm.hpp"

/* Orthodox Canonical Form(private part) */
PresidentialPardomForm	&PresidentialPardomForm::operator=(const PresidentialPardomForm &rhv)
{
	(void)rhv;
	return (*this);
}

/* Orthodox Canonical Form(public part) */
PresidentialPardomForm::PresidentialPardomForm() : AForm() {}
PresidentialPardomForm::PresidentialPardomForm(const PresidentialPardomForm &cp) \
	throw (GradeTooHighException, GradeTooLowException): AForm(cp) {}
PresidentialPardomForm::~PresidentialPardomForm() {};

/* Constructor */
PresidentialPardomForm::PresidentialPardomForm(const string &target) \
	: AForm("PresidentialPardomForm", target, 25, 5) {}

/* virtual function overriding */
void	PresidentialPardomForm::execute(Bureaucrat const &executor) throw(GradeTooLowException)
{
	if (executor.executeForm(getGradeToExecute(), getName()) == false)
		throw GradeTooLowException();

	cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << endl;
}
