#include<stdio.h>
#include<math.h>
int tongcs(long long n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    return s;
}
int phanTich(long long n){
    int i=2,a,s=0;
    while(n!=1){
        while(n%i==0){
            a=i/10;
            if(a>1) s+=tongcs(i);
            else s+=i;
            n/=i;
        }
        i++;
    }
    return s;
}
int main(){
    long long n;
    scanf("%lld",&n);
    if(tongcs(n)==phanTich(n)) printf("YES\n");
    else printf("NO\n");
}