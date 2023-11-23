# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 02:42:10 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/23 11:57:46 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Compile = c++ -Wall -Wextra -Werror -std=c++98 

SRC = Fixed.cpp main.cpp

build : $(SRC) Fixed.hpp
	$(Compile) $(SRC) -o Fixed

rm :
	rm Fixed
