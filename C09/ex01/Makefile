# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 06:36:38 by aaoutem-          #+#    #+#              #
#    Updated: 2024/11/20 17:44:16 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Compile = c++ -Wall -Wextra -Werror -std=c++98

NAME = RPN
SRC = main.cpp RPN.cpp
HDR = RPN.hpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HDR)
	$(Compile) $(OBJS) -o $@

%.o : %.cpp $(HDR)
	$(Compile) -c $< -o $@

clean : 
	rm $(OBJS)

fclean : clean 
	rm $(NAME)

re : fclean all