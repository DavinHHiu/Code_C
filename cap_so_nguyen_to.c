#include<stdio.h>
#include<stdio.h>
#include<math.h>
int nguyenTo(long n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void sum(int n){
    for(int i=2;i<=n/2;i++){
        if(nguyenTo(i)){
            if(nguyenTo(n-i)) printf("%d %d ",i,n-i);
        }
    }
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum(n);
        printf("\n");
    }
}