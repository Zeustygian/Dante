/*
** EPITECH PROJECT, 2022
** B-CPE-200-RUN-2-1-dante-sebastien.nourry
** File description:
** conds_two_width
*/

#include "my.h"
#include "my_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cond_last_draw(map_t *map)
{
    if (map->last_draw == 0)
        printf("X*");
    else if (map->last_draw == 1)
        printf("**");
    else
        printf("X*");
}

void cond_one(map_t *map)
{
    printf("X*\n");
    map->y++;
    map->last_draw = 1;
}

void cond_two(map_t *map)
{
    printf("**\n");
    map->y++;
    map->last_draw = 0;
}

void cond_three(map_t *map)
{
    printf("*X\n");
    map->y++;
    map->last_draw = 1;
}

void cond_four(map_t *map)
{
    printf("**\n");
    map->y++;
    map->last_draw = 0;
}
