# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 21:20:00 by aaoutem-          #+#    #+#              #
#    Updated: 2024/02/01 21:20:35 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Bureaucrat.cpp Form.cpp

build : $(SRC) Bureaucrat.hpp Form.hpp
	$(Compile) $(SRC) -o Bureaucrat
	
clean :
	rm Bureaucrat