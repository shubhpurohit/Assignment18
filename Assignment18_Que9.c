#include<stdio.h>
#include<string.h>
int revWords(char[]);

int main()
{
    char str[30];
   printf("Enter an string ");
    gets(str);
    fflush(stdin);
    revWords(str);
    return 0;
}

int revWords(char str[])
{
    char str2[30];
    int temp,n,i,j,end;
    n=strlen(str);
    end=n-1;

    int k=0;
    for(i=n-1;i>=0;i--)
    {
        if(str[i]==' '||i==0||str[i]=='\0')
        {   if(i==0)
            {
                for(j=i;j<=end;j++)
                {
                    str2[k]=str[j];
                    k++;
                }
            }
    else{
            for(j=i+1;j<=end;j++)
               {
                str2[k]=str[j];
                k++;
               }
        }
            end=i;

        }

    }

    for(i=0;i<n;i++)
        printf("%c",str2[i]);



}
