# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 22:16:01 by aaoutem-          #+#    #+#              #
#    Updated: 2024/03/09 06:46:46 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = ScalarConverter.cpp main.cpp
HDR = ScalarConverter.hpp

build : $(SRC) $(HDR)
	$(compile) $(SRC) -o convert 

clean : 
	rm convert

