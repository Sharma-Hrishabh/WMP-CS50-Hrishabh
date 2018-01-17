#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, string argv[])
{

char x,y;
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }

        else {

            char code[50];
    printf("plain text: ");
    gets(code);
    int n=strlen(code);
    int m=strlen(argv[1]);
        int i,j=0;
printf("ciphertext: ");


          for(i=0,j=0;i<n;i++,j++)
           {



                if (islower(code[i]))
                    {if(isupper(argv[1][j]))
                        { argv[1][j]=tolower();}
                        x=(((code[i] - 97) + (argv[1][j%m] -97 ) ) % 26 )+ 97;
                        printf("%c",x);}
                else if (isupper(code[i]))

            {


                if(islower(argv[1][j]))
                         {argv[1][j]=toupper();}
               y=(((code[i]  - 65) + (argv[1][j%m]-65) )% 26 )+ 65;

                        printf("%c",y);
}
                else
                    {printf("%c", code[i]);}





            }
            printf("\n");
            return 0;
    }
}


