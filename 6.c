#include<stdio.h>
#include<string.h>


int main()
{
    int i,j,n,f;
    printf("enter no. of string\n");
    scanf("%d",&n);
    char s[n][100],temp[100];
    printf("enter %d string : \n",n);
    for(i=0; i<n; i++)
        {
            fflush(stdin);
            fgets(s[i],100,stdin);
            s[i][strlen(s[i])-1]='\0';
        }


   printf("\n\nPalindrome string is : \n");

    for(i=0; i<n; i++)
        {
            strcpy(temp,s[i]);
            strrev(temp);
            if(strcmp(temp,s[i])==0)
                printf("%s\n",s[i]);

        }



    return 0;

}




