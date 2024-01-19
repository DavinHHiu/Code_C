#include<stdio.h>
int uoc(int m,int n){
    while(m!=n){
        if(m>n) m-=n;
        else n-=m;
    }
    return m;
}
int main(){
    int t,m,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        printf("%d\n",uoc(m,n));
    }
}