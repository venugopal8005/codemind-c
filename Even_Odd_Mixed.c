#include<stdio.h>
int main()
{
int n,count=0,count2=0;
scanf("%d",&n);
int temp=n,r;
while (temp!=0)
{
    r=temp%10;
    temp=temp/10;
    if (r%2==0)
    {
        count++;
    }
    if (r%2!=0)
    {
        count2++;
    }
    
    
}
if (count>0&&count2>0)
{
    printf("Mixed");
}
else if (count>0)
{
    printf("Even");
}
else if (count2>0)
{
    printf("Odd");
}





    return 0;
}
