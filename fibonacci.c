#include<stdio.h>
int fibonacci(int n){
    if(n==2) return 1;
    if(n==1) return 0;
    return fibonacci(n-1)+fibonacci(n-2);
}
int test(int n){
    for(int i=1;fibonacci(i)<=n;i++){
        if(n==fibonacci(i)) return 1;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",fibonacci(i));
    }
}
