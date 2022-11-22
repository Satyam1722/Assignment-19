#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[20];
    int i,x,count=0;
    printf("enter IP Address : ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';

    char* token = strtok(str,".");


    while (token != NULL)
        {
            for(i=0; token[i]; i++)
                {
                    if(token[i]<'0' || token[i]>'9')
                        {
                            printf("Not Valid");
                            exit(0);
                        }

                }

            int x=atoi(token);
            if(x<0 || x>255)
                {
                    printf("Not Valid");
                    exit(0);
                }

            token = strtok(NULL, ".");
            count++;


        }
    if(count==4)
        {
            printf("Valid");
        }

    return 0;

}
