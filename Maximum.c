#include<stdio.h>
int main()
{
    int i, t,a,temp;
    int max=0;
    scanf("%d" , &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d" , &a);

        if (a>max) max=a;
    }
    printf("%d\n" , max);
}
