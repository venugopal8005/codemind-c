#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b,c,d,max=0,i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[b];
    for(j=0;j<n;j++)
    {
        if(a[j]<max)
        {
            max=a[j];
        }
    }
    for(max;max>0;max--)
    {
        d=0;
        for(c=0;c<n;c++)
        {
            if(a[c]%max==0)
            {
                d++;
            }
        }
        if(d==n)
        {
            printf("%d",max);
            break;
        }
    }
}