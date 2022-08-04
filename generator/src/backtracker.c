/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** backtracker
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void check_blocked(map_t *map)
{
    if (right_to_move(map, (map->y - 2), map->x) == true
        || right_to_move(map, (map->y + 2), map->x) == true
        || right_to_move(map, map->y, (map->x - 2)) == true
        || right_to_move(map, map->y, (map->x + 2)) == true) {
        map->success_move = true;
        return;
    }
    map->success_move = false;
    return;
}

void create_path(map_t *map)
{
    if (map->new_array[map->length - 3][map->width - 1] != '*')
        (map->new_array[map->length - 1][map->width - 2] = '*');
    else if (map->new_array[map->length - 1][map->width - 3] != '*')
        (map->new_array[map->length - 2][map->width - 1] = '*');
    if (map->length % 2 == 0) {
        odd_last_line(map);
        odd_last_column(map);
    }
    if (map->perfect == false)
        ruin_the_p_map(map);
}

void move_orders(map_t *map, node_t *node ,vec2i_t *pos)
{
    if (map->direction_order == 0)
        go_top(map, node, pos);
    if (map->direction_order == 1)
        go_under(map, node, pos);
    if (map->direction_order == 2)
        go_right(map, node, pos);
    if (map->direction_order == 3)
        go_left(map, node, pos);
}

static void success_move_fail(map_t *map, node_t *node, vec2i_t *pos)
{
    if (map->success_move == true)
        return;
    node->size--;
    if (node->size >= 0) {
        map->y = pos[node->size].y;
        map->x = pos[node->size].x;
    }
}

void backtracker(map_t *map, node_t *node, vec2i_t *pos)
{
    int loop = 0;

    map->new_array = copy_array(map->array);
    srand(time(NULL));
    map->new_array[map->x][map->y] = '*';
    pos[node->size].y = map->y;
    pos[node->size].x = map->x;
    node->size++;
    rand() % 2 ? go_under(map, node, pos) : go_right(map, node, pos);
    while (node->size != -1) {
        map->direction_order = rand() % 4;
        move_orders(map, node, pos);
        map->new_array[map->y][map->x] = '*';
        check_blocked(map);
        success_move_fail(map, node, pos);
        loop++;
    }
    create_path(map);
    map->new_array[map->length - 1][map->width - 1] = '*';
}
