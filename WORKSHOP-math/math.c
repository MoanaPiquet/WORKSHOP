/*
** EPITECH PROJECT, 2023
** CSFML
** File description:
** math.c
*/
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float number = 3.13;
    float resultsin = sin(number);
    float resultcos = cos(number);
    int x = 0;
    int y = 0;

    for (int i = 0; i != 10; i++) {
        x = i;
        if (y <= 5)
            y = i;
        if (y > 5)
            y = pow(10,1) - i;
        printf("%d %d\n", x,y);
    }    
    return (0);
}