/*
** EPITECH PROJECT, 2021
** 101pong.c
** File description:
** work on a 3D version of this game
*/

#include "include/101pong.h"

float *my_pong(char **av)
{
    float x0 = (atof(av[1])), y0 = (atof(av[2])), z0 = (atof(av[3]));
    float x1 = (atof(av[4])), y1 = (atof(av[5])), z1 = (atof(av[6]));
    float t = (atof(av[7]) + 1);
    float rac, ang, agl;
    float *vpos = malloc(sizeof(float) * 3);
    float *vmul = malloc(sizeof(float) * 3);

    if (vpos ==  NULL)
       return (NULL);
    vpos[0] = x1 - x0;
    vpos[1] = y1 - y0;
    vpos[2] = z1 - z0;

    if (vmul ==  NULL)
        return (NULL);
    vmul[0] = (t * vpos[0]) + x0;
    vmul[1] = (t * vpos[1]) + y0;
    vmul[2] = (t * vpos[2]) + z0;
    rac = sqrt((vpos[0] * vpos[0]) + (vpos[1] * vpos[1]) + (vpos[2] * vpos[2]));
    ang = asin(abs(z1 - z0) / rac);
    agl = (ang * 180) / M_PI;

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", vpos[0], vpos[1], vpos[2]);
    printf("At time t + 4, ball coordinates will be:\n");
    printf("(%.2f, %.2f, %.2f)\n", vmul[0], vmul[1], vmul[2]);
    if (vmul[0] <= 0) {
        printf("The incidence angle is:\n");
        printf("%.2f degrees\n", agl);
    } else
        printf("The ball won’t reach the paddle.\n");
    free(vpos);
    free(vmul);
    return (0);
}
