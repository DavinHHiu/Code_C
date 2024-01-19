#include<stdio.h>
int giaithua(int a,int b){
    int s=0;
    for(int i=b;i<=a;i++){
        int d=i;
        while(d%b==0){
            s++;
            d/=b;
        }
    }
    return s;
}
int main(){
    int a,b,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        printf("%d\n",giaithua(a,b));
    }
}