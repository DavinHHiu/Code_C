
#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void dich(int a[],int n,int d){
    for(int i=0;i<d;i++){
        a[n+i]=a[i];
    }
    for(int i=d;i<n+d;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[100],n,d;
    scanf("%d",&n);
    getAr(a,n);
    scanf("%d",&d);
    dich(a,n,n-d);
}