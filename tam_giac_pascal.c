#include<stdio.h>
int gT(int n){
    if(n==0 || n==1) return 1;
    return n*gT(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            printf("%d ",gT(i)/(gT(k)*gT(i-k)));
        }
        printf("\n");
    }
}