# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 10:46:11 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/28 11:07:25 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

SRC =  HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

HDR = HumanA.hpp HumanB.hpp Weapon.hpp

build : $(SRC) $(HDR)
	$(Compile) $(SRC) -o exec

clean :
	rm exec
