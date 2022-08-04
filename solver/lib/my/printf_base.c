/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** display number in base
*/

#include <stdlib.h>
#include "../../include/my_printf.h"

int find_base_len(unsigned int nb, char *base)
{
    int i = 0;
    int len_base = my_strlen(base);

    for (; nb != 0; i++) {
        nb /= len_base;
    }
    return i;
}

int my_put_nbr_base(unsigned int nb, char *base)
{
    int res = 0;
    int i = 0;
    int len = my_strlen(base);
    int len_num_in_base = find_base_len(nb, base);
    char *stock_res = malloc(sizeof(char) * len_num_in_base + 1);

    for (; nb != 0; i++) {
        res = nb % len;
        nb = nb / len;
        stock_res[i] = base[res];
    }
    stock_res[i] = '\0';
    my_revstr(stock_res);
    my_putstr(stock_res);
    free(stock_res);
    return len_num_in_base;
}

int my_put_octal(char c)
{
    int ret = 0;

    ret += my_putchar(92);
    if (c == 0)
        ret += my_putstr("000");
    else if (c < 10)
        ret += my_putstr("00");
    else
        ret += my_putchar('0');
    ret += my_put_nbr_base(c, "01234567");
    return ret;
}

int my_put_flag_s(char *str)
{
    int ret = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32)
            ret += my_put_octal(str[i]);
        else
            ret += my_putchar(str[i]);
    }
    return ret;
}
