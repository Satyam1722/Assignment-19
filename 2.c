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


    for(i=0; i<10; i++)
        {

            for(j=i+1; j<10 ; j++)
                {
                    if(strcmp(s[i],s[j])>0){

                            strcpy(temp,s[i]);
                            strcpy(s[i],s[j]);
                            strcpy(s[j],temp);
                        }

                }

        }
        printf("\n\n");

    for(i=0; i<10; i++)
        printf("%s\n",s[i]);

    return 0;

}

