/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** two_value_any_size
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void two_as_width(map_t *map)
{
    map->new_array = copy_array(map->array);
    printf("*X\n**\n");
    map->y += 2;

    for (int i = 2; i != (map->length - 1); i++) {
        cond_one(map);
        if (map->y >= (map->length - 1))
            break;
        cond_two(map);
        if (map->y >= (map->length - 1))
            break;
        cond_three(map);
        if (map->y >= (map->length - 1))
            break;
        cond_four(map);
        if (map->y >= (map->length - 1))
            break;
    }
    cond_last_draw(map);
}

void two_as_length(map_t *map)
{
    int i = 0;

    map->new_array = copy_array(map->array);
    map->new_array[0][0] = '*';
    map->new_array[0][1] = '*';
    map->x = 2;
    loop_two_length(map);
    if (map->width % 2 == 1)
        map->new_array[map->length - 1][map->width - 1] = '*';
    if (map->width % 2 == 0) {
        map->new_array[map->length - 2][map->width - 1] = '*';
        map->new_array[map->length - 1][map->width - 1] = '*';
    }
    if (map->perfect == false)
        ruin_map_two_length(map);
    for (; i != (map->length - 1); i++)
        printf("%s\n", map->new_array[i]);
    printf("%s", map->new_array[i]);
}
