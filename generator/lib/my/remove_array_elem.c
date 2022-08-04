/*
** EPITECH PROJECT, 2022
** lib
** File description:
** remove an element from an array
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

char **remove_array_element(int index, char **array)
{
    int len = array_len(array);
    int new_array_index = 0;
    char **new_array = malloc(sizeof(char *) * (len));

    if (new_array == NULL)
        return NULL;
    for (int i = 0; array[i] != NULL; i++) {
        if (i == index)
            i++;
        if (array[i] != NULL)
            new_array[new_array_index] = my_strdup(array[i]);
        else
            break;
        new_array_index++;
    }
    new_array[new_array_index] = NULL;
    free_array(array);
    return new_array;
}
