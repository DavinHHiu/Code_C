#include<stdio.h>
int main(){
    int s[100][100],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i) s[i][i]=0;
            else s[i][j]=j-i;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
}