/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:51:18 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 11:21:14 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"



Intern::Intern(){

	formNames[0] = "presidential request";
	formNames[1] = "robotomy request";
	formNames[2] = "shrubberyCreation request";
}

Intern::Intern(const Intern & obj){

	*this = obj;
}

Intern &					Intern::operator=(const Intern & obj){

	(void) obj;
	return *this;
}

Intern::~Intern(){}

AForm *						Intern::makeForm(const std::string & name, const std::string & target){

	AForm*	nuevo = 0;
	int		i = -1;
	
	for (int j = 0; j < 3; j ++){
		if (name == formNames[j])
			i = j;
	}

	switch (i)
	{
		case 0:
			try {nuevo = new PresidentialPardonForm(target); return nuevo;}
			catch (const std::bad_alloc & e) {std::cerr << "Could not creat the form " << name << std::endl; return 0;}
			break;
		case 1:
			try {nuevo = new RobotomyRequestForm(target); return nuevo;}
			catch (const std::bad_alloc & e) {std::cerr << "Could not creat the form " << name << std::endl; return 0;}
			break;
		case 2:
			try {nuevo = new ShrubberyCreationForm(target); return nuevo;}
			catch (const std::bad_alloc & e) {std::cerr << "Could not creat the form " << name << std::endl; return 0;}
			break;
		case -1:
			std::cerr << "No exist the form which you wanna create!" << std::endl;
			return 0;
			break ;
		default:
			return 0;
			break;
	}
}


