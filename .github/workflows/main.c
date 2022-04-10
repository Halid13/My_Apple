/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** test
*/

#include "include/101pong.h"

int main(int ac, char **av)
{
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h')) {
        usage();
    }
    if (ac == 1) {
        return (84);
    }
    if (ac > 8) {
        return (84);
    }
    if (ac < 8) {
        return (84);
    }
    if (atof(av[7]) < 0) {
        return (84);
    }
    else {
        *my_pong(av);
    }
    return (0);
}
