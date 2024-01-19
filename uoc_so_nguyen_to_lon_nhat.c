#include<stdio.h>
#include<math.h>
int nguyenTo(long n){
    if(n==2) return 1;
    if(n<2 || n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
long long uoc(long long n){
    long long x;
    for(long i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(nguyenTo(n/i)==1) return n/i;
            else if(nguyenTo(i)==1) x=i;
        }
    }
    return x;
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        printf("%lld\n",uoc(n));
    }
}