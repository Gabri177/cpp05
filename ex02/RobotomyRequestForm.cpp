#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("unKnowTarget") {

}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target): AForm("RobotomyRequestForm", 72, 45), _target(target) {

}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj): AForm(obj), _target(obj.getTarget()){

}

RobotomyRequestForm &					RobotomyRequestForm::operator=(const RobotomyRequestForm & obj){

	if (this != &obj){

		this->_target = obj.getTarget();
	}
	return *this; 
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

const std::string &						RobotomyRequestForm::getTarget() const{

	return this->_target;
}

void									RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	if (!this->getIsSigned())
		throw AForm::ExceptionFormIsNotSigned();
	// std::cout << "Form: " << this->getName()
	//  		  << " has been executed by " << executor.getName()
	// 		  << std::endl;
	srand(static_cast<unsigned int>(time(0)));
	std::cout << "ROOOBOOOT... ";
    if (rand() % 2) {
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed on " << _target << "." << std::endl;
    }
}