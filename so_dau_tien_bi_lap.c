#include<stdio.h>
void getAr(int s[100000],int n){
    for(int i=0;i<n;i++){
        scanf("%ld",s+i);
    }
}
void lap(int s[],int n){
    int a=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                printf("%d",s[i]);
                a=1;
                break;
            }
        }
        if(a==1) break;
    }
    if(a==0) printf("NO");
}
int main(){
    int t,s[100000],n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getAr(s,n);
        lap(s,n);
        printf("\n");
    }
}