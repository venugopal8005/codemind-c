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
    int max=0;
    while(i<=t){
      if(i%2==0){
          max=max+ar[i];
      }
       i++;
    }
    printf("%d",max);
    
}