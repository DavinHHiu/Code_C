#include<stdio.h>
int dem(int n){
    int s=0;
    for(;n>0;n/=10){
        s++;
    }
    return s;
}
/*void tich(int n){
    int s=0;
    for(int i=1;i<=10;i++){
        s+=n*i;
        printf("%d ",s);
        s=0;
    }
}*/
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",dem(n));
}
