#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n-1;
    float ar[t];
    int  i=0;
    while(i<=t){
        scanf("%f",&ar[i]);
        i++;
    }
    i=0;
    float max=0;
    while(i<=t){
        max=max+ar[i];
       i++;
    }
    printf("%0.2f",max/n);
    
}