#include<stdio.h>
#include<math.h>
int check(int n){
    int c=n%10;
    n/=10;
    for(;n>0;n/=10){
        int b=n%10;
        if(b>c) return 0;
        c=b;
    }
    return 1;
}
int mu(int n){
    int s=1;
    for(int i=0;i<n;i++){
        s*=10;
    }
    return s;
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a=mu(n-1),b=mu(n);// pow(10,n);
        for(int i=a;i<b;i++){
            if(check(i)==1) printf("%d ",i);
        }
        printf("\n");
    }
}