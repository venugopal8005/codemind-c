#include<stdio.h>
int main(){
    float n;
    scanf("%f",&n);
    float i;
    float sum=0.0;
    for(i=1.0;i<=n;i++){
        sum=sum+(1/i);
    }
    printf("%0.2f",sum);
}