#include<stdio.h>
void getAr(long long *a,int n){
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
}
void check(long long n){
    int s,a;
    s=n%10;
    for(;n>0;n/=10){
        if(n>0) a=n;
    }
    if(s==a) printf("YES\n");
    if(s!=a) printf("NO\n");
}
int main(){
    long long a[100];
    int n;
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        check(a[i]);
    }
}
