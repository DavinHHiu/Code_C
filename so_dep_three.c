#include<stdio.h>
long long reverse(long long n){
    long long s,a=0;
    for(;n>0;n/=10){
        s=n%10;
        a=a*10+s;
    }
    return a;
}
int six(long long n){
    int s,a=0;
    for(;n>0;n/=10){
        s=n%10;
        if(s==6) a++;
    }
    if(a==0) return 0;
    return 1;
}
int sum(long long n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    if(s%10==8) return 1;
    return 0;
}
int main(){
    long long a,b,temp;
    scanf("%lld %lld",&a,&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(long long i=a;i<=b;i++){
        if(six(i)){
            if(i==reverse(i)){
                if(sum(i)) printf("%lld ",i);
            }
        }
    }
}