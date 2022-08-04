/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** go_positions
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<time.h>

bool right_to_move(map_t *map, int y, int x)
{
    if (out_of_bounds(map, x, y))
        return false;
    if (map->new_array[y][x] == 'X')
        return true;
    return false;
}

void go_top(map_t *map, node_t *node, vec2i_t *pos)
{
    if (right_to_move(map, (map->y - 2), map->x) == true) {
        map->new_array[map->y - 1][map->x] = '*';
        map->y -= 2;
        pos[node->size].y = map->y;
        pos[node->size].x = map->x;
        node->size++;
        map->new_array[map->y][map->x] = '*';
    }
    return;
}

void go_under(map_t *map, node_t *node, vec2i_t *pos)
{
    if (right_to_move(map, (map->y + 2), map->x) == true) {
        map->new_array[map->y + 1][map->x] = '*';
        map->y += 2;
        pos[node->size].y = map->y;
        pos[node->size].x = map->x;
        node->size++;
        map->new_array[map->y][map->x] = '*';
        map->success_move = true;
    }
    return;
}

void go_right(map_t *map, node_t *node, vec2i_t *pos)
{
    if (right_to_move(map, map->y, (map->x + 2)) == true){
        map->new_array[map->y][map->x + 1] = '*';
        map->x += 2;
        pos[node->size].y = map->y;
        pos[node->size].x = map->x;
        node->size++;
        map->new_array[map->y][map->x] = '*';
        map->success_move = true;
    }
    return;
}

void go_left(map_t *map, node_t *node, vec2i_t *pos)
{
    if (right_to_move(map, map->y, (map->x - 2)) == true){
        map->new_array[map->y][map->x - 1] = '*';
        map->x -= 2;
        pos[node->size].y = map->y;
        pos[node->size].x = map->x;
        node->size++;
        map->new_array[map->y][map->x] = '*';
        map->success_move = true;
    }
    return;
}
