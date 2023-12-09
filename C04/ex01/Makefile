# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 15:31:00 by aaoutem-          #+#    #+#              #
#    Updated: 2023/12/09 03:50:45 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -std=c++98 -Wall -Wextra -Werror

HDR = Animal.hpp Brain.hpp Cat.hpp Dog.hpp

SRC = Animal.cpp  Brain.cpp  Cat.cpp  Dog.cpp  main.cpp

build : $(SRC)
	$(Compile) $(SRC) -o zoo

clean : 
	rm zoo