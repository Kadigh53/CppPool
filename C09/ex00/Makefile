# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 08:10:10 by aaoutem-          #+#    #+#              #
#    Updated: 2024/11/20 17:38:33 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Compile = c++ -Wall -Wextra -Werror -std=c++98

NAME = btc
SRC = main.cpp BitcoinExchange.cpp
HDR = BitcoinExchange.hpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HDR)
	$(Compile) $(OBJS) -o $@

%.o : %.cpp $(HDR)
	$(Compile) -c $< -o $@

clean : 
	rm -f $(OBJS)

fclean : clean 
	rm -f $(NAME) 

re : fclean all