#include<stdio.h>
int main(){
    int t,n;
    int a[11]={1000,500,200,200,100,50,20,10,5,2,1};
    scanf("%d",&t);
    while(t--){
        int s=0;
        scanf("%d",&n);
        for(int i=0;i<11;i++){
            s+=n/a[i];
            n=n%a[i];
            if(n==0) break;
        }
        printf("%d\n",s);
    }
}