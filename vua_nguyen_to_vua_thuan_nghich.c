#include<stdio.h>
#include<math.h>
int nguyenTo(int n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
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
int main(){
    int t,s=0;
    int a,b;
    scanf("%d",&t);
    while(t--){
        s=0;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++){
            if(nguyenTo(i) && i==reverse(i)){
                 s++;
                 printf("%d ",i);
                 if(s==10){
                     printf("\n");
                     s=0;
                 }
            }   
        }
        printf("\n");
    }
}
       

