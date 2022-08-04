/*
** EPITECH PROJECT, 2022
** lib
** File description:
** memset
*/

#include <stddef.h>

void *my_memset(void *ptr, int value, size_t bytes)
{
    char *ptr_copy = (char *)ptr;

    for (size_t i = 0; i < bytes; i++) {
        *ptr_copy = value;
        ptr_copy++;
    }
    return ptr;
}
