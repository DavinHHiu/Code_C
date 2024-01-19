#include <stdio.h>
#include <math.h>
int is_prime(int n){
   for( int a=2;a<=sqrt(n);a++){
    if(n%a==0) return 0;

   }return 1;
}
int main(){
    int n;
    printf("nhap vao so nguyen duong");
    scanf("%d",&n);
    for(int a=2;a<=n;a++){
          if(is_prime(a)){
            printf("%d\n",a);
          }

    }
}
