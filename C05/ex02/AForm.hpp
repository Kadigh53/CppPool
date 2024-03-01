/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:51:30 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/08 10:53:51 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
protected :
	const std::string	name;
	const int			RequiredSign;
	const int			RequiredExec;
	bool				signd;
	
	class GradeTooHighException : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};
public :
	AForm();
	AForm(std::string nm_, int toSign, int toExec);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);

	std::string GetName( void ) const;
	int GetRequiredSign( void ) const;
	int GetRequiredExec( void ) const;
	
	virtual void execute(Bureaucrat const & executor) const = 0;

	void beSigned(Bureaucrat& Modir);
	~AForm();
};

#endif