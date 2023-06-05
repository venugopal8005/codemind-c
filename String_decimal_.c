#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c=0,c1=0;
    char a[100];
    for(i=1;i<=n;i++)
    {
        scanf("
");
        scanf("%s",a);
        c=0;
        c1=0;
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]>='0' && a[j]<='9')
            {
                c+=1;
            }
            if(a[j]!=' ')
            {
                c1+=1;
            }
        }
        if(c1==c)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}