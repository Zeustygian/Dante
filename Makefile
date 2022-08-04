##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiling libmy.a
##

CC = gcc

CFLAGS = -I./include -W -Werror -Wall -Wextra -g3

all:
	make -C ./generator
	make -C ./solver

re: fclean all

clean:
	make -C ./generator clean
	make -C ./solver clean

fclean: clean
	make -C ./generator fclean
	make -C ./solver fclean
