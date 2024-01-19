#include<stdio.h>
void getAr(long long *a,int n){
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
}
void check(long long n){
    for(long long i=1;i*i<=n;i++){
        if(n==i*i){
                printf("YES\n");
                n=-5;
                break;}

    }
        if(n!=-5) printf("NO\n");
}
int main(){
    long long  a[100];
    int n;
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        check(a[i]);
    }
}
