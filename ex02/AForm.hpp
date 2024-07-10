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

		class GradeTooHighException : public std::exception {

            public:
                const char* what() const throw() {
                    return "Grade is too high!";
                }
        };

        class GradeTooLowException : public std::exception {

            public:
                const char* what() const throw() {
                    return "Grade is too low!";
                }
        };

};

std::ostream &						operator<<(std::ostream & os, const AForm & obj);

#endif