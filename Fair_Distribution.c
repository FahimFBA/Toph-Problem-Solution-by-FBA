#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d" , &a, &b);
    int z=b%a;
    int r=a-z;
    printf("%d\n" ,r);
}