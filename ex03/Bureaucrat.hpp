#ifndef HEAD_BUR_HPP
# define HEAD_BUR_HPP
# include <string>
# include <iostream>
# include "AForm.hpp"


class AForm;
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
        void                            signForm(AForm & obj) const;
        void                            executeForm(AForm const & form);


        class GradeTooHighException : public std::exception {

            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {

            public:
                const char* what() const throw();
        };
};

std::ostream &                          operator<<(std::ostream & os, const Bureaucrat & obj);
#endif