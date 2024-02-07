/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:51:30 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/06 22:38:15 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
protected :
	const int RequiredSign;
	const int RequiredExec;
public :
	AForm();
	AForm(int toSign, int toExec);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);

	virtual void execute(Bureaucrat const & executor) const = 0;

	~AForm();
};

#endif