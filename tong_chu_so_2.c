#include<stdio.h>
void getAr(long long *a,int n){
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
}
int sum(long long n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    return s;
    s=0;
}
int main(){
    int n;
    long long a[100];
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        printf("%d\n",sum(a[i]));
    }
}
