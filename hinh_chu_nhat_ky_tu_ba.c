#include<stdio.h>
void hcn(int m,int n){
    int a=64,b=64+n-1;
    for(int i=0;i<m;i++){
        int c=n-1;
        for(int j=a;c>=0;c--){
            printf("%c",j);
            if(j<b) j++;
        }
        if(b>a) a++; 
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    hcn(m,n);
}