#include<stdio.h>
void check(long long n){
    int s,a=0,b=0;
    for(;n>0;n/=10){
        s=n%10;
        if(s%2==0) a++;
        else b++;
    }
    if(a>b) printf("YES\n");//neu le thi thay a<b
    else printf("NO\n");
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        check(n);
    }
}