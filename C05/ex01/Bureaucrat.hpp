/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:40:41 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/01 20:52:40 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
private :
	class GradeTooHighException : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const _NOEXCEPT;
	};
	const std::string	name;
	int			grade;

public :
	Bureaucrat();
	Bureaucrat(std::string name_, int grd);
	Bureaucrat(const Bureaucrat& other);

	Bureaucrat& operator=(const Bureaucrat& other);

	std::string	getName( void ) const;
	int			getGrade( void ) const;

	void GradeIncrement( int grd );
	void GradeDecrement( int grd );

	void signForm( Form frm );
	~Bureaucrat();
};
#endif