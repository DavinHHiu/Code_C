#include<stdio.h>
/*void check(long long a[],long long n){
    int i,s;
    s=0;i=0;
    for(;n>0;n/=10){
            a[i]=n%10;
            i++;
        }
        for(int j=0;j<i-1;j++){
            if(a[j]<a[j+1]){
                printf("NO\n");
                s++;
                break;
            }
         }
         if(s==0) printf("YES\n");
         s=0;
}*/
int tang(long long n){
    int s=-5;
    for(;n>0;n/=10){
        if(s==-5){
            s=n%10;
            continue;
        }
        if((n%10)>s) return 0;
        s=n%10;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a[20],n;
        scanf("%lld",&n);
        check(a,n);
    }   
}
