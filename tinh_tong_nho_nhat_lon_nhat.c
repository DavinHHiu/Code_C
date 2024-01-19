#include<stdio.h>
long long sau(long long n){
    int a[100],i=0;
    long long s=0;
    for(;n>0;n/=10){
        a[i]=n%10;
        i++;
    }
    for(int j=0;j<i;j++){
        if(a[j]==5) a[j]=6;
    }
    for(int j=i-1;j>=0;j--){
        s=s*10+a[j];
    }
    return s;
}
long long nam(long long n){
    int a[100],i=0;
    long long s=0;
    for(;n>0;n/=10){
        a[i]=n%10;
        i++;
    }
    for(int j=0;j<i;j++){
        if(a[j]==6) a[j]=5;
    }
    for(int j=i-1;j>=0;j--){
        s=s*10+a[j];
    }
    return s;
}
int main(){
    long long a,b;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        printf("%lld %lld\n",nam(a)+nam(b),sau(a)+sau(b));
    }
}