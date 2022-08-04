/*
** EPITECH PROJECT, 2022
** dante
** File description:
** header
*/

#ifndef SOLVER_H
    #define SOLVER_H

    #include <sys/types.h>
    #include <stdbool.h>

    typedef struct pos_s {
        ssize_t x;
        ssize_t y;
        struct pos_s *head;
    } pos_t;

    typedef struct {
        pos_t pos;
    } stack_t;

    typedef struct {
        char **maze;
        char **solver_array;
        ssize_t steps;
        ssize_t stack_size;
        stack_t *stack;
        pos_t end;
    } solver_t;

    enum direction {
        UP,
        DOWN,
        LEFT,
        RIGHT
    };

    bool recursive_backtrack(solver_t *solver, ssize_t x, ssize_t y);
    char *read_file(char const *filepath);
    solver_t *init_solver(char *file, ssize_t x, ssize_t y);
    void compare_maps(solver_t *solver);
    bool out_of_bounds(solver_t *solver, ssize_t x, ssize_t y);
    void recursive_flood_fill(solver_t *solver, ssize_t x, ssize_t y);
    void iterative_flood_fill(solver_t *solver, ssize_t x, ssize_t y);
    bool solve_maze(solver_t *solver);
    bool solve_maze(solver_t *solver);
    char **my_strtok_to_array(char *line, char *separator);
    void destroy_solver(solver_t *solver);

#endif /*SOLVER_H*/
