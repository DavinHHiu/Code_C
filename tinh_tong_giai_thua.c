#include<stdio.h>
long long giaithua(int n){
    if(n==0 || n==1) return 1;
    return n*giaithua(n-1);
}
long long tong(int n){
    long long s=0;
    for(int i=1;i<=n;i++){
        s+=giaithua(i);
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",tong(n));
}
