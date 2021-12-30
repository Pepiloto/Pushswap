/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** main
*/

#ifndef MAIN_H_
#define MAIN_H_
#include "linked_lists.h"
#include <stdlib.h>

linked_list_t *add_elem(linked_list_t *list, int data);
void radix(la_lb_t *lists, int ac);
static inline int check(linked_list_t *list)
{
    for (; list->next != NULL; list = list->next)
        if (list->data >= list->next->data)
            return (1);
    return (0);
}

#endif /* !MAIN_H_ */
