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

    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade ++;
}

void                            Bureaucrat::downGrade(){

    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade --;
}

std::ostream&                   operator<<(std::ostream & os, const Bureaucrat & obj){

    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}   