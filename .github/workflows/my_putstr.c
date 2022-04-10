/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** displays, one-by-one, the characters of a string.
*/

#include "include/101pong.h"

int my_putstr(char const *str)
{
    int h;

    for(h = 0; str[h]!='\0'; h++) {
        my_putchar(str[h]);
    }
    return(0);
}
