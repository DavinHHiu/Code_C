#include<stdio.h>
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
void xoanoc(int n){
    int gt=0,d=0,a[100][100],ch=n-1;
    while(d<=(n/2)){
        for(int i=d;i<=ch;i++){ 
            a[d][i]=fibonacci(gt);
            gt++;
        }
        for(int i=d+1;i<=ch;i++){
            a[i][ch]=fibonacci(gt);
            gt++;
        }
        for(int i=ch-1;i>=d;i--){
            a[ch][i]=fibonacci(gt);
            gt++;
        }
        for(int i=ch-1;i>d;i--){
            a[i][d]=fibonacci(gt);
            gt++;
        }
        d++;
        ch--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    xoanoc(n);
}