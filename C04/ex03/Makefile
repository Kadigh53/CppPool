# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 23:34:36 by aaoutem-          #+#    #+#              #
#    Updated: 2023/12/11 05:51:01 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98 

HDR = AMateria.hpp\
	Cure.hpp\
	IMateriaSource.hpp\
	MateriaSource.hpp\
	Character.hpp\
	ICharacter.hpp\
	Ice.hpp

SRC =  AMateria.cpp\
	Character.cpp\
	Cure.cpp Ice.cpp\
	MateriaSource.cpp\
	main.cpp

build : $(SRC) $(HDR)
	$(Compile) $(SRC) -o AMateria

clean : 
	rm AMateria