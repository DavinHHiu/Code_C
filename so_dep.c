#include<stdio.h>
void sodep(long long n){
    int a,s;
    a=n%10;
    for(;n>0;n/=10){
        s=n%10;
    }
    if(s==a*2 || a==s*2) printf("YES\n");
    else printf("NO\n");
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        sodep(n);
    }
}
