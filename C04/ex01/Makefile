# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 15:31:00 by aaoutem-          #+#    #+#              #
#    Updated: 2023/12/11 16:30:29 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -std=c++98 -Wall -Wextra -Werror

HDR = Animal.hpp Brain.hpp Cat.hpp Dog.hpp\
	WrongAnimal.hpp WrongCat.hpp

SRC = Animal.cpp  Brain.cpp  Cat.cpp  Dog.cpp  main.cpp\
	WrongAnimal.cpp WrongCat.cpp

build : $(SRC)
	$(Compile) $(SRC) -o zoo

clean : 
	rm zoo