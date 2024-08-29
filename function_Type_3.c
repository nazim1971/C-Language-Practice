#include<stdio.h>
#include<conio.h>
int sum(int a,int b);

//Function type receive argument return

void main()
{
    int m = sum(5,2);
    printf("Return=%d",m);
    getch();
}

int sum(int a,int b)
{
    int x=a;
    int y=b;
    int z=x+y;
    printf("\nx=%d\ny=%d\n",x,y);
    return z;
}
