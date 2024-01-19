#include<stdio.h>
long long factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}
int sum(int n){
    int s=0;
    for(;n>0;n/=10){
        s+=factorial(n%10);
    }
    return s;
}
int test(int n){
    if(n==sum(n)) return 1;
    return 0;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){for(int i=a;i<=b;i++){
        if(test(i)) printf("%d ",i);
    }
    }
    if(a>b){for(int i=b;i<=a;i++){
        if(test(i)) printf("%d ",i);
    }
    }
}
