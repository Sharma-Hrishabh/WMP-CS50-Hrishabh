#include <stdio.h>
#include<cs50.h>
int main()
{
    long long int num,x,y,z,q;
    int k,len=0,m,l,sum=0,o,a,sd,fd;
    again:
    printf("Number : ");
    k=scanf("%lld",&num);
    if(k!=1)
    {goto again; }
    x=num;
    y=num;
z=num;
q=num;
    do
    {l=x%100;
    l=l%10;
        sum=sum+l;
 x=x/100;

    }
    while(x>0);

    do{
        m=y%100;
    m=m/10;
    m=m*2;
    if(m>10)
    {
        while(m>0){
            o=m%10;
            m=m/10;
            sum=sum+o;
        }
    }
    else if (m==10)
    {sum=sum+1;}
    else if (m<10) {sum=sum+m;}
    y=y/100;


    }
    while (y>0);


while(z>0)
{
    z=z/10;
    ++len;
}



while(q>0)
    {a=q%10;
    if(q>10)
    {
        sd=a;
    }
    else {fd=a;}
    q=q/10;
    }





if(len==15)
{



    if(fd==3 && (sd==4 || sd==7))

        printf("AMEX\n");
    else printf("INVALID\n");
        }
else if(len==16)
{

    if(fd==5)
    {
        if(sd==1 || sd==2 || sd==3 || sd==4 || sd==5)
        printf("MASTERCARD\n");
        else printf("INVALID\n");
    }

    else if (fd==4)
    {printf("VISA\n");}
     else if (fd!=4 || fd!=5){printf("INVALID\n");}
    }

    else if(len==13)
    {
    if(fd==4)
    printf("VISA\n");
    else printf("INVALID\n");

}

    else if(len!=15 || len!=13 || len!=16)  printf ("INVALID\n");


return 0;

}
































