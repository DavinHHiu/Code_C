#include<stdio.h>

int main(){
    int a,b,s=0;
    int c,d;
    scanf("%d %d",&a,&b);
    c=sqrt(a);
    d=sqrt(b);
    for(int j=c;j<=d;j++){
        if(j*j>=a) s++;
    }
    printf("%d\n",s);
    for(int i=c;i<=d;i++){
        if(i*i>=a ) printf("%d\n",i*i);
    }
}
