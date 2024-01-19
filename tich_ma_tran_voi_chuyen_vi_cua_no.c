#include<stdio.h>
void getAr(int a[][100],int m,int n){
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           scanf("%d",&a[i][j]);
       }
   }
}
void nhan(int a[][100],int b[][100],int m,int n){
    int c[100][100]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int t,a[100][100],b[100][100],m,n,s=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        getAr(a,m,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                b[i][j]=a[j][i];
            }
        }
        printf("Test %d:\n",s);
        s++;
        nhan(a,b,m,n);
    }
}