#include<stdio.h>
void phanTich(long long n){
    int i=2,d=0;
    long long b=n;
    while(n!=1){
        int a=0,s=0;
        while(n%i==0){
            n/=i;
            s++;
            a=1;
        }
        if(a==1 && d!=1) printf("%lld = ",b);
        if(a==1) printf("%d^%d",i,s);
        if(n!=1 && a==1){
            printf(" * ");
            d=1;
        }
        i++;
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