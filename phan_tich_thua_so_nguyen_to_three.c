#include<stdio.h>
void phanTich(long long n){
    int i=2,s=0;
    while(n>1){
        while(n%i==0 && n>1){
            s++;
            n/=i;
        }
        if(s>0) printf("%d(%d) ",i,s);
        i++;
        s=0;
    }
}
int main(){
    int t,a=1;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        printf("Test %d: ",a);
        phanTich(n);
        printf("\n");
        a++;
    }
}