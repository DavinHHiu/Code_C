#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d", a+i);
    }
}

void tanSo(int a[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
           if(a[i]==a[j]) s++;
        }
        if(s>0) printf("%d",a[i]);
        s=0;
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(&a,n);
   tanSo(a,n);
}
