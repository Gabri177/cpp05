/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:49:09 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 11:49:37 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	try{
		Bureaucrat obj("test", 5);
		Form	f1("form1", 5, 6);
		Form	f2("form2", 5, 6);

		// std::cout << f1;
		std::cout << obj;
		obj.signForm(f1);
		obj.downGrade();
		std::cout << obj;
		obj.signForm(f2);
		// std::cout << f1;
	}catch(std::exception & e){
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

