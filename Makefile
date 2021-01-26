##
## EPITECH PROJECT, 2021
## bttfhunter
## File description:
## Makefile
##
SRC	=	src/main.c	\
		src/init.c	\

OBJ	=	$(SRC)

NAME	=	my_game

all:		$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) -I./include -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
		rm $(NAME)

re:		clean all