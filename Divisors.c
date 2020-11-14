#include<stdio.h>
int main()
{
    int value, i, r;
    scanf("%d" , &value);
    for (i=1; i<=value; i++)
    {
        r=value%i;
        if(r==0)
        {
            printf("%d\n" , i);
        }
    }
}