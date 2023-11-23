# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 14:18:39 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/22 14:37:19 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp

all : $(SRC) Fixed.hpp
	$(Compile) $(SRC) -o exec

# OBJ = $(SRC:.c=.o)

# $(exec) : $(OBJ)
# 	$(Compile) $(OBJ) -o $@

# %.o : %.c Fixed.hpp
# 	$(Compile) $<
