#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d" , &n);
    int a,b,c;
    
    for (i=0; i<n; i++)
    {
        a=i;
        b=a;
        c=a+b;
    }
    printf("%d\n" ,c);
}
