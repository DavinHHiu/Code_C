#include<stdio.h>
#include<math.h>
int nguyenTo(long n){
    if(n==2) return 1;
    if(n%2==0 || n<2) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int tong(long n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    return s;
}
int sosanh(long n){
    int b;
    for(;n>0;n/=10){
        b=n%10;
        if(!nguyenTo(b)) return 0;
    }
    return 1;
}
int main(){
    long a,b;
    int t;
    scanf("%d",&t);
    while(t--){
        int s=0;
        scanf("%ld %ld",&a,&b);
        for(long i=a;i<=b;i++){
            if(sosanh(i)){ 
                if(nguyenTo(tong(i))){
                    if(nguyenTo(i))s++;
                }
            }
        }
        printf("%d\n",s);
    }
}