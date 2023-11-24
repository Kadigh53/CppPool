# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 20:19:05 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/24 10:22:05 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = phonebook.cpp main.cpp

build :  $(SRC) phonebook.hpp 
	$(Compile) $(SRC) -o PhoneBook 

clean :
	rm  PhoneBook
