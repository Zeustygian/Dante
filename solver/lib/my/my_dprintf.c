/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my_dprintf
*/

#include "../../include/my_printf.h"
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <unistd.h>

static const dflags_t dfunc_array[6] = {
    {'d', &disp_dnum}, {'i', &disp_dnum}, {'s', &disp_dstr},
    {'c', &disp_dchar}, {'f', &disp_dfloat}, {'\0', NULL}
};

bool parse_dfmt(int fd, char c, va_list *flag)
{
    for (int i = 0;dfunc_array[i].flag != '\0'; i++) {
        if (c == dfunc_array[i].flag && flag != NULL) {
            dfunc_array[i].disp(fd, flag);
            return true;
        }
    }
    return false;
}

int my_dprintf(int fd, char *fmt, ...)
{
    va_list flag;
    int i = 0;

    va_start(flag, fmt);
    for (; fmt[i] != '\0'; i++) {
        if (fmt[i] == '%' && fmt[i + 1] != '%') {
            i += parse_dfmt(fd, fmt[i + 1], &flag);
        } else {
            write(fd, &fmt[i], 1);
        }
    }
    va_end(flag);
    return i;
}
