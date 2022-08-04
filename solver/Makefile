##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiling libmy.a
##

CC = gcc

SRC = $(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

SRC_TEST = $(wildcard src/*.c) \
		   $(wildcard lib/my/*.c)

OBJ_TEST = $(SRC_TEST:.c=.o)

CFLAGS = -I./include -W -Werror -Wall -Wextra -O3 -g3

LIBFLAG = -L./lib/my -lmy

NAME = solver

all: $(NAME)

tests_run: libmy.a $(OBJ_TEST)
	gcc -o unit_tests $(OBJ_TEST) $(LDFLAGS) --coverage -lcriterion
	./unit_tests

$(NAME): libmy.a $(OBJ)
		gcc -o $(NAME) $(CFLAGS) ./main.c $(OBJ) $(LIBFLAG)

libmy.a:
	make -C ./lib/my/

re: fclean all

clean:
	rm -f *.o ./src/*.o ./tests/*.o
	make -C ./lib/my/ fclean

fclean: clean
	rm -f ./$(NAME) $(NAME)
	make -C ./lib/my/ fclean

fclean_test: clean
	rm -f unit_tests $(OBJ_TEST)
