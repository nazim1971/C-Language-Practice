#include <stdio.h>
#include <conio.h>

int rec(int n); //prototype

void main ()
{
    int x=rec(6);
      printf("%d",x);
    getch();
}

int rec(int n)
{
    int k;
    if(n==0)
    return 1;
    else
    k=n*rec(n-1);
   return k;
}

