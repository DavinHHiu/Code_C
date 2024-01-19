#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d", a+i);
    }
}
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    getAr(&a,n);
    for(int i=0;i<n;i++){
        printf("%.15f\n",1.0/a[i]);
    }
}
