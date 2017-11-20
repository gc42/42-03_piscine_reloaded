# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 16:55:20 by gcaron            #+#    #+#              #
#    Updated: 2017/11/20 15:14:44 by gcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file

DIR_SCR		=	./

DIR_INCL	=	./

SRC			=	$(DIR_SRC)ft_display_file.c

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

INCLUDES	=	-I	$(DIR_INCL)

RM			=	rm -f


all:
			@make $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(INCLUDES)	## compil de l'exe

$(OBJ):		$(SRC)
			$(CC) $(CFLAGS) -c  $(SRC) $(INCLUDES)	## pre-compil des *.o


.PHONY:		clean fclean			## les dependances de .PHONY sont
									## systematiquement reconstruites.

clean:
			$(RM) $(OBJ)			## supprime les *.o a la racine

fclean:		clean
			$(RM) $(NAME)			## supprime en plus l'executable

re:			fclean all

