#include<stdio.h>
void tgp(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf("~");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    tgp(n);
}
