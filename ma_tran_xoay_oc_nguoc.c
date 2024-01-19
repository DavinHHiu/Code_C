#include<stdio.h>
void xoanoc(int n){
    int a[100][100],ch=n-1,d=0,t=n*n;
    while(d<=(n/2)){
        for(int i=d;i<=ch;i++){
            a[d][i]=t;
            t--;
        }
        for(int i=d+1;i<=ch;i++){
            a[i][ch]=t;
            t--;
        }
        for(int i=ch-1;i>=d;i--){
            a[ch][i]=t;
            t--;
        }
        for(int i=ch-1;i>d;i--){
            a[i][d]=t;
            t--;
        }
        d++; ch--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n,t,s=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("Test %d:\n",s);
        xoanoc(n);
        s++;
    }
}