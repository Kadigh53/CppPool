# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 10:59:52 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/28 11:00:48 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

SRC =  Harl.cpp main.cpp

build : $(SRC) Harl.hpp
	$(Compile) $(SRC) -o Harl

clean :
	rm Harl