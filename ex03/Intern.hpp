#ifndef HEAD_INTERN_HPP
# define HEAD_INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

	private:
		const std::string formNames[3];

	public:
									Intern();
									Intern(const Intern & obj);
		Intern &					operator=(const Intern & obj);
									~Intern();
		AForm *						makeForm(const std::string & name, const std::string & target);


};

#endif