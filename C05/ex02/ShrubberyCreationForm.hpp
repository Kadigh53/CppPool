/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:58 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 05:26:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ShrubberyCreationForm: Required grades: sign 145, exec 137

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public :
	ShrubberyCreationForm();
	// ShrubberyCreationForm(const ShrubberyCreationForm& other);
	// ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

	void execute(Bureaucrat const & executor) const;

	~ShrubberyCreationForm();
};

#endif