#include <stdio.h>

//Unlike for and while loops, which test the loop condition at the top of
//the loop, the do...while loop in C programming checks its condition at
//the bottom of the loop.

int main(void)
{

int height;
int row;
int column;

    do
    {
        printf("Pyramid Height: ");

        scanf("%d", &height);

    } while (height < 1 || height > 8);
    
}