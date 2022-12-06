#include<stdio.h>
int prime(int n);
int pali(int n);
int main(){
    int t;
    scanf("%d",&t);
    int n=t+1;
    while (1)
    {
        int p=prime(n);
    int pa=pali(n);
    if (p==1&&pa==1)
    {
        printf("%d",n);
        break;
    }
    else
    {
        n++;
    }
    
    
    }
    
    // printf("%d %d",p,pa);

}
int prime(int n){
    int t=n;
    int count=0;
    while (t!=0)
    {
        if (n%t==0)
        {
            count++;
        }
        t--;
    }
    if (n==1)
    {
        return 0;
    }
    else if (count>2)
    {
        return 0;
    }
    else
    {
        return 1;
    }  
}
int pali(int n){
    int r;
    int sum=0;
    int t=n;
    while (n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if (t==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
    
}

