/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:50:51 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 09:50:52 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("unKnowTarget") {

}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target): AForm("PresidentialPardonForm", 25, 5), _target(target) {

}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj): AForm(obj), _target(obj.getTarget()){

}

PresidentialPardonForm &					PresidentialPardonForm::operator=(const PresidentialPardonForm & obj){

	if (this != &obj){

		this->_target = obj.getTarget();
	}
	return *this; 
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

const std::string &						PresidentialPardonForm::getTarget() const{

	return this->_target;
}


void									PresidentialPardonForm::execute(Bureaucrat const & executor) const{

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	if (!this->getIsSigned())
		throw AForm::ExceptionFormIsNotSigned();
	// std::cout << "Form: " << this->getName()
	//  		  << " has been executed by " << executor.getName()
	// 		  << std::endl;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
