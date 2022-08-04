/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** evaluate length of strings
*/

#include <sys/types.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
    ssize_t i = 0;

    if (str == NULL)
        return -1;
    for (; str[i] != '\0'; i++);
    return i;
}
