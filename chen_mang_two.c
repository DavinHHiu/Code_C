#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void chen(int a[],int b[],int m,int n,int c){
    for(int i=m-c-1;i>=0;i--){
        a[c+n+i]=a[c+i];
    }
    for(int i=0;i<n;i++){
        a[c+i]=b[i];
    }
    for(int i=0;i<m+n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int t,m,n,c,a[100],b[100],s=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
        scanf("%d",&n);
        scanf("%d",&c);
        getAr(a,m);
        getAr(b,n);
        printf("Test %d:\n",s);
        chen(a,b,m,n,c);
        printf("\n");
        s++;
    }
}