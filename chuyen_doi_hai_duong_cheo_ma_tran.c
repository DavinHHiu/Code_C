#include<stdio.h>
void getAr(int a[][100],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void swap(int *a,int *b){
    int temp=*a;
        *a=*b;
        *b=temp;
}
void cheo(int a[][100],int n){
    int j=1,k=n;
    for(int i=1;i<=n;i++){
        swap(&a[i][j],&a[i][k]);
        k--; j++;
        if(j>n) break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100],n;
    scanf("%d",&n);
    getAr(a,n);
    cheo(a,n);
}