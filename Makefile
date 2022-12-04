##
## EPITECH PROJECT, 2022
## B-PSU-100-NCY-1-1-myls-eliott1.mathieu
## File description:
## Makefile
##

SRC 	= 	$(wildcard src/*.c lib/my/*.c)

OBJ 	= 	$(SRC:.c=.o)

NAME	= 	game

CFLAGS	=	-g

LIB		=	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lm

all: $(NAME)

$(NAME):	$(OBJ)
	gcc	$(CFLAGS)	-o	$(NAME)	$(OBJ) $(LIB)

clean:
	rm	-f	$(OBJ)

fclean:	clean
	rm	-f	$(NAME)

re:	fclean all
