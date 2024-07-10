#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
		Bureaucrat ts("test", 20);
		ShrubberyCreationForm A("11111111111111");
		RobotomyRequestForm B("2222222222222");
		PresidentialPardonForm C("333333333333");

		ts.signForm(A);
		ts.executeForm(A);

		std::cout << A << std::endl;
		
		ts.signForm(B);
		ts.executeForm(B);
		
		std::cout << B << std::endl;
		
		ts.signForm(C);
		ts.executeForm(C);
		
		std::cout << C << std::endl;

}
