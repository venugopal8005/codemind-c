#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i,cn=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(n==c)
        {
            cn++;
            break;
        }
        a=b;
        b=c;
    }
    if(cn==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}