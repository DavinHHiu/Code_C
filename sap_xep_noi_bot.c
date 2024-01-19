#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void swap(int *a,int *b){
    int temp=*a;
        *a=*b;
        *b=temp;
}
void sort(int a[],int n){
    int s=1;
    for(int i=0;i<n-1;i++){
        int b=0;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                b=1;
            }
        }
        if((i<n-2 && b==1) || i==0){
            printf("Buoc %d: ",s); s++;
            for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
        printf("\n");
       }
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(a,n);
    sort(a,n);
}