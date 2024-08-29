#include<stdio.h>
#include<conio.h>
void sum(char p,int a,int b);

//Function type receive argument but no return

void main()
{
  //  printf("Nazim");
    sum('Nazim',5,2);
    getch();
}

void sum(char p,int a,int b)
{
    int x=a;
    int y=b;
    int z=x+y;
    printf("\nx=%d\ny=%d\nz=%d",x,y,z);
    printf("\na=%d\nb=%d\n\nChar=%c",a,b,p);
}
