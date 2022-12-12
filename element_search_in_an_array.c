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
    int k;
    scanf("%d",&k);
    i=0;
    int max=0;
    int sum=0;
    while(i<=t){
        if(ar[i]==k){
           max++;
        }
       
       i++;
    }
   if(max>0){
       printf("True");
       
   }
   else{
       printf("False");
   }
    
}
    
