#include<stdio.h>
int alphaNumeric(char[]);

int main()
{
    char str[30];
    printf("Enter an string ");
    fgets(str,30,stdin);
    alphaNumeric(str);

    return 0;

}

int alphaNumeric(char str[])
{
    int i,cAlpha=0,cNum=0;
    for(i=0;str[i];i++)
    {   if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
            cAlpha++;
        else if(str[i]>=48&&str[i]<=57)
            cNum++;

        if(cAlpha>=1&&cNum>=1)
            {printf("The string is alpha numeric ");
             break;
            }

    }
}
