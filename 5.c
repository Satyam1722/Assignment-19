#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,n,f;
    printf("enter no. of string\n");
    scanf("%d",&n);
    char s[n][100];
    printf("enter %d string : \n",n);
    for(i=0; i<n; i++)
        {
            fflush(stdin);
            fgets(s[i],100,stdin);
            s[i][strlen(s[i])-1]='\0';
        }


   printf("\n\nOdd email are : \n");

    for(i=0; i<n; i++)
        {
            f=0;
            for(j=0; j<strlen(s[i]); j++)
                {
                    if(s[i][j]=='@')
                        {
                            f=1;
                            break;
                        }
                }
                       if(!f)
                        printf("%s\n",s[i]);
        }



    return 0;

}



