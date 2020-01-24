/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** Display N if integer is negative P if integer is positive
*/

#include "my.h"

void my_isneg(int n)
{
    char negative = 'N';
    char positive = 'P';

    if (n < 0)
        my_putchar(negative);
    else
        my_putchar(positive);
}
