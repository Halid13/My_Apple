/*
** EPITECH PROJECT, 2021
** USAGE.c
** File description:
** display
*/

#include "include/101pong.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("   ./101pong x0 y0 z0 x1 y1 z1 n\n");
    my_putstr("\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("   x0 ball abscissa at time t - 1\n");
    my_putstr("   y0 ball ordinate at time t - 1\n");
    my_putstr("   z0 ball altitude at time t - 1\n");
    my_putstr("   x1 ball abscissa at time t\n");
    my_putstr("   y1 ball ordinate at time t\n");
    my_putstr("   z1 ball altitude at time t\n");
    my_putstr("   n time shift (greater than or equal to zero, integer)\n");
}
