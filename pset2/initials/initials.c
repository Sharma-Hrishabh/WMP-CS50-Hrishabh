#include<cs50.h>
#include<stdio.h>

int main()
{
    char a[100],x[20];
    int count=0,i,j=0;
    gets(a);
printf("\n");
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]!=' ') && count==0)
        {
            x[j]=a[i];
            count++;
            j++;


        }
        else if (a[i]==' '){ count=0;}


    }
x[j]='\0';


for(i=0;x[i]!='\0';i++)
{
if(islower(x[i]))
x[i]=toupper();


}
for(i=0;x[i]!='\0';i++)
{
    printf("%c",x[i]);
}
printf("\n");



return 0;
}