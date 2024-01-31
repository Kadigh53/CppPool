# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 11:40:49 by aaoutem-          #+#    #+#              #
#    Updated: 2024/01/31 13:45:49 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Bureaucrat.cpp

build : $(SRC) Bureaucrat.hpp
	$(Compile) $(SRC) -o Bureaucrat
	
clean :
	rm Bureaucrat