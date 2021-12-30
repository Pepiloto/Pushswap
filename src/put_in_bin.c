/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** print_in_bits
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "linked_lists.h"
#include "main.h"
#include "lists.h"

static linked_list_t *ra(la_lb_t *list)
{
    linked_list_t *tempus = list->l_a;
    linked_list_t *node = malloc(sizeof(linked_list_t));
    linked_list_t *temp = list->l_a;

    node->data = list->l_a->data;
    node->next = NULL;
    for (; temp->next != NULL; temp = temp->next);
    temp->next = node;
    list->l_a = list->l_a->next;
    write(1, "ra\n", 3);
    free(tempus);
    return (list->l_a);
}

void radix(la_lb_t *lists, int ac)
{
    linked_list_t *current = lists->l_a;
    int i = 0;

    for (; i != 31; ++i) {
        edouard_the_vein(lists, current, i, ac);
        while (lists->l_b != NULL)
            lists->l_a = pa(lists);
        current = lists->l_a;
    }
    for (int j = 0; j != ac - 1; ++j)
        current = ((current->data &(1 << i))) ? pb(lists) : ra(lists);
    for (int j = 0; j != ac - 1; ++j)
    while (lists->l_b != NULL)
        lists->l_a = pa(lists);
}