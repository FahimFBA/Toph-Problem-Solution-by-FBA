#include<stdio.h>
int main()
{
    int i,t,count=0;
    scanf("%d" , &t);
    for (i=2; i<=t; i++)
    {
        if (t%i==0)
        count++;
    }
    printf("%d\n" , count);
}