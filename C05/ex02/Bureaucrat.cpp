/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:52:38 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/06 08:04:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
     : name("Anonym"), grade(150)
{}
Bureaucrat::Bureaucrat(std::string name_, int grd)
    : name(name_), grade(grd)
{}
Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : name(other.name), grade(other.grade)
{}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->grade = other.getGrade();
	}
	return (*this);
}
const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return "Too high grade";
}
const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return "Too Low Grade";
}
std::string Bureaucrat::getName( void ) const
{
	return (this->name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->grade);
}

void Bureaucrat::GradeIncrement( int grd )
{
	if ((this->grade - grd) < 1)
		throw GradeTooHighException();
	else
		this->grade -= grd;
}
void Bureaucrat::GradeDecrement( int grd )
{
	if ((this->grade + grd ) > 150)
		throw GradeTooLowException();
	else
		this->grade += grd;
}

void Bureaucrat::signForm( AForm *form )
{
    try
    {
        form->beSigned(*this);
        std::cout << "form got Signed\n";
    }
    catch (std::exception& e)
    {
        std::cout << "the form couldnt be signed " << e.what() << std::endl;
    }
}
void Bureaucrat::executeForm(AForm const & form)
{
	try
    {
        form.execute(*this);
        std::cout << this->getName() << " execute " << form.GetName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
Bureaucrat::~Bureaucrat()
{}