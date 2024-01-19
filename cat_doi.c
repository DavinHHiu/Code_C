#include<stdio.h>
void check(long long n){
    int s,b[100],j=0,l=0;
    long long t=0,k=n;
    for(;n>0;n/=10){
        s=n%10;
        if(s==2 || s==3 || s==4 || s==5 || s==6 || s==7){
            printf("INVALID\n");
            l=1;
            break;
        }
    }
    for(;k>0;k/=10){
        b[j]=k%10;
        j++;
    }
    for(int i=0;i<j;i++){
        if(b[i]==0 || b[i]==8 || b[i]==9) b[i]=0;
    }
    for(int i=j-1;i>=0;i--){
        t=t*10+b[i];
    }
    if(t==0){
         printf("INVALID\n");
        l=1;
    }
    if(l==0) printf("%lld\n",t);
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        check(n);
    }
}