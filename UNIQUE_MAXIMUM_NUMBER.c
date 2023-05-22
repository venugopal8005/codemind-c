#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c,s=0,z=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            if(s<a[i])
            {
                s=a[i]; z++;
        }
    }
}
if(z==0)
{
    printf("-1");
}
else
{
    printf("%d",s);
}
}