/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** task01 Day08
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    char *ptr = NULL;
    int i = 0;
    int length = 0;

    if (src == NULL)
        return NULL;
    length = my_strlen(src) + 1;
    ptr = malloc(sizeof(char) * length);
    if (ptr == NULL)
        return NULL;
    while (src[i] != '\0') {
        ptr[i] = src[i];
        i = i + 1;
    }
    ptr[i] = '\0';
    return (ptr);
}

char *replace_str(char *src)
{
    char *ptr = NULL;
    int i = 0;
    int length = my_strlen(src) + 1;

    ptr = malloc(sizeof(char) * length);
    if (ptr == NULL)
        return NULL;
    while (src[i] != '\0') {
        ptr[i] = src[i];
        i = i + 1;
    }
    ptr[i] = '\0';
    free(src);
    return (ptr);
}
