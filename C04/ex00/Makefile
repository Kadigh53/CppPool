# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 14:07:13 by aaoutem-          #+#    #+#              #
#    Updated: 2023/12/11 16:18:02 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

HDR = WrongAnimal.hpp WrongCat.hpp\
	Animal.hpp  Cat.hpp  Dog.hpp

SRC = Animal.cpp  Cat.cpp  Dog.cpp main.cpp\
	WrongAnimal.cpp WrongCat.cpp

build : $(SRC)  
	$(Compile) $(SRC) -o zoo
	
clean : 
	rm zoo