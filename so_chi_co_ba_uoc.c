#include<stdio.h>
#include<math.h>
int nguyenTo(long long n){
    if(n==2) return 1;
    if(n%2==0 || n<2) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int chinhphuong(long long n){
    if(n==4) return 1;
    if(n%2==0) return 0;
    if(sqrt(n)*sqrt(n)==n && nguyenTo(sqrt(n))==1) return 1;
    return 0;
}
int main(){
    int t;
    long long a,b;
    scanf("%d",&t);
    while(t--){
        int s=0;
        scanf("%lld %lld",&a,&b);
        for(long long i=a;i<=b;i++){
            if(chinhphuong(i)==1) s++;
        }
        printf("%d\n",s);
    }
}