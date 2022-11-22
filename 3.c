#include<stdio.h>
#include<string.h>


int main()
{
    char s[10][100];
    int i,j;
    printf("enter 10 string : \n");
    for(i=0; i<10; i++)
        {
            fflush(stdin);
            fgets(s[i],100,stdin);
            s[i][strlen(s[i])-1]='\0';
        }



    printf("String are : \n ");

    for(i=0; i<10; i++)
        printf("%s\n",s[i]);

    return 0;

}


