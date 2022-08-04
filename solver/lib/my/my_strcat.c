/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** task02 Day07
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    int total_len = my_strlen(dest) + my_strlen(src);
    char *nstr = malloc(sizeof(char) * (total_len + 1));
    int index = 0;
    int src_index = my_strlen(dest);

    if (nstr == NULL) {
        return NULL;
    }
    for (int i = 0; i < my_strlen(dest); i++) {
        nstr[i] = dest[i];
    }
    for (; src_index < total_len; src_index++) {
        nstr[src_index] = src[index];
        index++;
    }
    nstr[src_index] = '\0';
    return nstr;
}

char *my_freed_strcat(char *dest, char const *src)
{
    int total_len = my_strlen(dest) + my_strlen(src);
    char *nstr = malloc(sizeof(char) * (total_len + 1));
    int index = 0;
    int src_index = my_strlen(dest);

    if (nstr == NULL) {
        return NULL;
    }
    for (int i = 0; i < my_strlen(dest); i++) {
        nstr[i] = dest[i];
    }
    for (; src_index < total_len; src_index++) {
        nstr[src_index] = src[index];
        index++;
    }
    nstr[src_index] = '\0';
    free(dest);
    return nstr;
}
