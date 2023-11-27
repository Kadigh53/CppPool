# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 09:10:38 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/26 21:11:29 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

build : $(SRC) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(Compile) $(SRC) -o FragTrap

clean : 
	rm FragTrap
