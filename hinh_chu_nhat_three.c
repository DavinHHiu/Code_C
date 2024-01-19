#include<stdio.h>
void hcn(int m,int n){
    for(int i=1;i<=m;i++){
        if(m<=n){
            if(i>1){
                for(int k=i;k>1;k--){
                    printf("%d",k);
                }
            }
            for(int j=1;j<=n-i+1;j++){
                printf("%d",j);
            }
            printf("\n");
        }
        if(m>n){
            if(i<=n){
                if(i>1){
                    for(int k=i;k>1;k--){
                        printf("%d",k);
                    }
                }
                for(int j=1;j<=n-i+1;j++){
                    printf("%d",j);
                }
            }
            if(i>n){
                for(int k=i;k>i-n;k--){
                        printf("%d",k);
                }
            }
            printf("\n");
        }
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    hcn(m,n);
}
