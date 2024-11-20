# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 07:41:21 by aaoutem-          #+#    #+#              #
#    Updated: 2024/11/20 17:46:07 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Compile = c++ -Wall -Wextra -Werror -std=c++98

NAME = PmergeMe
SRC = main.cpp PmergeMe.cpp
HDR = PmergeMe.hpp

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