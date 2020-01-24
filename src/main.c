/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** main
*/

#include "main.h"
#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;

    for (int i = ac - 1; i > 0; --i)
        list = add_elem(list, my_getnbr(av[i]));
    return (list);
}

int main(int ac, char **av)
{
    la_lb_t lists = {NULL, NULL};

    if (ac <= 1)
        return (84);
    lists.l_a = my_params_to_list(ac, av);
    if (check(lists.l_a) == 0) {
        write(1, "\n", 1);
        return (0);
    }
    radix(&lists, ac);
    write(1, "pb pa\n", 6);
    return (0);
}
