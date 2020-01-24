/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** lists
*/

#ifndef LISTS_H_
#define LISTS_H_

static linked_list_t *ra(la_lb_t *list);
static inline void pop_push_pa(la_lb_t **lists)
{
    linked_list_t *temp = (*lists)->l_b;
    (*lists)->l_a = add_elem((*lists)->l_a, (*lists)->l_b->data);
    (*lists)->l_b = (*lists)->l_b->next;
    write(1, "pa\n", 3);
    free(temp);
}
static inline void pop_push_pb(la_lb_t **lists)
{
    linked_list_t *temp = (*lists)->l_a;
    (*lists)->l_b = add_elem((*lists)->l_b, (*lists)->l_a->data);
    (*lists)->l_a = (*lists)->l_a->next;
    write(1, "pb\n", 3);
    free(temp);
}
static inline linked_list_t *pa(la_lb_t *list)
{
    if (list->l_b == NULL)
        return (list->l_a);
    pop_push_pa(&list);
    return (list->l_a);
}
static inline linked_list_t *pb(la_lb_t *list)
{
    if (list->l_a == NULL)
        return (list->l_b);
    pop_push_pb(&list);
    return (list->l_a);
}
static inline void edouard_the_vein(la_lb_t *lists, linked_list_t *now, int i,
				    int ac)
{
    for (int j = 0; j != ac - 1; ++j)
        now = (!(now->data &(1 << i))) ? pb(lists) : ra(lists);
}

#endif /* !LISTS_H_ */
