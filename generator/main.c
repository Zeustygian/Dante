/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** main_gen
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>

int cond_set_map(map_t *map, node_t *node, vec2i_t *pos)
{
    map->map_str = create_array(map);
    map->array = my_strtok_to_array(map->map_str, "\n");
    if (map->length == 2) {
        two_as_length(map);
        return 0;
    }
    if (map->width == 2) {
        two_as_width(map);
        return 0;
    } else {
        backtracker(map, node, pos);
    }
    return 1;
}

int condition_gen_map(map_t *map, node_t *node, vec2i_t *pos)
{
    if (special_size_mazes(map) == 0) {
        free_stuff(map);
        return 0;
    }
    if (cond_set_map(map, node, pos) == 0)
        return 0;
    return 1;
}

void draw_and_free(map_t *map)
{
    for (int i = 0; i != (map->length - 1); i++)
        printf("%s\n", map->new_array[i]);
    printf("%s", map->new_array[map->length - 1]);
    free_stuff(map);
}

int arguments_manager(int argc, char **argv)
{
    if (argc == 4) {
        if (my_strcmp(argv[3], "perfect") != 0)
            return 84;
        else
            return 0;
    }
    else if (argc != 3)
        return 84;
    if (my_str_isnum(argv[1]) == false || my_str_isnum(argv[1]) == false)
        return 84;
    if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
        return 84;
    return 1;
}

int main(int argc, char **argv)
{
    bool perfect = false;
    map_t *map = malloc(sizeof(map_t));
    vec2i_t *pos = NULL;
    node_t *node = NULL;

    if (arguments_manager(argc, argv) == 84)
        return 84;
    if (arguments_manager(argc, argv) == 1)
        perfect = false;
    if (arguments_manager(argc, argv) == 0)
        perfect = true;
    map->width = atoi(argv[1]);
    map->length = atoi(argv[2]);
    pos = malloc(sizeof(vec2i_t) * map->width * map->length);
    node = malloc(sizeof(node_t) * (map->width + 1) * map->length);
    init_map(map, node, pos, perfect);
    if (condition_gen_map(map, node, pos) == 0)
        return 0;
    draw_and_free(map);
    return 0;
}
