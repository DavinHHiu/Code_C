#include<stdio.h>
void draw(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i>0 && i<n-1) && (j>0 && j<i)) printf(".");
            else printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    draw(n);
}

