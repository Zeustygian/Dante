/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** create array from strtok
*/

#include "my.h"
#include "my_printf.h"
#include <string.h>
#include <stdlib.h>

char **my_strtok_to_array(char *line, char *separator)
{
    char **array = malloc(sizeof(char *) * 1);
    char *ptr = strtok(line, separator);

    if (line == NULL) {
        free(array);
        return NULL;
    }
    array[0] = NULL;
    while (ptr != NULL) {
        array = str_append_no_free(ptr, array);
        ptr = strtok(NULL, separator);
    }
    return array;
}
