/*
** EPITECH PROJECT, 2022
** dante
** File description:
** header
*/

#ifndef GENERATOR_H
    #define GENERATOR_H

    #include <stddef.h>

    typedef struct {
        char **map;
    } map_t;

    map_t *init_map(size_t x, size_t y);
    void destroy_map(map_t *map);
#endif /*GENERATOR_H*/
