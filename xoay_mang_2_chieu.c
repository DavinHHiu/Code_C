#include<stdio.h>

void nhap(int a[][100], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void x180(int a[][100], int m, int n){
    int i=0,j=0;
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void x90p(int a[][100],int m,int n){
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
void x90t(int a[][100],int m, int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100],m,n;
    printf("nhap vao so hang: ");
    scanf("%d",&m);
    printf("nhap vao so cot: ");
    scanf("%d",&n);
    nhap(a,m,n);
    x180(a,m,n);
    x90t(a,m,n);
    x90p(a,m,n);
}
