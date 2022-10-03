#include<stdio.h>
#include<string.h>
int finRep(char[]);
int main()
{
    int i,j,n;
    char str[20];
    printf("Enter an string ");
    fgets(str,20,stdin);
    finRep(str);

    return 0;

}

int finRep(char str[])
{
    int n=strlen(str);
    int freq[n];

    for(int i=0;i<n;i++)
    {
        freq[i]=1;
        for(int j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
               {
            freq[i]++;

            str[j]='0';
               }
        }
    }
fflush(stdin);
    for(int i=0;i<n;i++)
        if((str[i]!=' '&&str[i]!='0')&&(freq[i]>1))
        printf("%c - %d\n",str[i],freq[i]);


}
