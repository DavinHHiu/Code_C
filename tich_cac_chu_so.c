#include<stdio.h>
int tichchuso(int n){
    int s=1;
    for(;n>0;n/=10){
        s*=n%10;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",tichchuso(n));
}
