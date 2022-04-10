/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** shell script that, when executed, build your own library
*/

#include "include/101pong.h"

void my_putchar(char c)
{
    write(1, &c, 1);
    return ;
}
