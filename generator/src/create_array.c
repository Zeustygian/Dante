/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** create_array
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(map_t *map)
{
    char *array = malloc(sizeof(char) * ((map->width + 1) * map->length));
    int i = 0;

    for (; i != map->nb_elem_arr; i++) {
        for (int j = 0; j != map->width; j++, i++)
            array[i] = 'X';
        array[i] = '\n';
    }
    array[map->nb_elem_arr - 1] = '\0';
    return array;
}
