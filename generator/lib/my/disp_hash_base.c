/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** print the prefix
*/

#include <stdarg.h>
#include "../../include/my_printf.h"

int disp_hash_hex_upper(va_list *flag)
{
    int stock_ret = 0;
    unsigned int nb = va_arg(*flag, unsigned int);
    char *base = "0123456789ABCDEF";

    my_putstr("0X");
    stock_ret = my_put_nbr_base(nb, base);
    return stock_ret;
}

int disp_hash_hex_lower(va_list *flag)
{
    int stock_ret = 0;
    unsigned int nb = va_arg(*flag, unsigned int);
    char *base = "0123456789abcdef";

    my_putstr("0x");
    stock_ret = my_put_nbr_base(nb, base);
    return stock_ret;
}

int disp_hash_bin(va_list *flag)
{
    int stock_ret = 0;
    unsigned int nb = va_arg(*flag, unsigned int);
    char *base = "01";

    my_putstr("0b");
    stock_ret = my_put_nbr_base(nb, base);
    return stock_ret;
}

int disp_hash_oct(va_list *flag)
{
    int stock_ret = 0;
    unsigned int nb = va_arg(*flag, unsigned int);
    char *base = "01234567";

    my_putstr("0o");
    stock_ret = my_put_nbr_base(nb, base);
    return stock_ret;
}
