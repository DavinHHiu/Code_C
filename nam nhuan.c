#include<stdio.h>
void isLeapYear(int n){
    scanf("%d",&n);
     while(n<=1000){
        printf("nhap thang cu may lai di thang ngu\n");
        scanf("%d",n);
    }
    if((n%4==0 && n%100!=0) || n%400==0 ){
         printf("dit con cu may nam nhuan\n");
      }
    else printf("deo phai nam nhuan\n");
}
int main(){
    int n;
    printf("nhap so nam may muon: ");
    isLeapYear(n);
    printf("%d",&n);
}
