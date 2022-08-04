/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** task07
*/

#include <unistd.h>
#include "../../include/my_printf.h"

int my_num_len(int nb)
{
    int i = 0;

    for (; nb != 0; i++)
        nb /= 10;
    return i;
}

int find_div(int nb , int div)
{
    while (nb / div > 9) {
        div = div * 10;
    }
    return div;
}

int my_put_nbr(int nb)
{
    int stock = 0;
    int div = 1;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    div = find_div(nb, div);
    while (div != 0) {
        stock = nb / div;
        my_putchar(stock + 48);
        nb = nb % div;
        div = div / 10;
    }
    return my_num_len(nb);
}
