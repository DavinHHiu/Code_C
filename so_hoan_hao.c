#include<stdio.h>
int uoc(int n){
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(n==s) return 1;
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",uoc(n));
}
