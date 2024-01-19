#include<stdio.h>
void tamgiac(long n){
    int b,c=1;
    for(int i=1;i<=n;i++){
        b=n-i+1; 
        for(int j=c;b>0;b--){
            printf("%d",j);
            j+=2;
        }
        c+=2;
        printf("\n");
    }
}
int main(){
    long n;
    scanf("%ld",&n);
    tamgiac(n);
    return 0;
}