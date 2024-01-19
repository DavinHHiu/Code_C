#include<stdio.h>
void phanTich(long long n){
    int i=2;
    while(n>1){
        if(n%i==0){
             printf("%d ",i);
             n/=i;
        }
        else i++;
    }
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        phanTich(n);
        printf("\n");
    }
}