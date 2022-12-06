#include<stdio.h>
#include<math.h>
int prime(int x)
{
    int i,c=0;
    if(x==1)
    {
        c=1;
    }
    for(i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    if(c>1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a,b,cn=0,j;
    scanf("%d%d",&a,&b);
    for(j=a;j<=b;j++)
    {
        if(prime(j))
        {
            cn++;
        }
    }
    printf("%d",cn);
}