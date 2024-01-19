#include<stdio.h>
void hv(int n){
    int size=2*n-1,a[100][100],t=n,d=0;
    int h=size;
    while(d<=(size/2)){
        for(int i=d;i<h;i++){
            a[d][i]=t;
        }
        for(int i=d+1;i<h;i++){
            a[i][h-1]=t;
        }
        for(int i=h-2;i>=d;i--){
            a[h-1][i]=t;
        }
        for(int i=h-2;i>d;i--){
            a[i][d]=t;
        }
        t--;
        d++;
        h--;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    hv(n);
}