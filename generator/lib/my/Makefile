##
## EPITECH PROJECT, 2021
## my_printf
## File description:
## Makefile for my_printf lib
##

CC = gcc

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

LIBMY = libmy.a

CFLAGS = -W -Wall -Werror -Wextra -g3 -g

all: libmy.a

libmy.a : $(OBJ)
	ar rc $(LIBMY) $(OBJ)

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBMY)
