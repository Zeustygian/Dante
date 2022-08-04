/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** ruin_the_p_map
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ruin_the_p_map(map_t *map)
{
    int rand_value = 0;
    int total_value_x = 0;

    srand(time(NULL));
    for (int y = 0; y != map->length; y++) {
        rand_value = rand() % ((map->width - 1) / 2);
        total_value_x += rand_value;
        if (total_value_x > map->width - 1) {
            total_value_x = 0;
            continue;
        }
        map->new_array[y][total_value_x] = '*';
    }
    return;
}
