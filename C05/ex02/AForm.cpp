/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:47:57 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/02/06 05:27:30 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
{}
AForm::AForm(int toSign, int toExec) :RequiredSign(toSign), RequiredExec(toExec)
{}
AForm::AForm(const AForm& other)
{}
AForm& AForm::operator=(const AForm& other)
{}
AForm::~AForm()
{}