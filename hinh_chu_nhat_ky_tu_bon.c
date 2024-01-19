#include<stdio.h>
void hcn(int m,int n){
    int a=65+m-1,b=65+n-1,d=m;
    for(int i=0;i<m;i++){
        int c=n;
        if(m<=n){
            for(int j=a;c>0;c--){
                printf("%c",j);
                if(j<b) j++;
            }
            d--;
            if(d<=n) a--;
        }
        if(m>n){
            for(int j=b;c>0;c--){
                printf("%c",j);
                if(j<a-m+n) j++;
            }
            d--;
            if(d<n) b--;
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    hcn(m,n);
}