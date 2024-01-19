#include<stdio.h>
int tong(int n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    return s;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b) printf("%d %d", a,b);
    if(a<b) printf("%d %d",b,a);
    if(a==b) printf("%d %d",a,b);
}
