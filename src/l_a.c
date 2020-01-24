/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** l_a
*/

#include "linked_lists.h"
#include <stdlib.h>
#include <stdio.h>

linked_list_t *add_elem(linked_list_t *list, int data)
{
    linked_list_t *element = (linked_list_t *)malloc(sizeof(linked_list_t));

    element->data = data;
    element->next = list;
    return (element);
}