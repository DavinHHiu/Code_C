#include<stdio.h>
void hbhn(int m,int n){
    for(int i=0;i<m;i++){
        for(int k=0;k<i;k++){
            printf("~");
        }
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    hbhn(m,n);
}
