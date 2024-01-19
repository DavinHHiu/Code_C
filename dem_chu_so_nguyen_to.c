#include<stdio.h>
#include<math.h>
int nguyenTo(long long n){
    if(n==1 || n==0) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void dem(long long n){
    int a[100],i=0;
    for(;n>0;n/=10){
        a[i]=n%10;
        i++;
    }
    for(int j=0;j<i/2;j++){
        int temp;
        temp=a[j];
        a[j]=a[i-1-j];
        a[i-1-j]=temp;
    }
    for(int j=0;j<i;j++){
        int s=1,dem=0;
        if(nguyenTo(a[j])){
            for(int k=j+1;k<i;k++){
                if(a[j]==a[k]) s++;
            }
            for(int l=j-1;l>=0;l--){
                if(a[j]==a[l]) dem=1;
            }
            if(dem==0) printf("%d %d\n",a[j],s);
        }
    }
}
int main(){
    long long n;
    scanf("%lld",&n);
    dem(n);
}