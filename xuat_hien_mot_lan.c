#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
/*int  damn(int a[],int n){
    int s=1,dem=0,cac=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]) s++;
        }
        for(int k=i-1;k>=0;k--){
           if(a[i]==a[k]) dem++;
        }
        if(dem==0 && s>1) {
            cac++;
        }
        s=1; dem=0;
    } 
    return cac;
}*/    
void tanSo(int a[],int n){
    int s=1,dem=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]) s++;
        }
        for(int k=i-1;k>=0;k--){
           if(a[i]==a[k]) dem++;
        }
        if(dem==0 && s==1) {
            printf("%d ",a[i]);
            
        }
        s=1; dem=0;
    }   
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(a,n);
    tanSo(a,n);
}