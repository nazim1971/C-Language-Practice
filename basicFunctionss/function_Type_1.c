#include <stdio.h>
#include <conio.h>

void addition(); // prototypes
void multipication();// prototypes
// Function type with no argument and no retrun

void main()
{
    addition();
    multipication();
    getch();
}

void addition()
{
    int x,y,z;
     x=2;
     y=4;
     z= x+y;
    printf("********Addition*******\n\n");
    printf("X=%d\nY=%d\nZ=%d",x,y,z);
}

void multipication()
{
    int x,y,z;
     x=5;
     y=5;
     z= x*y;
     printf("\n\n********Multipication*******\n\n");
    printf("X=%d\nY=%d\nZ=%d",x,y,z);
}
