/*
** EPITECH PROJECT, 2022
** dante
** File description:
** init solver struct
*/

#include "solver.h"
#include "my.h"

#include <stdlib.h>

static char *get_last_line(char *file, ssize_t x, ssize_t y)
{
    ssize_t offset = (((x + 1) * (y)) - (x));
    char *last_line = malloc(sizeof(char) * (x + 1));
    size_t i = 0;

    for (; file[offset - 1] != '\0'; i++) {
        last_line[i] = file[offset - 1];
        offset++;
    }
    last_line[i] = '\0';
    return last_line;
}

solver_t *init_solver(char *file, ssize_t x, ssize_t y)
{
    solver_t *solver = malloc(sizeof(solver_t));
    char *last_line = NULL;

    solver->stack_size = 0;
    solver->end = (pos_t){x, y, NULL};
    solver->stack_size = 1;
    last_line = get_last_line(file, x, y);
    solver->maze = my_strtok_to_array(file, "\n");
    solver->maze = str_append(last_line, solver->maze);
    solver->solver_array = copy_array(solver->maze);
    if (!solver || !solver->solver_array) {
        free(solver);
        free(solver->solver_array);
        return NULL;
    }
    return solver;
}

void destroy_solver(solver_t *solver)
{
    free_array(solver->solver_array);
    free_array(solver->maze);
    free(solver);
}
