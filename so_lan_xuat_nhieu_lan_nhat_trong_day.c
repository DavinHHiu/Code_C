#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void xh(int a[],int n){
    int max,s[100];
    for(int i=0;i<=100;i++){
        s[i]=1;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]) s[i]++;
        }
        if(i==0){
            max=s[0];
        }
        if(max<s[i]){
            max=s[i];
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]==max) printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int t,a[100],n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getAr(a,n);
        xh(a,n);
    }
}