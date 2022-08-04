/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** build
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int lenof_dest = my_strlen(dest);

    while (src[i] != '\0' && i < nb) {
        dest[lenof_dest + i] = src[i];
        i = i + 1;
    }
    dest[lenof_dest + i] = '\0';
    return (dest);
}
