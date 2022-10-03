#include<stdio.h>
#include<string.h>
int palStr(char[]);
int main()
{
    char str[30];
    printf("Enter an string ");
    gets(str);
    palStr(str);
    return 0;
}

int palStr(char str[])
{   int count=0;
    int n=strlen(str);
    int i;
    for(i=0;i<n/2;i++)
    {
        if(str[i]==str[n-1-i])
            count++;
    }

    if(count==i)
        printf("string is palindrome");
    else
        printf("Not palindrome");


}
