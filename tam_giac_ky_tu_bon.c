#include<stdio.h>
void tamgiac(long n){
    int a=64,b;
    for(int i=1;i<=n;i++){
        b=i;
        for(int k=64;i>0;i--){
            printf("%c",k);
            k+=2;
        }
        i=b;
        if(i>=2){
            for(int j=a;j>=64;j-=2){
                printf("%c",j);
            }
            a+=2;
        }
        printf("\n");
    }
}
int main(){
    long n;
    scanf("%ld",&n);
    tamgiac(n);
    return 0;
}