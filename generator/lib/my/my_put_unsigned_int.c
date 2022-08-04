/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_put_unsigned_int
*/

#include "../../include/my_printf.h"

int find_divisor(long long nb, int div)
{
    while (nb / div > 10) {
        div = div * 10;
    }
    return div;
}

int my_put_unsigned_int(unsigned int nb)
{
    int div = 1;
    int stock;
    int ret = 0;

    while (div != 0) {
        div = find_divisor(nb, div);
        stock = nb / div;
        ret += my_putchar(stock + 48);
        nb = nb % div;
        div = div / 10;
    }
    return ret;
}
