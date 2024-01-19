#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void sortup(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(&a,n);
    sortup(a,n);
}
