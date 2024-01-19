#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void chen(int a[],int b[],int c,int m,int n){
    for(int i=0;i<m-c;i++){
       a[c+i+n]=a[i+c];
    }
    for(int i=0;i<n;i++){
        a[i+c]=b[i];
    }
    for(int i=0;i<m+n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[100], b[100],m,n,c;
    scanf("%d%d",&m,&n);
    scanf("%d",&c);
    getAr(a,m);
    getAr(b,n);
    chen(a,b,c,m,n);
    return 0;
}