#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


 int main(int argc, string argv[])
 {char x,y;

    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }

        int k = atoi(argv[1]);


    if (k < 0)
    {
        printf("Nope\n");
        return 1;
    }
    else
    {char code[50];
    printf("plain text: ");
    gets(code);
    int n=strlen(code);
    int i;
printf("ciphertext: ");
                for (i=0;i<n; i++)
            {
               x=(((code[i] - 97) + k ) % 26 )+ 97;
               y=(((code[i] + k) - 65) % 26 )+ 65;

                if (islower(code[i]))
                    printf("%c",x);
                else if (isupper(code[i]))
                    printf("%c",y);

                else
                    printf("%c", code[i]);
            }
            printf("\n");
            return 0;
    }
}