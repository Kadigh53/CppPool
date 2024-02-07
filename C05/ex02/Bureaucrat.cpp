/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:38 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/07 05:58:10 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}
Bureaucrat::Bureaucrat(std::string name_, int grd)
{}
Bureaucrat::Bureaucrat(const Bureaucrat& other)
{}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{}
std::string	Bureaucrat::getName( void ) const
{}
int	Bureaucrat::getGrade( void ) const
{}
void Bureaucrat::GradeIncrement( int grd )
{}
void Bureaucrat::GradeDecrement( int grd )
{}
void Bureaucrat::executeForm(AForm const & form)
{}
Bureaucrat::~Bureaucrat()
{}