/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** print_array
*/

#include "../../include/my_printf.h"
#include "../../include/my.h"
#include <unistd.h>

void print_narray(char **array, int n )
{
    for (int i = 0; i < n; i++) {
        my_printf("%s\n", array[i]);
    }
}
