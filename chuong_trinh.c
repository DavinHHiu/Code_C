#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void tanSo(int a[],int n){
    int s=0,dem=0,b=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]) s++;
        }
        for(int k=i-1;k>=0;k--){
           if(a[i]==a[k]) dem++;
        }
        if(dem==0 && s>0) {
            printf("%d ",a[i]);
            b++;
        }
        s=0; dem=0;
    }   
    if(b==0) printf("0");
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(a,n);
    tanSo(a,n);
}