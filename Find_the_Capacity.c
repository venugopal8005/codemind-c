#include<stdio.h>
int main(){
    int n,m,l;
    scanf("%d%d%d",&n,&m,&l);
    int c=2*n*m*l*512;
    int k=c/1024;
    printf("%dKB",k);
}