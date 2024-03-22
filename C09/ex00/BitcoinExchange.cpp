/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:18:40 by aaoutem-          #+#    #+#             */
/*   Updated: 2024/03/22 11:28:24 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream ifs("./data.csv");

    // if (!ifs.is_open())
    //     throw error ;
    while (!ifs.eof())
    {
        char line[256];
        ifs.getline(line, 256);
        fillDb(line);
    }   
} 
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{}

void BitcoinExchange::fillDb(std::string line)//, std::ofstream& output)
{
    size_t pos = line.find_first_of(",");
    std::string date = line.substr(0, pos);
    std::string ExchangPrice = line.substr(pos + 1, line.length() - pos);
    if(!atoi(date.substr(0, 4).c_str()))
        return;
    // output.precision(15);
    // output << "[" << date << "] " << " [" << stod(ExchangPrice) << "]\n";
    this->Db.insert(std::pair<std::string, double>(date, stod(ExchangPrice)));
}

DBmap& BitcoinExchange::getDb( void )
{
    return (this->Db);
}

BitcoinExchange::~BitcoinExchange()
{}
