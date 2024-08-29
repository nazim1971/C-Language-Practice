#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
int sub(int a, int b);

//Nasted Function argument receive and return

void main()
{
    int m = sum(5,2);
    printf("\nReturn=%d",m);
    getch();
}

int sum(int a,int b)
{
    int x=a+b;
    printf("\nSum=%d",x);
    int p = sub(x,4);
    return p;
}

int sub(int a, int b)
{
    int y =a-b;
    int i;
     printf("\nSub=%d",y);
     if(y<=3)
    for(i=0;i<=4;i++)
    printf("\n*****Nazim*****");
    printf("\n*****Bangladesh*****");

    return y;
}

