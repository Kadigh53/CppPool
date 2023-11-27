/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:10:34 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/11/27 08:19:27 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public :
	ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap& other );
	ScavTrap& operator=(const ScavTrap& other );
	~ScavTrap();

	void guardGate();
};


#endif