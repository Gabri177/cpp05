/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:49:07 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 11:41:01 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_FOR_HPP
# define HEAD_FOR_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form {

	private:
		std::string					_name;
		bool						_isSigned;
		int							_gradeSign;
		int							_gradeExec;
	
	public:
									Form();
									Form(const std::string & name, int gradeSign, int gradeExec);
									Form(const Form & obj);
		Form &						operator=(const Form & obj);
									~Form();
		const std::string &			getName() const;
		const bool &				getIsSigned() const;
		const int &					getGradeSign() const;
		const int &					getGradeExec() const;
		void						beSigned(const Bureaucrat & boss);

		class GradeTooHighException : public std::exception {

            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {

            public:
                const char* what() const throw();
        };


};

std::ostream &						operator<<(std::ostream & os, const Form & obj);

#endif