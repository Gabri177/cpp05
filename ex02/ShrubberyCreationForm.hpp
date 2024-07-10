#ifndef HEAD_SHRUBBERY_HPP
# define HEAD_SHRUBBERY_HPP
# include "AForm.hpp"


class ShrubberyCreationForm: public AForm {

	private:
		std::string								_target;
		
	public:
												ShrubberyCreationForm();
												ShrubberyCreationForm(const std::string & target);
												ShrubberyCreationForm(const ShrubberyCreationForm & obj);
		ShrubberyCreationForm &					operator=(const ShrubberyCreationForm & obj);
												~ShrubberyCreationForm();
		const std::string &						getTarget() const;
		void									drawTree() const;
		void									execute(Bureaucrat const & executor) const;
};


#endif
