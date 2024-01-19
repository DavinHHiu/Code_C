#include<stdio.h>
long long reverse(long long n){
    long long s,a=0;
    for(;n>0;n/=10){
        s=n%10;
        a=a*10+s;
    }
    return a;
}
int tongcs(long long n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    if(s%2==0) return 0;
    return 1;
}
int check(long long n){
    for(;n>0;n/=10){
        int s;
        s=n%10;
        if(s%2==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        if(n==reverse(n) && tongcs(n) && check(n)) printf("YES\n");
        else printf("NO\n");
    }
}
