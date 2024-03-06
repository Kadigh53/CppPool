/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:51:30 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 05:44:05 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
class Bureaucrat;

class AForm
{
protected :
	const std::string	name;
	const int			RequiredSignPoints;
	const int			RequiredExecPoints;
	bool				signd;

	class GradeTooHighException : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};
	class NotSignedForm : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};

public :
	AForm();
	AForm(std::string nm_, int toSign, int toExec);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);

	std::string	GetName( void ) const;
	int			GetRequiredSignPoints( void ) const;
	int			GetRequiredExecPoints( void ) const;
	bool		GetSignature() const;

	virtual void execute( const Bureaucrat& executor ) const = 0;

	void beSigned(Bureaucrat& Modir);

	void	CheckRequirements(Bureaucrat const & executor) const;
	~AForm();
};

#endif