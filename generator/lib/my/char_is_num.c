/*
** EPITECH PROJECT, 2022
** lib
** File description:
** check if char is a digit
*/

#include <stdbool.h>

bool char_isnum(char c)
{
    if (c < '0' || c > '9')
        return false;
    return true;
}
