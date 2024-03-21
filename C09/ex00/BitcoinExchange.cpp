/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:18:40 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/21 11:58:26 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{}

DataBase& BitcoinExchange::getDb( void )
{
    return (this->Db);
}

BitcoinExchange::~BitcoinExchange()
{}
