/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** .h
*/

#ifndef _PUSHSWAP_H
    #define _PUSHSWAP_H

    #include <stdbool.h>

    #include "solver.h"

    typedef struct node_s {
        pos_t pos;
        unsigned char direction;
        struct node_s *next;
    } node_t;

    int find_bigger(node_t **la);
    void free_list(node_t *node);
    void create_node(node_t *node, pos_t pos);
    void remove_first_node(node_t **head);
    void add_new_node(node_t *node, pos_t pos);
    void push_node(node_t **root, pos_t pos, unsigned char direction);
    void put_adj(node_t *node, pos_t new_pos);
    void disp_list(node_t *head);
    void append_node(node_t *node, pos_t pos);

#endif
