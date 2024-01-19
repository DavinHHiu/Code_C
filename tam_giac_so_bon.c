#include<stdio.h>
void tamgiac(long n){
    int a=1,b;
    for(int i=1;i<=n;i++){
        b=i;
        for(int l=1;l<=n-i;l++){
            printf("~");
        }
        for(int k=1;i>0;i--){
            printf("%d",2*k-1);
            k++;
        }
        i=b;
        if(i>=2){
            for(int j=a;j>0;j--){
                printf("%d",2*j-1);
            }
            a++;
        }
        printf("\n");
    }
}
int main(){
    long n;
    scanf("%ld",&n);
    tamgiac(n);
}