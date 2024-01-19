#include<stdio.h>
#include<math.h>
int nguyenTo(int n){
    if(n==1 || n==0) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
          
        }
    }
    return 1;
}
int tach(int n){
    int s;
    for(;n>0;n/=10){
        s=n%10;
        if(!nguyenTo(s)){
            return 0;
        } 
    }
    return 1;
}
int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        int s=0;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++){
            if(nguyenTo(i) && tach(i)) s++;
        }
        printf("%d\n",s);
    }
}