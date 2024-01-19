#include<stdio.h>
void hcn(int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>0 && i<m-1 && j>0 && j<n-1) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    hcn(n,m);
}
