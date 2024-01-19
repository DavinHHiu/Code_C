#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d", a+i);
    }
}
void max(int a[],int n){
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
    printf("%d ",a[0]);
    for(int i=0;i<n;i++){
       if(a[i]<a[0]){
          printf("%d",a[i]);
          break;
       }
    }
}

int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(&a,n);
    max(a,n);
}
