#include<stdio.h>
int rev(int x)
{
    int s=0,t,r;
    t=x;
    while(t)
    {
        r=t%10;
        s=s*10+r;
        t/=10;
    }
    t=s+x;
    return t;
}
int pal(int y)
{
    int d=0,g,r;
    g=y;
    while(g)
    {
        r=g%10;
        d=d*10+r;
        g/=10;
    }
    if(d==y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,k;
    scanf("%d",&a);
    k=rev(a);
    while(!pal(k))
    {
        k=rev(k);
    }
    printf("%d",k);
}