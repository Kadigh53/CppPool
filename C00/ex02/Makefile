# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 05:04:21 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/24 06:34:03 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

compile = c++ -Wall -Werror -Wextra -std=c++98

SRC = tests.cpp Account.cpp

build : $(SRC) Account.hpp
	$(compile) $(SRC) -o Account 

clean : 
	rm Account
