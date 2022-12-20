#include<stdio.h>
int main()
{
    int n,j,s=0,i;
    scanf("%d",&n);
    j=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==j)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}