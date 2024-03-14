# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 03:54:57 by aaoutem-          #+#    #+#              #
#    Updated: 2024/03/13 08:30:33 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = Data.cpp Serializer.cpp main.cpp
HDR = Data.hpp  Serializer.hpp

build : $(SRC) $(HDR)
	$(compile) $(SRC) -o Serializer

clean : 
	rm Serializer