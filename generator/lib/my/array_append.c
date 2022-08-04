/*
** EPITECH PROJECT, 2022
** lib
** File description:
** append element in an array
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

char **str_append(char *new_str, char **array)
{
    size_t i = 0;
    int new_array_len = array_len(array) + 1;
    char **new_array = malloc(sizeof(char *) * (new_array_len + 1));

    if (new_array == NULL)
        return NULL;
    for (; array[i] != NULL; i++) {
        new_array[i] = my_strdup(array[i]);
    }
    new_array[i] = my_strdup(new_str);
    new_array[i + 1] = NULL;
    free_array(array);
    free(new_str);
    return new_array;
}

char **str_append_no_free(char const *new_str, char **array)
{
    size_t i = 0;
    int new_array_len = array_len(array) + 1;
    char **new_array = malloc(sizeof(char *) * (new_array_len + 1));

    if (new_array == NULL)
        return NULL;
    for (; array[i] != NULL; i++) {
        new_array[i] = my_strdup(array[i]);
    }
    new_array[i] = my_strdup(new_str);
    new_array[i + 1] = NULL;
    free_array(array);
    return new_array;
}
