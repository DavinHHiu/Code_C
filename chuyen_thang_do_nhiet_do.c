#include<stdio.h>
float trans(float n){
    float s;
    s=(n*9)/5+32;
    return s;
}
int main(){
    float c;
    scanf("%f",&c);
    printf("%.2f",trans(c));
}
