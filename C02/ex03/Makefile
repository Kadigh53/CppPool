# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 09:59:14 by aaoutem-          #+#    #+#              #
#    Updated: 2023/12/01 12:01:50 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Compile = c++ -Wall -Wextra -Werror -std=c++98 

SRC = Fixed.cpp Point.cpp bsp.cpp main.cpp

build : $(SRC) Fixed.hpp Point.hpp
	$(Compile) $(SRC) -o exec

clean :
	rm exec
