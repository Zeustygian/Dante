/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** special_size_mazes
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cond(map_t *map)
{
    if (map->width == 0 || map->length == 0)
        return 0;
    if (map->width == 1 && map->length == 1) {
        printf("*");
        return 0;
    }
    if (map->width == 1) {
        for (int i = 0; i != map->length - 1; i++) {
            printf("*\n");
        }
        printf("*");
        return 0;
    }
    if (map->length == 1) {
        for (int i = 0; i != map->width; i++) {
            printf("*");
        }
        return 0;
    }
    return 1;
}

int special_size_mazes(map_t *map)
{
    srand(time(NULL));
    if (cond(map) == 0)
        return 0;
    if (map->width == 2 && map->length == 2) {
        printf("*");
        rand() % 2 ? (printf("*\n") && printf("X"))
        : (printf("X\n") && printf("*"));
        printf("*");
        return 0;
    }
    return 1;
}
