# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 20:19:05 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/23 15:13:57 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++ -Wall -Wextra -Werror -std=c++98 -g

SRC = phonebook.cpp main.cpp

build :  $(SRC) phonebook.hpp 
	$(C++) $(SRC) -o PhoneBook 

clean :
	rm  PhoneBook
