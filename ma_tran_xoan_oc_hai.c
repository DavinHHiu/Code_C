#include<stdio.h>
void getAr(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xoan(int a[][100],int m,int n){
    
}
int main(){
    int t,a[100][100],m,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        getAr(a,m,n);
    }
}