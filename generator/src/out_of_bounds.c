/*
** EPITECH PROJECT, 2022
** dante
** File description:
** try not to crash
*/

#include "my_generator.h"

bool out_of_bounds(map_t *map, int x, int y)
{
    return x > map->width - 1 || y > map->length - 1 ||
        y < 0 || x < 0;
}
