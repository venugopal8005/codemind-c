#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n-1;
    int ar[t];
    int  i=0;
    while(i<=t){
        scanf("%d",&ar[i]);
        i++;
    }
    i=0;
    int max=ar[0];
    while(i<=t){
        if(max<=ar[i]){
            max=ar[i];
        }
       i++;
    }
    printf("%d",max);
    
}