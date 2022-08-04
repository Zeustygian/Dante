/*
** EPITECH PROJECT, 2021
** my_printf_bootstrap
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../../include/my_printf.h"
#include <stdbool.h>
#include <stddef.h>

static flags_t func_array[ARRAY_SIZE] = {
    {'d', &disp_num}, {'S', &disp_flag_s}, {'i', &disp_num}, {'s', &disp_str},
    {'c', &disp_char}, {'b', &disp_binary}, {'X', &disp_hex_upper},
    {'x', &disp_hex_lower}, {'o', &disp_octal}, {'u', &disp_unsigned_int},
    {'f', &disp_float}, {'\0', NULL}
};

static hash_flag_t hash_func_array[HASH_ARRAY_SIZE] = {
    {'x', &disp_hash_hex_lower}, {'b', &disp_hash_bin},
    {'X', &disp_hash_hex_upper}, {'o', &disp_hash_oct}, {'\0', NULL}
};

bool parse_prefix(char c, va_list *flag)
{
    for (int i = 0; i < HASH_ARRAY_SIZE; i++) {
        if (c == hash_func_array[i].hash_flag && flag != NULL) {
            hash_func_array[i].disp_hash(flag);
            return true;
        } else if (c == '%') {
            my_putchar(c);
            return true;
        }
    }
    return false;
}

bool parse_fmt(char c, va_list *flag)
{
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (c == func_array[i].flag && flag != NULL) {
            func_array[i].disp(flag);
            return true;
        }
    }
    return false;
}

int my_printf(char *fmt, ...)
{
    va_list flag;
    int i = 0;

    va_start(flag, fmt);
    for (; fmt[i] != '\0'; i++) {
        if (fmt[i] == '%' && fmt[i + 1] != '%') {
            i += parse_fmt(fmt[i + 1], &flag);
        } else if (fmt[i] == '#' && fmt[i - 1] == '%') {
            i += parse_prefix(fmt[i + 1], &flag);
        } else {
            my_putchar(fmt[i]);
        }
    }
    va_end(flag);
    return i;
}
