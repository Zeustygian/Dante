/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** functions to diplay unsigned int in different bases
*/

#include <stddef.h>
#include <stdarg.h>
#include "../../include/my_printf.h"

int disp_hex_upper(va_list *flag)
{
    unsigned int nb = va_arg(*flag, unsigned int);
    char *base = "0123456789ABCDEF";

    return my_put_nbr_base(nb, base);
}

int disp_hex_lower(va_list *flag)
{
    unsigned int nb = va_arg(*flag, unsigned int);
    char *base = "0123456789abcdef";

    return my_put_nbr_base(nb, base);
}

int disp_binary(va_list *flag)
{
    unsigned int nb = va_arg(*flag, unsigned int);
    char *base = "01";

    return my_put_nbr_base(nb, base);
}

int disp_octal(va_list *flag)
{
    unsigned int nb = va_arg(*flag, unsigned int);
    char *base = "01234567";

    return my_put_nbr_base(nb, base);
}

int disp_flag_s(va_list *flag)
{
    char *str = va_arg(*flag, char *);

    return my_put_flag_s(str);
}
