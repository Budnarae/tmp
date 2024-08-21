#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm	a("42_Seoul");
	RobotomyRequestForm		b("42_Seoul");
	PresidentialPardomForm	c("42_Seoul");

	Bureaucrat				pb("PolarBear", 150);

	try
	{
		a.execute(pb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b.execute(pb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		c.execute(pb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat				t("Tang", 1);

	a.execute(t);
	b.execute(t);
	c.execute(t);

	return (0);
}