#include<stdio.h>
int toUpper(char[]);

int main()
{
    char str[30];
    printf("Enter an string ");
    fgets(str,30,stdin);
    toUpper(str);

    return 0;

}

int toUpper(char str[])
{
for(int i=0;str[i];i++)
        {
            if(str[i]>=97&&str[i]<=122)
                 str[i]=str[i]-32;

        }


    printf("%s",str);

}


