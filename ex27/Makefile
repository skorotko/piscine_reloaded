# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorotko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 12:43:47 by skorotko          #+#    #+#              #
#    Updated: 2017/11/06 12:43:59 by skorotko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAFS = -Wall -Werror -Wextra
SRC = ./srcs/*.c
HD = ./includes/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HD) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
