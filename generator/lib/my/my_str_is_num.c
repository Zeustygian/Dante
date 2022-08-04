/*
** EPITECH PROJECT, 2022
** my_is_num
** File description:
** chek if str is num
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"
#include <stdbool.h>
#include <stddef.h>

bool my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return false;
    }
    return true;
}

bool check_badly_formated(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9'))
            break;
    }
    if (i < my_strlen(str) && (str[0] >= '0' && str[0] <= '9'))
        return true;
    return false;
}
