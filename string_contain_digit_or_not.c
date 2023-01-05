#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char n[100001];
    int count=0;
    fgets(n, sizeof(n), stdin);
    
    for(int i=0;n[i]!=NULL;i++){
        if(n[i]<=57&&n[i]>=48){
            count++;
        }
    }
    if(count>0){
        printf("Contains %d digit",count);
    }
    else{
        printf("Doesn't contain digit");
    }
}