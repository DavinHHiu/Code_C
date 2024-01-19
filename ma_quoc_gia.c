#include<stdio.h>
void tach(long long n){
    int b[100],j=0;
    for(;n>0;n/=10){
        b[j]=n%10;
        j++;
    }   
    for(int i=0;i<j-1;i++){
        if(b[i]==8 && b[i-1]==4 && b[i+1]==0){
            b[i]=-5;
            b[i-1]=-5;
            b[i+1]=-5;
        }
    }
    for(int i=j-1;i>=0;i--){
        if(b[i]>=0) printf("%d",b[i]);
    }
}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        tach(n);
        printf("\n");
    }
}