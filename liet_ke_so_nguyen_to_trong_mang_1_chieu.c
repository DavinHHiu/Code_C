#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d", a+i);
    }
}
int nguyenTo(int n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int a[100],n,dem=0;
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        if(nguyenTo(a[i])) dem++;
    }
    printf("%d ",dem);
    for(int i=0;i<n;i++){
        if(nguyenTo(a[i])) printf("%d ",a[i]);
    }
}
