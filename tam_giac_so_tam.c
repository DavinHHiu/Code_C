#include<stdio.h>
void tamgiac(long n){
    int a=1,b,h=0;
    for(int i=1;i<=n;i++){
        b=i; 
        if(i%2!=0){
            for(int j=a-h;i>0;i--){
                printf("%d ",j);
                j++;
            }
        }
        if(i%2==0){
            for(int j=a;i>0;i--){
                printf("%d ",j);
                j--;
            }
        }
        a+=2+h; i=b; h++;
        printf("\n");
    }
}
int main(){
    long n;
    scanf("%ld",&n);
    tamgiac(n);
}