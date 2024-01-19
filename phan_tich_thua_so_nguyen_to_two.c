#include<stdio.h>
void nguyenTo(int n){
    int i=2,s=0;
    while(n!=1){
        if(n%i==0){
            if(s==1) printf("x");
            printf("%d",i);
            s=1;
            n/=i;
        }
        if(n%i!=0) i++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    nguyenTo(n);
}