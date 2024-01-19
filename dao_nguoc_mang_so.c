#include<stdio.h>
void in(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void reverse(int a[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    in(a,n);
    reverse(a,n);
    return 0;
}
