#include<stdio.h>
void getAr(long long *a,int n){
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
}
long long tong(long long n){
    return (n+1)*n/2;;
}
int main(){
    int n;
    long long a[100];
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        printf("%lld\n",tong(a[i]));
    }
}
