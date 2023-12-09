# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 14:07:13 by aaoutem-          #+#    #+#              #
#    Updated: 2023/12/09 00:59:31 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ #-Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp  Cat.cpp  Dog.cpp main.cpp

build : $(SRC)  Animal.hpp  Cat.hpp  Dog.hpp 
	$(Compile) $(SRC) -o zoo
	
clean : 
	rm zoo