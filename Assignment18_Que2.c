#include<stdio.h>
int strRev(char[]);

int main()
{
    char str[30];
    printf("Enter an string ");
    fgets(str,30,stdin);
    strRev(str);

    return 0;

}

int strRev(char str[])
{
    int i,st,end,n,temp;
    for(i=0;str[i];i++);
        n=i;

    st=0,end=n-1;

    for(i=0;i<n/2;i++)
    {
        temp=str[st+i];
        str[st+i]=str[end-i];
        str[end-i]=temp;
    }

    printf("%s",str);

}
