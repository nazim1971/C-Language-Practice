#include <stdio.h>
#include <conio.h>


// Here we do sem, find even and odd number, find high and low value
void arr();

void main()
{

    arr();
    getch();
}

void arr()
{
    int arr[]={7,9,2,8,4,5,1};
    int sum=0;
    int i=0;
    int pMinNum=arr[0];
    int pMinI=0;
    int pMaxNum=arr[0];
    int pMaxI=0;
    int cMinNum=arr[0];
    int cMinI=0;
    int cMaxNum=arr[0];
    int cMaxI=0;
    int cSum=0;
    for(i=0;i<=6;i++)
    {
        int k;
        sum+=arr[i];
         // Find the minimum number and its index
        if(arr[i] < pMinNum)
           {
                pMinNum=arr[i];
                pMinI=i;
           }
         // Find the maximum number and its index
        if (arr[i] > pMaxNum)
        {
            pMaxNum = arr[i];
            pMaxI = i;
        }
        // Find All Even Numbers
        if(arr[i] %2 == 0 )
        {
            printf("Parent Array Even Number = %d \n", arr[i]);
        }
        //Find All Odd Numbers
        else {printf("Parent Array Odd Number = %d \n", arr[i]);}

        // Find the sum of Min Max Btw
        if(pMinI > pMaxI)
        {
            for(k=pMaxI+1; k < pMinI; k++)
            {
                printf("\n Btn Numbers= %d \n",arr[k]);
            }
        }
        // Find the sum of Min Max Btw
         if(pMinI > pMaxI)
        {
            for(k=pMaxI+1; k < pMinI; k++)
            {
               cSum+=arr[k];
               // Find The btw Min Number and index
               if(arr[k] < cMinNum)
               {
                   cMinNum=arr[k];
                   cMinI=k;
               }
                // Find The btw Max Number and index
               if(arr[k] > cMaxNum)
               {
                   cMaxNum=arr[k];
                   cMaxI=k;
               }

            }
        }

    }
    printf("Sum of full array = %d",sum);
    printf("\nParent Min Number = %d",pMinNum);
    printf("\nParent Min Number Index = %d",pMinI);
    printf("\nParent Max Number = %d",pMaxNum);
    printf("\nParent Max Number Index = %d",pMaxI);
    printf("\n Sum of Min Max Btw Number = %d \n",cSum);
    printf("\nChild Min Number = %d",cMinNum);
    printf("\nChild Min Number Index = %d",cMinI);
    printf("\nChild Max Number = %d",cMaxNum);
    printf("\nChild Max Number Index = %d",cMaxI);


}
