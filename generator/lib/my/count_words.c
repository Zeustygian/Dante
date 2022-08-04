/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** tour de rey
*/

#include "../../include/my.h"
#include <stdio.h>
#include <unistd.h>

int count_words(char *separator, char *str)
{
    int count = 1;

    if (str == NULL)
        return -1;
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] != '\0' && (check_separator(separator, str[i]) &&
                    !check_separator(separator, str[i + 1])))
            count++;
    }
    return (count);
}

int count_separator(char *separator, char *str)
{
    int i = 0;

    while (str[i] != '\0' && check_separator(separator, str[i])) {
        i = i + 1;
    }
    return (i);
}

int count_char(char *separator, char *str)
{
    int i = 0;

    while (str[i] != '\0' && !check_separator(separator, str[i])) {
        i = i + 1;
    }
    return (i);
}
