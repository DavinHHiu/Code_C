#include<stdio.h>
void nhan(int a[][100],int b[][100],int n){
    int c[100][100]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
      for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("%d ",c[i][j]);
            }printf("\n");
      }
}
int main(){
    int a[100][100],b[100][100],n,t,s=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                a[i][j]=j;
            }
            for(int j=i+1;j<=n;j++){
                a[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                b[i][j]=a[j][i];
            }
        }
        printf("Test %d:\n",s);
        nhan(a,b,n);
        s++;
    }
}