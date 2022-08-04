/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** print a float
*/

#include "../../include/my_printf.h"
#include <unistd.h>

int my_put_dfloat(int fd, float f)
{
    int nb = f;
    int n = 10;
    char dot = '.';

    my_put_dnbr(fd, nb);
    write(fd, &dot, 1);
    f = f - nb;
    for (; f * n < 1; n *= 10)
        my_put_dnbr(fd, 0);
    f *= 1000000;
    my_put_dnbr(fd, f);
    return nb;
}
