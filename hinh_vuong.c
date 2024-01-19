#include<stdio.h>
int main(){
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if((a-c)==(b-d)) printf("YES\n");
        else printf("NO\n");
    }
}