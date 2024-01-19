#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void sort(int a[],int n){
    int temp,b[100],j=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
        }
    }
     for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            b[j]=a[i];
            j++;
        }
    }
    for(int k=0;k<j;k++){
        printf("%d ",b[k]);
    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    getAr(a,n);
    sort(a,n);
}