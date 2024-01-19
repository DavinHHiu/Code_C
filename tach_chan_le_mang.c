#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d", a+i);
    }
}
void split(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]%2==0) printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(a[i]%2!=0) printf("%d ",a[i]);
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(&a,n);
    split(a,n);
}
