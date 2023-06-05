#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],c='v';
    scanf("%[^
]s",x);
    int l=strlen(x),j,C,V;
    for(j=0;j<l;j++)
    {
        if(x[j]=='a' || x[j]=='e' || x[j]=='i' || x[j]=='o' || x[j]=='u')
        {
            if(c!='V')
            {
                printf("V");
                c='V';
            }
        }
        else
        {
            if(c!='C')
            {
                printf("C");
                c='C';
            }
        }
    }
}