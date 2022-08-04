/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_put_unsigned_int
*/

#include "../../include/my_printf.h"
#include <unistd.h>

int my_put_dunsigned_int(int fd, unsigned int nb)
{
    int div = 1;
    int stock;
    int ret = 0;
    char num_stock = 0;

    while (div != 0) {
        div = find_div(nb, div);
        stock = nb / div;
        num_stock = stock + 48;
        ret += write(fd, &num_stock, 1);
        nb = nb % div;
        div = div / 10;
    }
    return ret;
}
