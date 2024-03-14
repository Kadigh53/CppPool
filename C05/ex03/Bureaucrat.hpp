/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:34 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/09 00:03:58 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <unistd.h>

class AForm;

class Bureaucrat
{
private :
	const std::string	name;
	int			grade;

public :
	Bureaucrat();
	Bureaucrat(std::string name_, int grd);
	Bureaucrat(const Bureaucrat& other);

	class GradeTooHighException : public std::exception
	{
	public :
		const char* what() const _NOEXCEPT;
	};
	class GradeTooLowException : public std::exception
	{
	public :
		const char* what() const _NOEXCEPT;
	};

	Bureaucrat& operator=(const Bureaucrat& other);

	std::string	getName( void ) const;
	int			getGrade( void ) const;

	void GradeIncrement( int grd );
	void GradeDecrement( int grd );

	void signForm( AForm *form );
	void executeForm(AForm const &form);

	~Bureaucrat();
};

#endif