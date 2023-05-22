#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c,r,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(a[i]>0)
        {
            r=a[i]%10;
            c++;
            a[i]=a[i]/10;
        }
        if(c%2==0)
        {
            s++;
        }
    }
    printf("%d",s);
}