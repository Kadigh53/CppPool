/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:35:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/01/31 22:49:10 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>

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
	Form(const Form& other);
	Form& operator=(const Form& other);

	
	~Form();
};
#endif