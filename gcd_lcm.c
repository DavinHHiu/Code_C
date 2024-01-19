#include<stdio.h>
/*void lcm(int m,int n){
    int max;
    max = (m>n) ? m:n;
    while(1){
        if(max%m==0 && max%n==0){
            printf("%d",max);
            break;
        }
        ++max;
    }
}*/
int main(){
    int m,n,s;
    long long lcm;
    scanf("%d %d",&m,&n);
    for(int i=1; i<=m && i<=n ;i++){
        if(m%i==0 && n%i==0) s=i;
    }
    printf("%d\n",s);
    lcm=((long long)m*n)/s;
    printf("%lld",lcm);
}