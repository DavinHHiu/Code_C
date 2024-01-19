#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}*/
int nguyenTo(long n){
    if(n==2) return 1;
    if(n<2 || n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int tonguoc(int n){
    int i=2,s=0;
    if(nguyenTo(n)) return n;
    while(n!=1){
        while(n%i==0){
            n/=i;
            s+=i;
        }
        i++;
    }
    return s;
}
int main(){
    int *ptr,n,s=0;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        s+=tonguoc(*(ptr+i));
    }
    printf("%d",s);
}