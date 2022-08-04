/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** my_atoi
*/

#include "../../include/my_printf.h"

int my_atoi(char *str)
{
    int num = 0;
    int mul = 1;
    int sign = 1;

    if (str[0] == '-') {
        str += 1;
        sign = -1;
    }
    str = my_revstr(str);
    for (int i = 0; str[i] != '\0'; i++) {
        num += (str[i] - 48) * mul;
        mul *= 10;
    }
    return num * sign;
}
