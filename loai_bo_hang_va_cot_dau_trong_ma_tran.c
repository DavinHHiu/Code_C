#include<stdio.h>
void getAr(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void in(int a[][100],int m,int n){
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int t,a[100][100],m,n,s=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        getAr(a,m,n);
        printf("Test %d:\n",s);
        s++;
        in(a,m,n);
    }
}