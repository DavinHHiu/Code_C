#include<stdio.h>
void hbh(int n){
    for(int i=0;i<n;i++){
        for(int k=1;k<n-i;k++){
            printf("~");
        }
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    hbh(n);
}
