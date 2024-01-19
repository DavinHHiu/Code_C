#include<stdio.h>
void nhap(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void matrix(int a[][100],int m,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100],m,n;
    scanf("%d %d",&m,&n);
    nhap(a,m,n);
    matrix(a,m,n);
}
