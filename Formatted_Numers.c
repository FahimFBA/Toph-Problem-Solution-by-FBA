#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k=0;
    char s[200];
    char return_s[200];
    gets(s);
    for (i=strlen(s)-1; i>=0; i--)
    {
        if (j==3)
        {
            return_s[k++]=',';
            return_s[k++]=s[i];
            j=0;
        }
        else 
        
            return_s[k++]=s[i];
        
    j++;
    }
    for (i=k-1; i>=0; i--)
    {
        printf("%c" , return_s[i]);
    }
    return 0;
}