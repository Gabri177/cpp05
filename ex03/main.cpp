#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
		Intern jajaja;
		Bureaucrat ts("test", 20);
		AForm* A = jajaja.makeForm("presidential request", "11111111111");
		AForm* B = jajaja.makeForm("robotomy request", "2222222222");
		AForm* C = jajaja.makeForm("shrubberyCreation request", "3333333333333");

		ts.signForm(*A);
		ts.executeForm(*A);

		std::cout << *A << std::endl;
		
		ts.signForm(*B);
		ts.executeForm(*B);
		
		std::cout << *B << std::endl;
		
		ts.signForm(*C);
		ts.executeForm(*C);
		
		std::cout << *C << std::endl;

}
