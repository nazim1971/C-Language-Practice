#include <stdio.h>
#include <conio.h>

// Practice of two dimension array methods

void arr();

void main()
{
    arr();
    getch();
}

void arr()
{
    // Here ******arr[row][column] *********
    int arr[3][3]= { {1,4,3}, {2,5,9}, {8,7,6} };


    int x,y;
    int sum=0;
    // outer Loop
    for(x=0;x<=2;x++)
    {
        //Inner Loop
        for(y=0;y<=2;y++)
        {
             // print all number
           // printf("  %d  ", arr[x][y]);

            sum+=arr[x][y];
        }
        printf("\n");
       //Print Last Col
        printf("\n Last Col = %d", arr[x][2]);
        //Print First Row
        printf("\n Last Row = %d", arr[0][x]);
    }
    printf("\nSum of all Array = %d", sum);


}
