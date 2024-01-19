#include<stdio.h>
int tinhtong(int n){
    int s=0;
    for(int i=1;i<=n;++i){
        s+=i*i*i;
    }
    return s;
}
void uoc(int n){
    for(int a=1;a<=n;a++){
        if(n%a==0) printf(" %d",a);
    } printf("\n");
}
void bphh(int n){
    for(int a=0;a<=n;a++){
        printf(" %d",a*a);
    }
}
int main(){
    int n;
    printf("nhap so n ma may muon: ");
    scanf("%d",&n);
    printf("%d\n",tinhtong(n));
    uoc(n);
    bphh(n);
}
