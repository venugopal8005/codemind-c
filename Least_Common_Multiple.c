#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    i=(a>b) ? a:b;
    int  m;
    if(a>b)
    {
        m=a;
    }
    else
    {
        m=b;
    }
    for(i;i<=a*b;i+=m)
    {
        if(i%a==0 && i%b==0)
        break;
    }
    printf("%d",i);
}