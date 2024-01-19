#include<stdio.h>
#include<math.h>
int nguyenTo(long long n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
long mu(long long n){
    long s=1;
    for(int i=0;i<n;i++){
        s*=10;
    }
    return s;
}
int tang(long long n){
    int s=-5;
    for(;n>0;n/=10){
        if(s==-5){
            s=n%10;
            continue;
        }
        if((n%10)>=s) return 0;
        s=n%10;
    }
    return 1;
}
int giam(long long n){
    int s=-5;
    for(;n>0;n/=10){
        if(s==-5){
            s=n%10;
            continue;
        }
        if((n%10)<=s) return 0;
        s=n%10;
    }
    return 1;
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        int s=0;
        scanf("%lld",&n);
        switch(n){
        case 9:
            printf("0\n");
            break;
        case 8:
            printf("5\n");
            break;
        case 7:
            printf("8\n");
            break;
        default:
            for(long long i=mu(n-1)+1;i<mu(n);i+=2){
                if(nguyenTo(i)){
                    if(tang(i) || giam(i)) s++;
                }
            }
            printf("%d\n",s);
        }
    }
}