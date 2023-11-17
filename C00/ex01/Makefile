# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 20:19:05 by aaoutem-          #+#    #+#              #
#    Updated: 2023/11/09 15:33:38 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

C++ = c++ -Wall -Wextra -Werror 

STDL_V = -std=c++98

all : $(NAME)

$(NAME) : phonebook.cpp phonebook.hpp
	$(C++) $(STDL_V) phonebook.cpp -o $(NAME)

clean :
	rm -rf $(NAME)
