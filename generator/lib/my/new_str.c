/*
** EPITECH PROJECT, 2022
** minishell
** File description:
** utils
*/

#include <stdlib.h>
#include "../../include/my.h"

char *new_string(char *str)
{
    char *nstr = malloc(sizeof(char) * my_strlen(str));
    int i = 0;

    if (nstr == NULL)
        return NULL;
    for (; str[i] != '\0'; i++) {
        nstr[i] = str[i];
    }
    nstr[i] = '\0';
    return nstr;
}
