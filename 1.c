#include<stdio.h>
#include<string.h>


int main()
{
    char s[5][100],i,c,j;
    printf("enter 5 string : \n");
    for(i=0; i<5; i++)
        {
            fflush(stdin);
            fgets(s[i],100,stdin);
            s[i][strlen(s[i])-1]='\0';
        }


    for(i=0; i<5; i++)
        {
            c=0;
            for(j=0; j<strlen(s[i]); j++)
                {
                    if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u' || s[i][j]=='A' || s[i][j]=='E' || s[i][j]=='I' || s[i][j]=='O' || s[i][j]=='U')
                        c++;



                }
            printf("String %d : %d vowels\n",i+1,c);
        }

    return 0;

}
