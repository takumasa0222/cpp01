# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 00:43:14 by tamatsuu          #+#    #+#              #
#    Updated: 2025/05/03 22:56:50 by tamatsuu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CC = c++
INCLUDES = -I includes
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS    =   main.cpp \
			srcs/FileOperator.cpp \
			srcs/SedApp.cpp 
OBJS    = $(SRCS:.cpp=.o)
LIBDIR  = 
LIBS    = 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBDIR) $(LIBS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *.replace

re: fclean all

.PHONY: all clean fclean re 