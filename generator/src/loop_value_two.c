/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** loop_value_two
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void loop_length(map_t *map)
{
    for (int i = 0; map->x <= (map->width - 1); i++, map->x++) {
        if (map->x >= (map->width - 1))
            break;
        map->new_array[map->y][map->x] = '*';
        if (i % 4 == 0)
            map->new_array[map->y][map->x] = 'X';
    }
}

void loop_two_length(map_t *map)
{
    while (map->y != map->length) {
        loop_length(map);
        map->y++;
        map->x = 0;
        if (map->y >= (map->length - 1))
            continue;
        map->new_array[1][0] = '*';
        map->new_array[1][1] = '*';
        map->x = 2;
    }
}
