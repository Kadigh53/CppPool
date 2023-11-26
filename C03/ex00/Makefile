# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 09:22:48 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/26 11:12:42 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp main.cpp

build : $(SRC) ClapTrap.hpp
	$(Compile) $(SRC) -o ClapTrap

clean : 
	rm ClapTrap