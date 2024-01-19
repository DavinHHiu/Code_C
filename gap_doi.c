#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d", a+i);
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]*2);
    }
}
