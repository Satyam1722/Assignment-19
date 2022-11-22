#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100],w1[20],w2[20];
    int i,s=0,e=0,count=0;
    printf("enter string : ");
    fflush(stdin);
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    printf("enter 1 words : ");
    fflush(stdin);
    scanf("%s",w1);
    printf("enter 2 words : ");
    fflush(stdin);
    scanf("%s",w2);


    char* token=strtok(str," ");
    while(token!=NULL)
        {
            printf("%s %s\n",token,w1);
            if(strcmp(token,w1)==0)
                    s=count;
                    printf("%d    \n",s);
            printf("%s %s\n",token,w2);
            if(strcmp(token,w2)==0)
                    e=count;
                    printf("%d    \n",e);
            token=strtok(NULL," ");
            count++;
        }

    printf("Shortest distance is %d ",e-s-1);

    return 0;

}

