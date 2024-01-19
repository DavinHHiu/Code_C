#include<stdio.h>
void tamgiac(long n){
    int a=n-1,b;
    for(int i=1;i<=n;i++){
        b=i; a=n-1;
        for(char j=i+64;i>0;i--){
            printf("%c ",j);
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
}