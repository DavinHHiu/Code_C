#include<stdio.h>
void hcn(int m,int n){
    for(int i=1;i<=m;i++){
        if(m<=n){
            for(int j=i;j<=n;j++){
                printf("%d",j);
            }
            for(int k=n-1;k>n-i;k--){
                printf("%d",k);
            }
            printf("\n");
        }
        if(m>n){
            if(i<=n){
                for(int j=i;j<=n;j++){
                    printf("%d",j);
                }
                for(int k=n-1;k>n-i;k--){
                    printf("%d",k);
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
