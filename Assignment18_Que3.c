#include<stdio.h>
#include<string.h>
int cmpStr(char[],char[]);

int main()
{
    char str1[30],str2[30];
    printf("Enter string 1 ");
    fgets(str1,30,stdin);
    printf("Enter string 2 ");
    fgets(str2,30,stdin);

    cmpStr(str1,str2);

    return 0;
}

int cmpStr(char s1[],char s2[])
{   int n1,n2,x,count=0;
    n1=strlen(s1);
    n2=strlen(s2);
    x=n1>n2?n1:n2;
    for(int i=0;i<x;i++)
        if(s1[i]==s2[i])
            count++;

    if(count==x)
        printf("Strings are same ");
    else
        printf("not same");
}

