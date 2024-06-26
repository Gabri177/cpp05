#ifndef HEAD_BUR_HPP
# define HEAD_BUR_HPP
# include <string>
# include <iostream>

class Bureaucrat {

    private:
        const std::string               _name;
        int                             _grade;
    
    public:
                                        Bureaucrat();
                                        Bureaucrat(const std::string & name, const int & grade);
                                        Bureaucrat(const Bureaucrat& obj);
                                        ~Bureaucrat();
        Bureaucrat  &                   operator=(const Bureaucrat& obj);
        const std::string &             getName() const;
        int                             getGrade() const;
        void                            upGrade();
        void                            downGrade();


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

std::ostream &                          operator<<(std::ostream & os, const Bureaucrat & obj);
#endif