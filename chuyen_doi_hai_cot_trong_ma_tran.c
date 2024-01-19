#include<stdio.h>
void getAr(int a[][100],int m,int n){
    for(int i=1;i<=m;i++){
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
void cot(int a[][100],int m,int n,int p,int q){
    for(int i=1;i<=m;i++){
        swap(&a[i][p],&a[i][q]);
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100],m,n,p,q;
    scanf("%d %d",&m,&n);
    getAr(a,m,n);
    scanf("%d %d",&p,&q);
    cot(a,m,n,p,q);
}