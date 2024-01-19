#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void dem(int a[],int n){
    int b=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int k=i-1;k>=0;k--){
            if(a[i]<a[k]){
               s=1;
            }
        }
        if(s==0) b++;
    }
    printf("%d",b);
}
int main(){
    int t,a[100],n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getAr(a,n);
        dem(a,n);
        printf("\n");
    }
}