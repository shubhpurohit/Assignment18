#include<stdio.h>
int toLower(char[]);

int main()
{
    char str[30];
    printf("Enter an string ");
    fgets(str,30,stdin);
    toLower(str);

    return 0;

}

int toLower(char str[])
{
for(int i=0;str[i];i++)
        {
            if(str[i]>=65&&str[i]<=90)
                 str[i]=str[i]+32;

        }


    printf("%s",str);

}


