#include<stdio.h>
int calclen(char[]);

int main()
{
    char str[30];
    printf("Enter an string ");
    fgets(str,30,stdin);
    calclen(str);

    return 0;

}

int calclen(char str[])
{
    int i;
    for(i=0;str[i];i++);
    printf("%d",i-1);
}
