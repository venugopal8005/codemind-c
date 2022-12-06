#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1,sum=0;
    while(i<=n-1){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    printf("%d",sum);
}