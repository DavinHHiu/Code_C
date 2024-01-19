#include<stdio.h>
int dem(long n){
    long b[100],i=0;
    for(;n>0;n/=10){
        b[i]=n%10;
        i++;
    }
    for(int j=0;j<i-1;j++){
        if(b[j]>=b[j+1]) return 0;
    }
    return 1;
}
int main(){
    int t,s=0;
    long a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%ld %ld",&a,&b);
        for(int i=a;i<=b;i++){
            if(dem(i)) s++;
        }
        printf("%d\n",s);
        s=0;
    }
}