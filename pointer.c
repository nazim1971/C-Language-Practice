#include <stdio.h>
#include <conio.h>

void pointer(); //prototype
// All about pointer
void main ()
{
    pointer();
    getch();
}

void pointer ()
{
    int x = 10;
    int* y =&x;
    int c= *y+*y;
    printf("Value of x=%d",x);
    printf("\nAddress of direct x=%d",&x);
    printf("\nAddress of  y = %d",&y);
    printf("\nAddress of x = %d",y);
    printf("\nValue of y = %d",*y);
    printf("\nValue of C = %d",c);
    printf("\nAddress Of c = %d",&c);
}
