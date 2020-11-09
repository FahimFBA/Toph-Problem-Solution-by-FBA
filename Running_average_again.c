#include<stdio.h>
int main()
{

int i,n,a;
float sum=0, ans;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    sum=sum+a;
    ans=sum/i;
    printf("%f ",ans);
}
return 0;
}