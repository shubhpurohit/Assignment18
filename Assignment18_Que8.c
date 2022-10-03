#include<stdio.h>
int countWord(char[]);

int main()
{
    char str[30];
    printf("Enter an string ");
    fgets(str,30,stdin);
    countWord(str);

    return 0;

}

int countWord(char str[])
{
    int i,count=0;
    for(i=0;str[i];i++)
        {
            if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
                count++;
        }

    printf("Number of words is %d",count);

}

