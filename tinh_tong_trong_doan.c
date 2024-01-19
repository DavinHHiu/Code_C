#include<stdio.h>
int sum(int a,int b){
    int s=0;
    if(b>a){
        for(int i=a;i<=b;i++)
            s+=i;
    }
    if(b<a){
        for(int i=b;i<=a;i++)
            s+=i;}
    return s;
}
int main(){
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));
}
