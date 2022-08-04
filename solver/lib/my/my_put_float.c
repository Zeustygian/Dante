/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** print a float
*/

#include "../../include/my_printf.h"

int my_put_float(float f)
{
    int nb = f;
    int n = 10;

    my_put_nbr(nb);
    my_putchar('.');
    f = f - nb;
    for (; f * n < 1 ;n *= 10)
        my_put_nbr(0);
    f *= 1000000;
    my_put_nbr(f);
    return nb;
}
