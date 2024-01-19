#include<stdio.h>
int reverse(int n){
    int s,a=0;
    for(;n>0;n/=10){
        s=n%10;
        if(s==9) break;
        a=a*10+s;
    }
    return a;
}
int main(){
    int n,s=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(i==reverse(i)){
            printf("%d ",i);
            s++;
        }
    }
    printf("\n%d",s);
}