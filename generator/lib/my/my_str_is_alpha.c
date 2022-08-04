/*
** EPITECH PROJECT, 2022
** lib
** File description:
** check if str is alpha
*/

#include <stdbool.h>

bool is_alphanum(char c)
{
    return ((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9')
            || (c == '_'));
}

bool is_alpha(char c)
{
    return ((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z')
            || (c == '_'));
}

bool my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (((str[i] < 'A' && str[i] > 'Z') || (str[i] < 'a' && str[i] > 'z')))
            return false;
    }
    return true;
}

bool my_str_isalphanum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_alphanum(str[i]))
            return false;
    }
    return true;
}
