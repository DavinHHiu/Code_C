#include<stdio.h>
long long reverse(long long n){
    long long s,a=0;
    for(;n>0;n/=10){
        s=n%10;
        a=a*10+s;
    }
    return a;
}
int sum(long long n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    if(s%10==0) return 1;
    return 0;
}
long mu(int n){
    int s=1;
    for(int i=0;i<n;i++){
        s*=10;
    }
    return s;
}
int main(){
    int t,n,s=0;
    scanf("%d",&t);
    while(t--){
        s=0;
        scanf("%d",&n);
        for(int i=mu(n-1);i<mu(n);i++){
            if(sum(i)){
                if(i==reverse(i)) s++;
            }
        }
        printf("%d\n",s);
    }
}