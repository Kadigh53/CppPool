# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 07:41:21 by aaoutem-          #+#    #+#              #
#    Updated: 2024/03/24 07:41:52 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Compile = c++ -Wall -Wextra -Werror -std=c++98

NAME = PmergeMe
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