# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okherson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/28 16:28:15 by okherson          #+#    #+#              #
#    Updated: 2018/10/29 15:57:35 by okherson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./ft_display_file.c

OBJ = ./ft_display.o

ALL: $(NAME)

$(NAME):
	@gcc -o $(NAME) $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean ALL
