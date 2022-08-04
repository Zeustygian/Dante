/*
** EPITECH PROJECT, 2022
** dante
** File description:
** free list
*/

#include "node.h"
#include <stdlib.h>

void free_list(node_t *node)
{
    node_t *tmp = node;

    if (node == NULL)
        return;
    while (tmp != NULL) {
        tmp = node->next;
        free(node);
        node = tmp;
    }
}
