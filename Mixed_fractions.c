#include <stdio.h> 
int main() 
{ 
    int a,b,rem,div;
    scanf("%d%d" , &a, &b);
    div=a/b;
    rem=a%b;
    printf("%d %d %d\n" , div, rem,b);

}