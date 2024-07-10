#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
		Bureaucrat b("test", 20);
		ShrubberyCreationForm f1("11111111111111");
		RobotomyRequestForm f2("2222222222222");
		PresidentialPardonForm f3("333333333333");

		b.signForm(f1);
		b.executeForm(f1);

		std::cout << f1 << std::endl;
		
		b.signForm(f2);
		b.executeForm(f2);
		
		std::cout << f2 << std::endl;
		
		b.signForm(f3);
		b.executeForm(f3);
		
		std::cout << f3 << std::endl;

}
