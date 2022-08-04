/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my_memcpy
*/

#include <stddef.h>

void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *dest_ptr = (char *)dest;
    char *src_ptr = (char *)src;

    while (n != 0) {
        *dest_ptr = *src_ptr;
        dest_ptr++;
        src_ptr++;
        n--;
    }
    return dest;
}
