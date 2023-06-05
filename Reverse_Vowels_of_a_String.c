#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int i,l=strlen(a),k,max=l-1;
    for(i=0;i<l;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='u' ||a[i]=='i' || a[i]=='A'|| a[i]=='E'||a[i]=='U'||a[i]=='I'||a[i]=='O')
        {
            for(k=max;k>=0;k--)
            {
                if(a[k]=='a' || a[k]=='e' || a[k]=='o' || a[k]=='u' ||a[k]=='i' || a[k]=='A'|| a[k]=='E'||a[k]=='U'||a[k]=='I'||a[k]=='O')
                {
                    printf("%c",a[k]);
                    max=k-1;
                    break;
                }
            }
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}