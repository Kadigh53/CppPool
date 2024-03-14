/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 00:39:38 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/07 02:25:34 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
class AForm;
class Intern 
{
public :
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);

    AForm* makeForm(std::string name,std::string target);

    class FormDoesntExist : public std::exception
    {
        const char *what() const _NOEXCEPT;
    };

    ~Intern();
};
#endif