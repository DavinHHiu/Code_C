#include<stdio.h>
int gcd(int a,int b){
    while(a!=b){
        if(a>b)
            a-=b;
        else
            b-=a;
    } 
    return a;
}
long long lcm(int a,int b){
    return ((long long)a*b)/gcd(a,b);
}
void nhap(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%lld ",lcm(a,b));
    printf("%d\n",gcd(a,b));
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        nhap();
    }
}