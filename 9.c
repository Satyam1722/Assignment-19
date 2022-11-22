#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);

}

int main()
{
    char str[6][20]= {"satyam","shantanu","aayush","abhay","sagal","madhur"},u[20];
    int i,n;

    printf("enter your username: ");
    fflush(stdin);
    scanf("%s",u);



    for(i=0; i<6; i++)
        {
            if(strcmp(str[i],u)==0)
                {
                    printf("Hello %s \n",u);
                    printf("\nenter the number : ");
                    scanf("%d",&n);
                    printf("factorial is : %d",fact(n));
                    exit(0);
                }
        }
        printf("\nError!!");

    return 0;

}


