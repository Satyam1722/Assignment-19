#include<stdio.h>
#include<string.h>
int main()
{

    char s[3][2][20]={
          {
              "satyam","1782"
          },
          {
              "aayush","02"
          },
          {
              "shantanu","329"
          }
    };
    char user[20]="satyam";
    char pass[20]="1782";

    for(int i=0;i<3;i++){
        if(strcmp(s[i][0],user)==0 && strcmp(s[i][1],pass)==0){
            printf("Login Successful !");
            exit(0);
        }
    }
    printf("Username and Password do not match ");
    return 0;
}
