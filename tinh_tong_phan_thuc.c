#include<stdio.h>
double tong(int n){
    double s=0;
    for(int i=1;i<=n;i++){
        s+=1.0/i;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%.4lf",tong(n));
}
