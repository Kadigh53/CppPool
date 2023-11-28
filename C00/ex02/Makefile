# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 05:04:21 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/28 12:14:09 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

compile = c++ -Wall -Werror -Wextra -std=c++98

SRC = tests.cpp Account.cpp

build : $(SRC) Account.hpp
	$(compile) $(SRC) -o exec 

clean : 
	rm exec
