#include<stdio.h>
#include<string.h>


int main()
{
    char s[10][100],temp[100];
    int i,j;
    printf("enter 10 string : \n");
    for(i=0; i<10; i++)
        {
            fflush(stdin);
            fgets(s[i],100,stdin);
            s[i][strlen(s[i])-1]='\0';
        }

    printf("search string : ");
    fflush(stdin);
    fgets(temp,100,stdin);
    temp[strlen(temp)-1]='\0';

    for(i=0; i<10; i++)
        {
            if(strcmp(temp,s[i])==0)
                printf("%d ",i+1);
        }



    return 0;

}


