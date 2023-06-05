#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || j==n-i+1)
            {
                printf("%d ",n-i+1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}