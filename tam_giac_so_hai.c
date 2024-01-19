#include<stdio.h>
void tamgiac(int n){
    for(int i=1;i<=n;i++){
        int b=i;
        if(i%2!=0){
            for(int j=1;i>0;i--){
                printf("%d",2*j-1);
                j++;
            }
        }
        if(i%2==0){
            for(int j=1;i>0;i--){
                printf("%d",2*j);
                j++;
            }
        }
        printf("\n");
        i=b;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    tamgiac(n);
}