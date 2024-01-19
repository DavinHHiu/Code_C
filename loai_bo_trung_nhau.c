#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void in(int a[],int n){
    int dem=1;
    for(int i=0;i<n;i++){
        for(int k=i-1;k>=0;k--){
            if(a[i]==a[k]) dem++;
        }
        if(dem==1) printf("%d ",a[i]);
        dem=1;
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(a,n);
    in(a,n);
}