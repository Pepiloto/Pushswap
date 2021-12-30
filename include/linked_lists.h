/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** linked_lists
*/

#ifndef LINKED_LISTS_H_
#define LINKED_LISTS_H_

typedef struct linked_list {
    int data;
    struct linked_list *next;
}linked_list_t;

typedef struct la_lb {
    linked_list_t *l_a;
    linked_list_t *l_b;
}la_lb_t;

#endif /* !LINKED_LISTS_H_ */