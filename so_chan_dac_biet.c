#include<stdio.h>
void chandb(long long n){
    int a;
    long long s;
    for(;n>0;n/=10){
        a=0;
        s=n%10;
        if(s%2!=0){
            printf("NO\n");
            a=1;
            break;
        }
    }
    if(a==0) printf("YES\n");
    
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        chandb(n);
    }
}
