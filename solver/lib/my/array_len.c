/*
** EPITECH PROJECT, 2022
** lib
** File description:
** arraylen
*/

#include <stdlib.h>

int array_len(char **array)
{
    int i = 0;

    if (array == NULL)
        return 0;
    for (; array[i] != NULL; i++);
    return i;
}
