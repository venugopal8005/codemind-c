#include<stdio.h>
int pretty(int n);
int main(){
    int a,b;int count=0;
    int n;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d%d",&a,&b);
     while(a<=b){
         int p=pretty(a);
        if(p==1){
            count++;
        }
        a++;
         
     }
       
         printf("%d
",count);
         count=0;
     n--;
    }
   
    
}
int pretty(int n){
    int r=n%10;
    if(r==2||r==3||r==9){
        return 1;
    }
    else{
        return 0;
    }
}