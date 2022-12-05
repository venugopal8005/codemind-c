#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    int r,sum=0;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
 if(t==sum){
     printf("Palindrome");
 }
 else{
     printf("Not Palindrome");
 }
}