#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern & obj){

	*this = obj;
}

Intern &					Intern::operator=(const Intern & obj){

	(void) obj;
	return *this;
}

Intern::~Intern(){}

AForm *						Intern::makeForm(const std::string & name, const std::string & target){

	AForm*	nuevo = 0;

	if (name == "presidential request"){

		try {nuevo = new PresidentialPardonForm(target);}
		catch (const std::bad_alloc & e) {std::cerr << "Could not creat the form " << name << std::endl;}
	}
	else if (name == "robotomy request"){

		try {nuevo = new RobotomyRequestForm(target);}
		catch (const std::bad_alloc & e) {std::cerr << "Could not creat the form " << name << std::endl;}
	}
	else if (name == "shrubberyCreation request"){

		try {nuevo = new ShrubberyCreationForm(target);}
		catch (const std::bad_alloc & e) {std::cerr << "Could not creat the form " << name << std::endl;}
	}

	if (nuevo != 0)
		return nuevo;
	else{
		std::cerr << "No exist thr form which you wanna create!" << std::endl;
		return 0;
	}
}

