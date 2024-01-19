#include<stdio.h>
int check(int n){
    int a=0,b=0,s;
    for(;n>0;n/=10){
        s=n%10;
        if(s%2==0) a++;
        else b++;
    }
    if(a==b) return 1;
    else return 0;
}
int mu(int n){
    int s=1;
    for(int i=0;i<n;i++){
        s*=10;
    }
    return s;
}
int main(){
    int n,d=10;
    scanf("%d",&n);
    for(int i=mu(n-1);i<mu(n);i++){
        if(check(i)){
            printf("%d ",i); d--;
            if(d==0){
                printf("\n");
                d=10;
            }
        }
    }
}