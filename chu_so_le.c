#include<stdio.h>
int chan(long long n){
    int a=0;
    for(;n>0;n/=10){
        if(n%2==0){
            a++;
        }
    }
    return a;
}
int le(long long n){
    int a=0;
    for(;n>0;n/=10){
        if(n%2!=0){
            a++;
        }
    }
    return a;
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%d ",le(n));
    printf("%d",chan(n));
}
