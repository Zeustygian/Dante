/*
** EPITECH PROJECT, 2022
** dante
** File description:
** replace by solution
*/

#include "my.h"
#include "my_printf.h"
#include "solver.h"

static void replace_by_solution(solver_t *solver, size_t x, size_t y)
{
    if (solver->solver_array[y][x] == 'o')
        solver->maze[y][x] = 'o';
}

void compare_maps(solver_t *solver)
{
    for (int y = 0; solver->solver_array[y] != NULL; y++)
        for (int x = 0; solver->maze[y][x] != '\0'; x++)
            replace_by_solution(solver, x, y);
    print_narray(solver->maze, solver->end.y - 1);
    my_printf("%s", solver->maze[solver->end.y - 1]);
}
