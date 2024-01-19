#include<stdio.h>
void check(int a[],int n){
    int s=0;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            printf("NO\n");
            s=1;
            break;
        }
    }
    if(s==0) printf("YES\n");
}
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    check(a,n);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a[100],n;
        scanf("%d",&n);
        getAr(a,n);
    }
}
