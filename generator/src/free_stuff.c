/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** free_stuff
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>

void free_stuff(map_t *map)
{
    free(map->array);
    free(map->map_str);
    free(map->new_array);
    free(map);
}
