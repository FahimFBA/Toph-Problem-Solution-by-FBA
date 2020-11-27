#include<stdio.h>
int main()
{
    int arr[1000], i,n,sum;
    scanf("%d" , &n);
    for (i=0, sum=0; i<n; i++)
    {
        scanf("%d" , &arr[i]);
        sum=sum+arr[i];
    }
    printf("%d\n" , sum);
    return  0;
}
