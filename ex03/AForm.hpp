#ifndef HEAD_FOR_HPP
# define HEAD_FOR_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class AForm {

	private:
		std::string					_name;
		bool						_isSigned;
		int							_gradeSign;
		int							_gradeExec;
	
	public:
									AForm();
									AForm(const std::string & name, int gradeSign, int gradeExec);
									AForm(const AForm & obj);
		AForm &						operator=(const AForm & obj);
		virtual						~AForm();
		const std::string &			getName() const;
		const bool &				getIsSigned() const;
		const int &					getGradeSign() const;
		const int &					getGradeExec() const;
		void						beSigned(const Bureaucrat & boss);
		virtual void				execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {

            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {

            public:
                const char* what() const throw();
        };

		class ExceptionFormIsNotSigned : public std::exception {

			public:
				const char * what() const throw();
		};

};

std::ostream &						operator<<(std::ostream & os, const AForm & obj);

#endif