#include<stdio.h>
int add(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int s;
    while (1)
    {
        s=add(n);
        if (s<10)
        {
            printf("%d",s);
            break;
        }
        else
        {
            n=s;
        }
        
        
    }
    

    
    return 0;
}
int add(int n){
    int r;
    int sum=0;
    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
    
}
