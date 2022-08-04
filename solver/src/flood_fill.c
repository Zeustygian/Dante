/*
** EPITECH PROJECT, 2022
** dante
** File description:
** flood fill
*/

#include "my.h"
#include "my_printf.h"
#include "solver.h"

#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

void push_pos(pos_t *stack, pos_t *pos, solver_t *solver)
{
    pos_t old_pos = stack[solver->stack_size];

    solver->stack_size++;
    stack[solver->stack_size] = *pos;
    stack[solver->stack_size].head = &old_pos;
}

void return_to_entry(pos_t *head, solver_t *solver)
{
    while (head) {
        printf("x = %zd | y = %zd\n", head->x, head->y);
        if (solver->solver_array[head->y][head->x] == 's')
            solver->solver_array[head->y][head->x] = 'o';
        head = head->head;
        print_narray(solver->solver_array, solver->end.y);
        my_putchar('\n');
    }
}

void try_to_push(pos_t *stack, pos_t *pos, solver_t *solver)
{
    if (!out_of_bounds(solver, pos->x, pos->y) &&
            solver->solver_array[pos->y][pos->x] == '*')
        push_pos(stack, pos, solver);
}

void iterative_flood_fill(solver_t *solver, ssize_t x, ssize_t y)
{
    pos_t *stack = NULL;
    pos_t *stack_save = NULL;
    pos_t *head = NULL;
    ssize_t i = 0;

    if (solver->solver_array[y][x] != '*')
        return;
    stack = malloc(sizeof(stack_t) * (solver->end.x * solver->end.y));
    stack_save = malloc(sizeof(stack_t) * (solver->end.x * solver->end.y));
    if (!stack || !stack_save)
        return;
    stack[0] = (pos_t){x, y, NULL};
    stack[solver->stack_size] = (pos_t){x, y, NULL};
    while (solver->stack_size > 0) {
        x = stack[solver->stack_size].x;
        y = stack[solver->stack_size].y;
        head = &stack[solver->stack_size - 1];
        solver->solver_array[y][x] = 's';
        solver->stack_size--;
        try_to_push(stack, &(pos_t){x + 1, y, head}, solver);
        try_to_push(stack, &(pos_t){x - 1, y, head}, solver);
        try_to_push(stack, &(pos_t){x, y + 1, head}, solver);
        try_to_push(stack, &(pos_t){x, y - 1, head}, solver);
        i++;
    }
    free(stack);
    free(stack_save);
    return_to_entry(head, solver);
}
