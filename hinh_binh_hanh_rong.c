#include<stdio.h>
void hbhr(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf("~");
        }
        for(int j=0;j<n;j++){
            if(i>0 && i<n-1 && j>0 && j<n-1) printf(".");
            else printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    hbhr(n);
}

