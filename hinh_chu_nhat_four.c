#include<stdio.h>
void hcn(int m,int n){
    for(int i=1;i<=m;i++){
        if(m<=n){
            for(int j=n-i+1;j>0;j--){
                printf("%d",j);
            }
            for(int k=2;k<=i;k++){
                printf("%d",k);
            }
            printf("\n");
        }
        if(m>n){
            if(i<=(m-n)){
                for(int k=m-i+1;k>=n-i;k--){
                    printf("%d",k);
                }
            }
            if(i>(m-n)){
                for(int j=n-i+3;j>0;j--){
                printf("%d",j);
                }
                for(int k=2;k<=i-2;k++){
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
