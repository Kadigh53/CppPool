# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 20:19:05 by aaoutem-          #+#    #+#              #
#    Updated: 2023/10/17 15:46:33 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

compile = c++ -Wall -Wextra -Werror 

STD_V = -std=c++98

all : $(phonebook)

$(NAME) : phonebook.cpp 
	$(compile) $(STD_V) phonebook.cpp -o $(NAME)

clean :
	rm -rf $(NAME)
