/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** odd_last_line
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void odd_last_column(map_t *map)
{
    int j = 0;

    while (j < map->length - 3) {
        if (map->new_array[j][map->length - 2] == '*') {
            map->new_array[j][map->length - 1] = '*';
            j += 2;
        } else {
            j++;
        }
    }
}

void odd_last_line(map_t *map)
{
    int j = 0;

    while (j < map->width - 3) {
        if (map->new_array[map->length - 2][j] == '*') {
            map->new_array[map->length - 1][j] = '*';
            j += 2;
        } else {
            j++;
        }
    }
}
