#include<stdio.h>
int tongcs(int n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    return s;
}
int bon(int n){
    int s;
    for(;n>0;n/=10){
        s=n%10;
        if(s==4) return 0;
    }
    return 1;
}
int reverse(int n){
    int s,a=0;
    for(;n>0;n/=10){
        s=n%10;
        a=a*10+s;
    }
    return a;
}
int mu(int n){
    int s=1;
    for(int i=0;i<n;i++){
        s*=10;
    }
    return s;
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=mu(n-1);i<mu(n);i++){
            if(bon(i)){ 
                if(i==reverse(i)){
                    if(tongcs(i)%10==0){
                        printf("%d ",i);
                    }
                }
            }
        }
        printf("\n");
    }
}