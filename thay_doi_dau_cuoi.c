#include<stdio.h>
int mu(int n){
    int m=10;
    for(int i=1;i<n;i++) m*=10;
    return m;
}
void reverse(int n){
    int a[10];
    int dg=0,b=0;
    for(int i=1;n>0;n/=10){
        a[i]=n%10;
        dg++;
        i++;
    }
    for(int i=2;i<dg;i++){
        b+=(a[i]*mu(i-1));
    }
    b+=a[dg];
    b+=(a[1]*mu(dg-1));
    printf("%d",b);
}
int main(){
    int n;
    scanf("%d",&n);
    reverse(n);
}
