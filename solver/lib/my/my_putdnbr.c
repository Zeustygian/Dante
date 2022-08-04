/*
** EPITECH PROJECT, 2021
** my_dprintf
** File description:
** task07
*/

#include <unistd.h>
#include "../../include/my_printf.h"

int my_put_dnbr(int fd, int nb)
{
    int stock = 0;
    int div = 1;
    char minus = '-';
    char num_stock = 0;

    if (nb < 0) {
        write(fd, &minus, 1);
        nb = nb * -1;
    }
    div = find_div(nb, div);
    while (div != 0) {
        stock = nb / div;
        num_stock = stock + 48;
        write(fd, &num_stock, 1);
        nb = nb % div;
        div = div / 10;
    }
    return my_num_len(nb);
}
