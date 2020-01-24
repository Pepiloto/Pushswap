/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** Display all digits in ascending order
*/

#include "my.h"

void my_print_digits(void)
{
    int digits;

    for (digits = 48; digits < 58; digits++)
        my_putchar(digits);
}
