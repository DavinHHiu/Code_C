#include<stdio.h>
long long reverse(long long n){
    long long s,a=0;
    for(;n>0;n/=10){
        s=n%10;
        a=a*10+s;
    }
    return a;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        if(n==reverse(n)) printf("YES\n");
        else printf("NO\n");
    }
}