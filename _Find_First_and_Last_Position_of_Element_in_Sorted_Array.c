#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,f=-1,l=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int n1;
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        if(a[i]==n1)
        {
            f=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==n1)
        {
            l=i;
            break;
        }
    }
    printf("%d %d",f,l);
}