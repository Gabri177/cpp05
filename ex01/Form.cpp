# include "Form.hpp"

Form::Form(): _name("unKnow"), _isSigned(false), _gradeSign(150), _gradeExec(150){

}

Form::Form(const std::string & name, int gradeSign, int gradeExec): _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec){

}

Form::Form(const Form & obj){

	*this = obj;
}

Form &						Form::operator=(const Form & obj){

	if (this != &obj){

		this->_gradeExec = obj.getGradeExec();
		this->_gradeSign = obj.getGradeSign();
		this->_isSigned = obj.getIsSigned();
		this->_name = obj.getName();
	}

	return *this;
}

Form::~Form(){

}

const std::string &  			Form::getName() const {

	return this->_name;
}

const bool &				Form::getIsSigned() const {

	return this->_isSigned;
}

const int  &				Form::getGradeSign() const {

	return this->_gradeSign;
}

const int  &				Form::getGradeExec() const {

	return this->_gradeExec;
}

void						Form::beSigned(const Bureaucrat & boss){
	
	if (boss.getGrade() <= this->_gradeSign){

		this->_isSigned = true;
	}else{

		throw GradeTooLowException();
	}
	
}

std::ostream &						operator<<(std::ostream & os, const Form & obj) {

	os << obj.getName() << " , Form isSigned: " << obj.getIsSigned() << " , Form gradeSign: " << obj.getGradeSign()
	   << " , Form grade execute: " << obj.getGradeExec() << std::endl;
	
	return os;
}