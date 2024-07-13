/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:48:53 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 10:51:30 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	Bureaucrat obj("test", 160);

	try{
		obj.downGrade();
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << obj << std::endl;
	

	return 0;
}