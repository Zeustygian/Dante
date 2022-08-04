/*
** EPITECH PROJECT, 2022
** dante
** File description:
** solver main
*/

#include "node.h"
#include "my.h"
#include "solver.h"
#include "my_printf.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

pos_t find_end(char *maze)
{
    size_t y = 0;
    size_t x = 0;
    size_t i = 0;

    while (maze[x] != '\n')
        x++;
    while (maze[i] != '\0') {
        if (maze[i] == '\n')
            y++;
        i++;
    }
    return (pos_t){x, y + 1, NULL};
}

int main(int ac, char **av)
{
    solver_t *solver = NULL;
    char *file = NULL;
    pos_t pos = {};

    if (ac < 2)
        return 84;
    file = read_file(av[1]);
    pos = find_end(file);
    solver = init_solver(file, pos.x, pos.y);
    free(file);
    iterative_flood_fill(solver, 0, 0);
    compare_maps(solver);
    my_printf("\nno solution found\n");
    destroy_solver(solver);
    return 0;
}
