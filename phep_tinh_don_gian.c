#include<stdio.h>
int main(){
    int a,b;
    int tong,hieu,tich,chiadu;
    float thuong;
    scanf("%d %d",&a,&b);
    if(b==0) printf("0");
    else{
    tong=a+b; printf("%d ",tong);
    hieu=a-b; printf("%d ",hieu);
    tich=a*b; printf("%d ",tich);
    thuong=(float)a/b; printf("%.2f ",thuong);
    chiadu=a%b; printf("%d ",chiadu);
    }
}
