/*
** EPITECH PROJECT, 2022
** lib
** File description:
** copy an array
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/my_printf.h"

char **copy_array(char **array)
{
    char **array_copy = malloc(sizeof(char *) * (array_len(array) + 1));
    int i = 0;

    if (array_copy == NULL)
        return NULL;
    for (; array[i] != NULL; i++) {
        array_copy[i] = my_strdup(array[i]);
    }
    array_copy[i] = NULL;
    return array_copy;
}
