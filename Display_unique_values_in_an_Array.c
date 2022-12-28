    #include<stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int t=n-1;int i;int count=0;int count1=0;
        int arry[t];
        for(i=0;i<=t;i++){
            scanf("%d",&arry[i]);
        }
        for(i=0;i<=t;i++){
            for(int j=0;j<=t;j++){
                if(arry[i]==arry[j]){
                    count++;
                }
            }
            if(count==1){
                printf("%d ",arry[i]);
                count1++;
            }
        
            count=0;
        }
        if(count1==0){
            printf("%d",-1);
        }
    }