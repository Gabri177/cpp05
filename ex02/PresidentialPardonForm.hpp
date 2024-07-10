#ifndef HEAD_PRESIDENT_HPP
# define HEAD_PRESIDENT_HPP
# include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	private:
		std::string								_target;
		
	public:
												PresidentialPardonForm();
												PresidentialPardonForm(const std::string & target);
												PresidentialPardonForm(const PresidentialPardonForm & obj);
		PresidentialPardonForm &					operator=(const PresidentialPardonForm & obj);
												~PresidentialPardonForm();
		const std::string &						getTarget() const;
		void									execute(Bureaucrat const & executor) const;
};
#endif