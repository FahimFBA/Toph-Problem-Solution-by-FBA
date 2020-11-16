#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    scanf("%s" , &str1);
    scanf("%s" , &str2);
    int m,n;
    //If the length of the both string aren't stand as equal, then is surely won't be anagram !
    m=strlen(str1);
    n=strlen(str2);
    if (m!=n) printf("No\n");
    

    //The length of the both string are the same? Well then, I have to chack each character of them now!

     //I'll just sort both of the string at first
    else
    {

    
    
     int i,j,temp;
     for (i=0; i<m-1;i++)
     {
         for (j=i+1;j<m;j++)
         {
             if (str1[i]>str1[j])
             {
                 temp=str1[i];
                 str1[i]=str1[j];
                 str1[j]=temp;
             }
             if (str2[i]>str2[j])
             {
                 temp=str2[i];
                 str2[i]=str2[j];
                 str2[j]=temp;
             }
         }
     }
     //I will compare both of the strings character by character to check whether they both are anagram or not

     for (i=0; i<m;i++)
     {
         if (str1[i]!=str2[i])
         {
             printf("No\n");
             return 0;
         }
         
         
     }
        printf("Yes\n");
    }
        return 0;
}