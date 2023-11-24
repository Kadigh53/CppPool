# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 13:03:52 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/24 13:06:37 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp zombieHorde.cpp

build : $(SRC) Zombie.hpp
	$(Compile) $(SRC) -o ZombieHorde 
	
clean : 
	rm ZombieHorde