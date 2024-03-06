/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:35:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 01:23:08 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;

class Form
{
private :
	const std::string	name;
	const int			RequiredSignGrade;
	const int			RequiredExecGrade;
	bool 				signd;

	class GradeTooHighException : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};

public :
	Form();
	Form( std::string nm, int signGrd, int execGrd);
	Form(const Form& other);
	Form& operator=(const Form& other);

	const std::string getName( void );
	bool getSignature( void );
	int getSingGrade( void );
	int getExecGrade( void );

	void beSigned(Bureaucrat& Modir);

	~Form();
};
#endif