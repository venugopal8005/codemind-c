#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int y=n;
    int t=1;
    int i=1;
    while(n!=0){
       while(t<=i){
           printf("*");
           t++;
       }
       
       printf("
");
       t=1;
       i++;
       n--;
    }
}