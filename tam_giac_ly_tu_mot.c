#include<stdio.h>
#include<stdio.h>
void tamgiac(long n){
    int a=97,b,h=0;
    for(int i=1;i<=n;i++){
        b=i; 
        if(i%2!=0){
            for(char j=a-h;i>0;i--){
                printf("%c ",j);
                j++;
            }
        }
        if(i%2==0){
            for(char j=a;i>0;i--){
                printf("%c ",j);
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