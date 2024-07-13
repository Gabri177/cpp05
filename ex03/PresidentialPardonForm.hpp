/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:51:28 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 09:51:29 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_PRESIDENT_HPP
# define HEAD_PRESIDENT_HPP
# include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	private:
		std::string								_target;
		
	public:
												PresidentialPardonForm();
												PresidentialPardonForm(const std::string & target);
												PresidentialPardonForm(const PresidentialPardonForm & obj);
		PresidentialPardonForm &					operator=(const PresidentialPardonForm & obj);
												~PresidentialPardonForm();
		const std::string &						getTarget() const;
		void									execute(Bureaucrat const & executor) const;
};
#endif