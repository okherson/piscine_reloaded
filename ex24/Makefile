# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okherson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/25 17:15:48 by okherson          #+#    #+#              #
#    Updated: 2018/10/29 18:27:37 by okherson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCF = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

HEADER = ./includes/*.h

OBJ = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

All: $(NAME)

$(NAME):
	gcc -c $(SRCF) -I $(HEADER)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)
