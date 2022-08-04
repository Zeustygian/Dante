/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** displays a string
*/

#include <unistd.h>
#include "../../include/my_printf.h"

int my_putstr(char const *str)
{
    if (str == NULL)
        return write(1, "(null)", 6);
    return write(1, str, my_strlen(str));
}
