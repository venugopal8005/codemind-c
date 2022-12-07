#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    
    while(n!=0){
        int y=t;
        while(y!=0){
            printf("%d ",y);
            y--;
        }
        printf("
");
        n--;
        
    }
}