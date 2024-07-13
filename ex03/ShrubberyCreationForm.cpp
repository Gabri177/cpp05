/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:51:35 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 09:51:36 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "fstream"


ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("unKnowTarget") {

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {

}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj): AForm(obj), _target(obj.getTarget()){

}

ShrubberyCreationForm &					ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj){

	if (this != &obj){

		this->_target = obj.getTarget();
	}
	return *this; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

const std::string &						ShrubberyCreationForm::getTarget() const{

	return this->_target;
}

void									ShrubberyCreationForm::drawTree() const{

	std::ofstream ofile((_target + "_shrubbery").c_str());
	if(!ofile.is_open()){

		std::cerr << "Err: Could not open file: " << _target + "_shrubbery" << std::endl;
		return ;
	}
	ofile << "       _-_\n";
	ofile << "    /~~   ~~\\\n";
	ofile << " /~~         ~~\\\n";
	ofile << "{               }\n";
	ofile << " \\  _-     -_  /\n";
	ofile << "   ~  \\\\ //  ~\n";
	ofile << "_- -   | | _- _\n";
	ofile << "  _ -  | |   -_\n";
	ofile << "      // \\\\\n";

	ofile.close();
}

void									ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	if (!this->getIsSigned())
		throw AForm::ExceptionFormIsNotSigned();
	// std::cout << "Form: " << this->getName()
	//  		  << " has been executed by " << executor.getName()
	// 		  << std::endl;
	this->drawTree();
}
