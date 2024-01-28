/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:40:41 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/01/28 15:16:15 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private :
	const std::string	name;
	int					grade;

public :
	Bureaucrat();
	Bureaucrat(std::string name_, int grd);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator++();
	Bureaucrat& operator++( int );
	Bureaucrat& operator--();
	Bureaucrat& operator--( int );
	Bureaucrat& operator=(const Bureaucrat& other);

	std::string getName( void );
	void		setName( std::string name_ );

	void		setGrade( int grd);
	int			getGrade( void );

	~Bureaucrat();
};
#endif