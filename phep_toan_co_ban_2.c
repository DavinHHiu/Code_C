#include<stdio.h>
int main(){
    int a,b,c;
    char d,e;
    scanf("%d %c %d %c %d",&a,&d,&b,&e,&c);
    /*printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%lld\n",(long long)a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);
    printf("%.2f",(float)a/b);*/
    if(c==a+b) printf("\nYES");
    if(c!=a+b) printf("\nNO");
}
