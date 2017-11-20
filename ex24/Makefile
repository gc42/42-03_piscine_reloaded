# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 17:54:08 by gcaron            #+#    #+#              #
#    Updated: 2017/11/16 17:54:20 by gcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

DIR_SRC		=	./srcs/

DIR_INCL	=	./includes/

SRC			=	$(DIR_SRC)ft_putchar.c \
				$(DIR_SRC)ft_putstr.c \
				$(DIR_SRC)ft_strcmp.c \
				$(DIR_SRC)ft_strlen.c \
				$(DIR_SRC)ft_swap.c

#OBJ			=	$(SRC:.c=.o)
OBJ			=	ft_putchar.o \
				ft_putstr.o \
				ft_strcmp.o \
				ft_strlen.o \
				ft_swap.o

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra 	##-Wstrict

INCLUDES	=	-I $(DIR_INCL)

## LIB		=	-L. -lft

RM			=	rm -f

all:
			@make $(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)			## creation de la lib
			ranlib $(NAME)					## creation de l'index de la libft

$(OBJ):		$(SRC)						## verif fichiers .c tous dispo
			$(CC) $(CFLAGS) -c $(SRC) $(INCLUDES)	## pre-compil des .o


.PHONY: clean fclean					## les dependances de la cible .PHONY
										## sont systematiquement reconstruites

clean:
			$(RM) $(OBJ)				## supprime les fichiers .o
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)				## supprime l'executable (ici libft.a)

re:			fclean all
