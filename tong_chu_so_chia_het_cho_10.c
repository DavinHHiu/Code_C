#include<stdio.h>
void getAr(long long *a,int n){
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
}
void check(long long n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    if(s%10==0) printf("YES\n");
    else printf("NO\n");
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
