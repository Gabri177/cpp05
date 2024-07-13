/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:48:50 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 09:48:51 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_BUR_HPP
# define HEAD_BUR_HPP
# include <string>
# include <iostream>

class Bureaucrat {

    private:
        const std::string               _name;
        int                             _grade;
    
    public:
                                        Bureaucrat();
                                        Bureaucrat(const std::string & name, const int & grade);
                                        Bureaucrat(const Bureaucrat& obj);
                                        ~Bureaucrat();
        Bureaucrat  &                   operator=(const Bureaucrat& obj);
        const std::string &             getName() const;
        int                             getGrade() const;
        void                            upGrade();
        void                            downGrade();


        class GradeTooHighException : public std::exception {

            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {

            public:
                const char* what() const throw();
        };
};

std::ostream &                          operator<<(std::ostream & os, const Bureaucrat & obj);
#endif