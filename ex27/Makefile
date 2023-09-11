# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:24:55 by amunoz-b          #+#    #+#              #
#    Updated: 2023/09/11 14:27:52 by amunoz-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c

OBJ = $(SRC .c=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean: 
	rm -f main.o

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
