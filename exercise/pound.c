
#include "../include/pound.h"
#include "../include/bool.h"
#include <stdlib.h>
#include <stdio.h>

void 
pound(int *n);

int 
pound_main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;
    int *p = &ch;
    pound(&times);
    pound(&ch);
    pound(&f);
    return true;
}

void pound(int *n)
{
    printf("%d \n", *n);
    while(*n > 0)
    {
        printf("#");
        *n--;
    }
    printf("\n");
}

