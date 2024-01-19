#include<stdio.h>
void hbhnr(int m,int n){
    for(int i=0;i<m;i++){
        for(int k=0;k<i;k++){
            printf("~");
        }
        for(int j=0;j<n;j++){
            if(i>0 && i<m-1 && j<n-1 && j>0) printf(".");
            else printf("*");
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    hbhnr(m,n);
}
