#include<stdio.h>
int tongchuso(int n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",tongchuso(n));
}
