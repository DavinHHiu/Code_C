#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    c=-b/a;
    if(a==0 && b==0) printf("Vo so nghiem");
    if(a==0 && b!=0) printf("Vo nghiem");
    if(a!=0 && b==0) printf("0.00");
    if(a!=0 && b!=0) printf("%.2f", c);
}
