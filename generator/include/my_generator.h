/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** my_generator
*/

#include <stdbool.h>

#ifndef MY_GENERATOR_H_
    #define MY_GENERATOR_H_

    typedef struct vec2i {
        int y;
        int x;
    } vec2i_t;

    typedef struct node_s {
        int     size;
        vec2i_t node;
    } node_t;

    typedef struct map_s {
        int x;
        int y;
        int width;
        int length;
        int nb_elem_arr;
        char *map_str;
        char **array;
        char **new_array;
        int run_set;
        int random_cell;
        int direction_order;
        bool success_move;
        bool back_mode;
        bool moved;
        bool perfect;
        int last_draw;
    } map_t;

int special_size_mazes(map_t *map);
void go_top(map_t *map, node_t *node, vec2i_t *pos);
void go_under(map_t *map, node_t *node, vec2i_t *pos);
void go_right(map_t *map, node_t *node, vec2i_t *pos);
void go_left(map_t *map, node_t *node, vec2i_t *pos);
void cond_last_draw(map_t *map);
void cond_one(map_t *map);
void cond_two(map_t *map);
void cond_three(map_t *map);
void cond_four(map_t *map);
void init_map(map_t *map, node_t *node, vec2i_t *pos, bool perfect);
bool right_to_move(map_t *map, int y, int x);
char *create_array(map_t *map);
void create_path(map_t *map);
void odd_last_column(map_t *map);
void odd_last_line(map_t *map);
void ruin_the_p_map(map_t *map);
void loop_two_width(map_t *map);
void loop_two_length(map_t *map);
void ruin_map_two_width(map_t *map);
void ruin_map_two_length(map_t *map);
void two_as_length(map_t *map);
void two_as_width(map_t *map);
void backtracker(map_t *map, node_t *node, vec2i_t *pos);
char **sidewinder_algorithm(map_t *map);
void free_stuff(map_t *map);
bool out_of_bounds(map_t *map, int x, int y);

#endif
