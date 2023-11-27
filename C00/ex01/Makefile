# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 20:19:05 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/27 16:00:20 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

SRC = Phonebook.cpp main.cpp

build :  $(SRC) Phonebook.hpp 
	$(Compile) $(SRC) -o PhoneBook 

clean :
	rm  PhoneBook
