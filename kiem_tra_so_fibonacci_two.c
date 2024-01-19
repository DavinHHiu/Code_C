#include<stdio.h>
int main(){
    long long a[100],n;
    int t,d=0;
    scanf("%d",&t);
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for(int i=3;i<98;i++){
        a[i]=a[i-1]+a[i-2];
    }
    while(t--){
        int d=0;
        scanf("%lld",&n);
        for(int i=0;a[i]<=n;i++){
            if(n==a[i]){
                printf("YES\n");
                d=1;
                break;
            }
        }
        if(d==0) printf("NO\n");
    }
}