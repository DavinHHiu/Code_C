#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++)
    scanf("%d", a+i );
}
void deSort(int a[],int n){
    int temp=0;
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
        if(a[i]<a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}


}


int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(&a,n);
    deSort(a,n);
    printf("%d ",a[n-1]);
    for(int i=n-1;i>=0;i-- ){
        if(a[i]!=a[n-1]) {
            printf("%d",a[i]);
            break;
        }
    }
}
