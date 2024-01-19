#include<stdio.h>
void tamgiac(long n){
    long c=1;
    for(int i=1;i<=n;i++){
        long b=n+1-i,a=n;
        for(int j=c;b>0;b--){
            printf("%d ",j);
            j+=a;
            a--;
        }
        c++;
        printf("\n");
    }
}
int main(){
    long n;
    scanf("%ld",&n);
    tamgiac(n);
    return 0;
}