#include<stdio.h>
void xoanoc(int n){
    int gt=1,d=0,a[100][100],ch=n-1;
    while(d<=(n/2)){
        for(int i=d;i<=ch;i++){ 
            a[d][i]=gt;
            gt++;
        }
        for(int i=d+1;i<=ch;i++){
            a[i][ch]=gt;
            gt++;
        }
        for(int i=ch-1;i>=d;i--){
            a[ch][i]=gt;
            gt++;
        }
        for(int i=ch-1;i>d;i--){
            a[i][d]=gt;
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