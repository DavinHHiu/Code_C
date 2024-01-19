
/*int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}*/
/*int test(int n){
    if(nguyenTo(n)==0) return 0;
    for(int i=1;i<=n;i++){
        if(tong(n)==fibonacci(i+2)) return 1;
    }
    return 0;
}*/
#include<stdio.h>
#include<math.h>

int nguyenTo(int n){
    if(n==2) return 1;
    if(n<2 || n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int tong(int n){
    int s=0;
    for(;n>0;n/=10){
        s+=n%10;
    }
    return s;
}
int tach(int n){
    for(;n>0;n/=10){
        if(!nguyenTo(n%10)) return 0;
    }
    return 1;
}
int main(){
    int a,b,c[10];
    scanf("%d %d",&a,&b);
    if(a<b){
        for(int i=a;i<=b;i++){
            if(nguyenTo(tong(i)) && nguyenTo(i) && i!=1 && tach(i)==1)
                printf("%d ",i);
            
        }
    }
    if(a>b){
        for(int i=b;i<=a;i++){
            if(nguyenTo(tong(i)) && nguyenTo(i) && i!=1 && tach(i)==1)
                printf("%d ",i); 
        }
    }
}

