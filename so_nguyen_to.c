#include<stdio.h>
void getAr(long long *a,int n){
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
}
void nguyenTo(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("NO\n");
            n=-10;
            break;
        }
    }
    if(n!=-10) printf("YES\n");
}
int main(){
    long long a[100];
    int n;
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        nguyenTo(a[i]);
    }
}
