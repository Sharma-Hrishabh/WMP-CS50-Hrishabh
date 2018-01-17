#include <stdio.h>
int main()
{


    int i,k,j,height;

   
    do
    { printf("Height : ");
        scanf("%d",&height);}
    while(height<0 || height>23);
    for(i=1;i<=height;i++)
    {

        for(k=height+1-i;k>1;k--)
        {printf(" ");

        }
        for(j=1;j<=i+1;j++)
        {
            printf("#");
        }
        printf("\n");

    }



}




