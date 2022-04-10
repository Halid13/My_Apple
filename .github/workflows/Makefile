##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile that compiles my libmy.
##

SRC	 =	my_putchar.c	\
		my_putstr.c	\
		101pong.c	\
		main.c	\
		USAGE.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lm

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
