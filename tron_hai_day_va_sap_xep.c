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
void tronxep(int a[],int b[],int n){
    int c[100],k=0,h=1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(&a[i],&a[j]);
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]<b[j]) swap(&b[i],&b[j]);
        }
    }
    for(int i=0;i<n;i++){
        c[k]=a[i];
        k+=2;
    }
    for(int i=0;i<n;i++){
        c[h]=b[i];
        h+=2;
    }
    for(int i=0;i<n*2;i++){
        printf("%d ",c[i]);
    }
}
int main(){
    int t,a[100],b[100],n,s=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getAr(a,n);
        getAr(b,n);
        printf("Test %d:\n",s);
        tronxep(a,b,n);
        printf("\n");
        s++;
    }
}