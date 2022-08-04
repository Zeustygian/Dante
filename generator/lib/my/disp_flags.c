/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** displays the flags
*/

#include "../../include/my_printf.h"

int disp_char(va_list *flag)
{
    char c = va_arg(*flag, int);

    return my_putchar(c);
}

int disp_str(va_list *flag)
{
    char *str = va_arg(*flag, char *);

    return my_putstr(str);
}

int disp_num(va_list *flag)
{
    int nb = va_arg(*flag, int);

    return my_put_nbr(nb);
}

int disp_unsigned_int(va_list *flag)
{
    long long nb = va_arg(*flag, long long);

    return my_put_unsigned_int(nb);
}

int disp_float(va_list *flag)
{
    float nb = va_arg(*flag, double);

    return my_put_float(nb);
}
