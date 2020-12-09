#include<stdio.h>
int main()
{
    int n[100], i, num;
    scanf("%d", &num);
    n[0]=1;
    n[1]=1;
    for (i=2; i<=50; i++) //I gave two numbers to n[0] & n[1] already. So for managing them all properly, I have deducted them from the range of the loop
    {
        n[i]=n[i-1]+n[i-2]; 
    }
    printf("%d\n" , n[num-1]);
}