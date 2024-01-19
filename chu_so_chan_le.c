#include<stdio.h>
void getAr(long long *a,int n){
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
}
void chan(long long n){
    int s=0;
    for(;n>0;n/=10){
        if(n%2==0) s++;
    }
    printf("%d\n",s);
}
void le(long long n){
    int s=0;
    for(;n>0;n/=10){
        if(n%2!=0) s++;
    }
    printf("%d ",s);
}
int main(){
    int n;
    long long a[100];
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        le(a[i]); chan(a[i]);
    }
}
