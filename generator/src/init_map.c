/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** init_map
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>

void init_map(map_t *map, node_t *node, vec2i_t *pos, bool perfect)
{
    map->x = 0;
    map->y = 0;
    map->nb_elem_arr = (map->width + 1) * map->length;
    map->map_str = NULL;
    map->array = NULL;
    map->new_array = NULL;
    map->run_set = 0;
    map->random_cell = 0;
    map->direction_order = 0;
    map->success_move = false;
    map->last_draw = 3;
    if (perfect == true)
        map->perfect = true;
    else
        map->perfect = false;
    map->moved = false;
    pos->x = 0;
    pos->y = 0;
    node->node = (vec2i_t) {0, 0};
    node->size = 0;
}
