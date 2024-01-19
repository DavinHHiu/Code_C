#include<stdio.h>
#include<math.h>
int check(long long n){
    int a=1;
    if(n%2!=0) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0 && i%2==0) a++;
        if((n/i)%2==0 && (n/i)!=i && n%(n/i)==0) a++; 
        
    }
    return a;
}
int main(){
    int t;
    long long n;    
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
       printf("%d\n",check(n));
    }
}