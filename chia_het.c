#include<stdio.h>
#include<math.h>
int giaithua(int n){
    if(n==0 || n==1) return 0;
    int s=0;
    for(int i=2;i<=n;i++){
        int a=i;
        while(a%2==0){
            a/=2;
            s++;
        }
    }
    return s;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(giaithua(a)>=b) printf("Yes");
    else printf("No");
}