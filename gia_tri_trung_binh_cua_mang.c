#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
double tb(int a[],int n){
    double s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    return s/n;
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(a,n);
    printf("%.3lf",tb(a,n));
}