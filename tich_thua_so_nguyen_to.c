#include<stdio.h>
#include<math.h>
int nguyenTo(long n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int phanTich(long n){
    int i=2,t=1;
    if(nguyenTo(n)) return n;
    while(n!=1){
        int s=0;
        while(n%i==0){
            n/=i;
            s=1;
        }
        if(s==1) t*=i;
        i++;
    }
    return t;
}
int main(){
    int t;
    long n;
    scanf("%d",&t);
    while(t--){
        scanf("%ld",&n);
        printf("%d\n",phanTich(n));
    }
}