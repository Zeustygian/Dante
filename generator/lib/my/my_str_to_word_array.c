/*
** EPITECH PROJECT, 2021
** str_to_word_array
** File description:
** dur
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include "../../include/my.h"
#include "../../include/my_printf.h"

ssize_t word_len(char *str, char *separator)
{
    ssize_t len = 0;

    if (str == NULL)
        return -1;
    for (size_t i = 0; !check_separator(separator, str[i]) &&
            str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

static char *stock_word(char *separator, char *str)
{
    ssize_t len = word_len(str, separator);
    char *stock = malloc(sizeof(char) * (len + 1));
    int i = 0;

    if (stock == NULL)
        return (NULL);
    while (!check_separator(separator, str[i])) {
        stock[i] = str[i];
        i = i + 1;
    }
    stock[i] = '\0';
    return (stock);
}

void free_array(char **array)
{
    for (size_t i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}

bool check_separator(char *separator, char c)
{
    ssize_t i = 0;

    while (separator[i] != '\0') {
        if (c == separator[i])
            return true;
        i++;
    }
    return false;
}

char **my_str_to_word_array(char *str, char *separator)
{
    int n_word = count_words(separator, str);
    char **word_array = malloc(sizeof(char *) * (n_word + 1));
    int i = 0;
    int cursor = 0;

    if (word_array == NULL)
        return (NULL);
    while (i < n_word) {
        word_array[i] = stock_word(separator, str + cursor);
        if (word_array[i] == NULL)
            return (NULL);
        cursor += count_char(separator, str + cursor);
        cursor += count_separator(separator, str + cursor);
        i++;
    }
    word_array[i] = NULL;
    return (word_array);
}
