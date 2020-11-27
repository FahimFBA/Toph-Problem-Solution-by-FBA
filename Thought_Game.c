#include <stdio.h>
int main()
{
    int t, a,b,avg,i;
    scanf("%d" , &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d%d" , &a, &b);
        avg=(a+b)/2;
        if (avg%2==0)
        {
            printf("Sadia will be happy.\n");
        }
        else
        {
            printf("Oops!\n");
        }
    }
}