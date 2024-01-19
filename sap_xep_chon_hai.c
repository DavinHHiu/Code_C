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
void sapxep(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]) min=j;
        }
        swap(&a[min],&a[i]);
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
        printf("\n");
    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    getAr(a,n);
    sapxep(a,n);
}