#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void max(int a[],int n){
    int s=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>s) s=a[i];
    }
    printf("%d\n",s);
    for(int i=0;i<n;i++){
        if(a[i]==s) printf("%d ",i);
    }
}
int main(){
    int t,n,a[100];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getAr(a,n);
        max(a,n);
        printf("\n");
    }
}