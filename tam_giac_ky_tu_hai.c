#include<stdio.h>
void tamgiac(int n){
    int b=n,a=65;
    for(int i=0;i<n;i++){
        for(char j=a;b>0;b--){
            printf("%c",j);
            j+=2;
        }
        a+=2; b=n-1-i;
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    tamgiac(n);
}