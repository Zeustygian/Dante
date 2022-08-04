/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** ruin_map_value_two
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ruin_map_two_length(map_t *map)
{
    map->x = 0;
    map->y = 0;
    while (map->x != (map->width - 1) && map->y != (map->length - 1)) {
        if (map->x == (map->width - 1) && (map->y + 1) < map->length) {
            map->y++;
            map->x = 0;
        }
        map->x++;
        if (map->x == (map->width - 1) && (map->y + 1) < map->length) {
            map->y++;
            map->x = 0;
        }
        if (map->new_array[map->y][map->x] == 'X') {
            rand() % 2 ? (map->new_array[map->y][map->x] = 'X')
            : (map->new_array[map->y][map->x] = '*');
        }
    }
}
