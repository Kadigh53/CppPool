/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:35:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/01 21:21:22 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
private :
	const std::string name;
	bool signd;
	const int grade;
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
	Form( std::string nm, int grd);
	Form(const Form& other);
	Form& operator=(const Form& other);

	const std::string getName( void );
	bool getSign( void );
	int getGrade( void );
	
	void beSigned(Bureaucrat& Modir);

	~Form();
};
#endif