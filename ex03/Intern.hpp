/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:51:21 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 11:14:16 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_INTERN_HPP
# define HEAD_INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

	private:
		std::string formNames[3];

	public:
									Intern();
									Intern(const Intern & obj);
		Intern &					operator=(const Intern & obj);
									~Intern();
		AForm *						makeForm(const std::string & name, const std::string & target);


};

#endif