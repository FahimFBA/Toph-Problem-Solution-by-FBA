#include<stdio.h>

int main()
{
    int row,col,n;  

    scanf("%d",&n);

    for(row=0;row<n;row++)
    {
        for(col=row;col<n-1;col++)
        {
            printf(" ");
        }


        for(col=0;col<=row;col++)
        {
            if(col==row)
                printf("*");
            else
                printf("* ");
        }
        printf("\n");
    }
}