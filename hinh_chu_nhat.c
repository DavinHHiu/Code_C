#include<stdio.h>
int main(){
    int a,b,c,s;
    scanf("%d %d",&a,&b);
    if(a>0 && b>0){
        printf("%d ",(a+b)*2);
        printf("%d",a*b);
    }
    else printf("0");
    return 0;
}
