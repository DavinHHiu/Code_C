#include<stdio.h>
int uoc(int a,int b){
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
int main(){
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(uoc(a,b)==uoc(c,d)) printf("YES\n");
        else printf("NO\n");
    }
}