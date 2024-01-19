#include<stdio.h>
#include<math.h>
int nguyenTo(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int sum(int n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    return s;
}
int main(){
    int n,s=0;
    scanf("%d",&n);
    for(int i=5;i<n;i++){
        if(nguyenTo(i)){
            if(sum(i)%5==0){
                printf("%d ",i);
                s++;
            }
        }
    }
    printf("\n%d",s);
}