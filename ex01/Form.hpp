#ifndef HEAD_FOR_HPP
# define HEAD_FOR_HPP
# include <iostream>
# include <string>


class Form {

	private:
		std::string					_name;
		bool						_isSigned;
		int							_gradeSign;
		int							_gradeExec;
	
	public:
									Form();
									Form(const Form & obj);
		Form &						operator=(const Form & obj);
									~Form();
		const std::string &			getName() const;
		const bool &				getIsSigned() const;
		const int &					getGradeSign() const;
		const int &					getGradeExec() const;

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

std::ostream						operator<<(std::ostream & os, const Form & obj);

#endif