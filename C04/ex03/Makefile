# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 23:34:36 by aaoutem-          #+#    #+#              #
#    Updated: 2023/12/08 00:52:10 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98 

HDR = include/AMateria.hpp\
	include/Cure.hpp\
	include/IMateriaSource.hpp\
	include/MateriaSource.hpp\
	include/Character.hpp\
	include/ICharacter.hpp\
	include/Ice.hpp

SRC =  src/AMateria.cpp\
	src/Character.cpp\
	src/Cure.cpp src/Ice.cpp\
	src/MateriaSource.cpp\
	main.cpp

build : $(SRC) $(HDR)
	$(Compile) $(SRC) -o AMateria

clean : 
	rm AMateria