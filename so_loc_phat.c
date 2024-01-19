#include<stdio.h>
void getAr(long long *a,int n){
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
}
void check(long long n){
    for(;n>0;n/=10){
        if(n%10!=0 && n%10!=6 && n%10!=8){
            printf("NO\n");
            n=-5;
            break;
        }
    }
    if(n!=-5) printf("YES\n");
}
int main(){
    int n;
    long long a[100];
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        check(a[i]);
    }
}
