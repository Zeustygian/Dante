/*
** EPITECH PROJECT, 2022
** dante
** File description:
** try not to crash
*/

#include "solver.h"

bool out_of_bounds(solver_t *solver, ssize_t x, ssize_t y)
{
    return x > solver->end.x - 1 || y > solver->end.y - 1 ||
        y < 0 || y < 0;
}
