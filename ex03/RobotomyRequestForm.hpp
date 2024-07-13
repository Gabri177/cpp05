/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:51:32 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 09:51:33 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_ROBO_HPP
# define HEAD_ROBO_HPP
# include "AForm.hpp"

class RobotomyRequestForm: public AForm {

	private:
		std::string								_target;
		
	public:
												RobotomyRequestForm();
												RobotomyRequestForm(const std::string & target);
												RobotomyRequestForm(const RobotomyRequestForm & obj);
		RobotomyRequestForm &					operator=(const RobotomyRequestForm & obj);
												~RobotomyRequestForm();
		const std::string &						getTarget() const;
		void									execute(Bureaucrat const & executor) const;
};
#endif