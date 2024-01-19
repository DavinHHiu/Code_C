#include<stdio.h>
void hcn(int m,int n){
    int a=97+n-1,b=a,d=97+m-1,e=d;
    for(int i=0;i<m;i++){
        int c=n;
        if(m<=n){
            for(int j=a;c>0;c--){
                printf("%c",j);
                if(j>b) j--;
            }
        }
        if(m>n){
            for(int j=d;c>0;c--){
                printf("%c",j);
                if(j>e) j--;
            }
        }
        b--; e--;
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    hcn(m,n);
}