/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:50:59 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 09:51:00 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_ROBO_HPP
# define HEAD_ROBO_HPP
# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

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