#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("unKnow"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string & name, const int & grade): _name(name), _grade(grade) {};

Bureaucrat::Bureaucrat(const Bureaucrat& obj){
    *this = obj;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat  &                   Bureaucrat::operator=(const Bureaucrat& obj){

    if (this != &obj){

        _grade = obj.getGrade();
    }
    return *this;
}

const std::string &                   Bureaucrat::getName() const{

    return _name;
}

int                             Bureaucrat::getGrade() const{
    return _grade;
}

void                            Bureaucrat::upGrade(){

    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade --;
}

void                            Bureaucrat::downGrade(){

    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade ++;
}


const char*                     Bureaucrat::GradeTooHighException::what() const throw() {

    return "Grade is too high!";
}


const char*                     Bureaucrat::GradeTooLowException::what() const throw() {

    return "Grade is too low!";
}

void                            Bureaucrat::signForm(Form & obj) const{

    try {
        
        obj.beSigned(*this);
        std::cout << _name << " signed " << obj.getName() << std::endl;
    }catch (std::exception & e){

        std::cout << _name << " couldn't sign " << obj.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream&                   operator<<(std::ostream & os, const Bureaucrat & obj){

    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return os;
}   