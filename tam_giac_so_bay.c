#include<stdio.h>
void tamgiac(long n){
    int a=n-1,b;
    for(int i=1;i<=n;i++){
        b=i; a=n-1;
        for(int j=i;i>0;i--){
            printf("%d ",j);
            j+=a;
            a--;
        }
        i=b;
        printf("\n");
    }
}
int main(){
    long n;
    scanf("%ld",&n);
    tamgiac(n);
    return 0;
}