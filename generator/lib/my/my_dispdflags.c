/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** displays the flags
*/

#include "../../include/my_printf.h"
#include <unistd.h>

int disp_dchar(int fd, va_list *flag)
{
    char c = va_arg(*flag, int);

    return write(fd, &c, 1);
}

int disp_dstr(int fd, va_list *flag)
{
    (void)flag;
    char *str = va_arg(*flag, char *);
    int len = my_strlen(str);

    return write(fd, str, len);
}

int disp_dnum(int fd, va_list *flag)
{
    int nb = va_arg(*flag, int);

    return my_put_dnbr(fd, nb);
}

int disp_dunsigned_int(int fd, va_list *flag)
{
    long long nb = va_arg(*flag, long long);

    return my_put_dunsigned_int(fd, nb);
}

int disp_dfloat(int fd, va_list *flag)
{
    float nb = va_arg(*flag, double);

    return my_put_dfloat(fd, nb);
}
