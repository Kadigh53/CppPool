# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 08:31:04 by aaoutem-          #+#    #+#              #
#    Updated: 2024/03/13 08:34:45 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = A.cpp B.cpp Base.cpp C.cpp main.cpp
HDR = A.hpp B.hpp Base.hpp C.hpp

build : $(SRC) $(HDR)
	$(compile) $(SRC) -o Serializer

clean : 
	rm Serializer