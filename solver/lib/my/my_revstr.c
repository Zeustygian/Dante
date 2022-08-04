/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** task03
*/

#include "../../include/my_printf.h"

char *my_revstr(char *str)
{
    int i = 0;
    int length = my_strlen(str) - 1;
    char save_letter = ' ';

    while (str[i] != '\0' && i < length) {
        save_letter = str[length];
        str[length] = str[i];
        str[i] = save_letter;
        i = i + 1;
        length = length - 1;
    }
    return (str);
}
