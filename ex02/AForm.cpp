# include "AForm.hpp"

AForm::AForm(): _name("unKnow"), _isSigned(false), _gradeSign(150), _gradeExec(150){

}

AForm::AForm(const std::string & name, int gradeSign, int gradeExec): _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec){

}

AForm::AForm(const AForm & obj){

	*this = obj;
}

AForm &						AForm::operator=(const AForm & obj){

	if (this != &obj){

		this->_gradeExec = obj.getGradeExec();
		this->_gradeSign = obj.getGradeSign();
		this->_isSigned = obj.getIsSigned();
		this->_name = obj.getName();
	}

	return *this;
}

AForm::~AForm(){

}

const std::string &  			AForm::getName() const {

	return this->_name;
}

const bool &				AForm::getIsSigned() const {

	return this->_isSigned;
}

const int  &				AForm::getGradeSign() const {

	return this->_gradeSign;
}

const int  &				AForm::getGradeExec() const {

	return this->_gradeExec;
}

void						AForm::beSigned(const Bureaucrat & boss){
	
	if (boss.getGrade() <= this->_gradeSign){

		this->_isSigned = true;
	}else{

		throw GradeTooLowException();
	}
	
}

std::ostream &						operator<<(std::ostream & os, const AForm & obj) {

	os << obj.getName() << " , AForm isSigned: " << obj.getIsSigned() << " , AForm gradeSign: " << obj.getGradeSign()
	   << " , AForm grade execute: " << obj.getGradeExec() << std::endl;
	
	return os;
}