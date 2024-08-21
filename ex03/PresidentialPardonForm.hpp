#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardomForm : public AForm
{
	private	:
		/* Orthodox Canonical Form(private part) */
		PresidentialPardomForm	&operator=(const PresidentialPardomForm &rhv);
	public	:
		/* Orthodox Canonical Form(public part) */
		PresidentialPardomForm();
		PresidentialPardomForm(const PresidentialPardomForm &cp) \
			throw(GradeTooHighException, GradeTooLowException);
		~PresidentialPardomForm();
		/* Constructor */
		PresidentialPardomForm(const string &target);
		/* virtual function overriding */
		virtual void	execute(Bureaucrat const &executor) throw(GradeTooLowException);
};

#endif
