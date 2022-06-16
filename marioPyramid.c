#include <stdio.h>

//Unlike for and while loops, which test the loop condition at the top of
//the loop, the do...while loop in C programming checks its condition at
//the bottom of the loop.

int main(void)
{

//Variables
int height;
int row;
int column;

    do
    {
        // This prompts user for Pyramid Height
        printf("Pyramid Height: ");

        //Program takes user input and stores it in the 'height' variable
        scanf("%d", &height);
    } 
    
    //Condition for height that the user can enter (1-8)
    while (height < 1 || height > 8);

    //Set conditions for rows
    //row starts at(initialized) at 0
    //condition: variable 'height' is greater than row(0)
    //update with 1 additional row if condition is true
     for(int row = 0; row < height; row++)

     {

        //Set condition for columns
        //column starts at(initialized) at 0
        //condiiton: variable 'row' is greater than or equal to column(0)
        //update with 1 additional column if condition is true
        for(int column = 0; column <= row; column++)

          //If condition is TRUE it will print a hash (#)
          printf("#");

          //Return output to next line
          printf("\n");

     }
    
}