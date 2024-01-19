#include<stdio.h>
void hcn(int m,int n){
    int a=65,b=a+n-1,d=65;
    for(int i=0;i<m;i++){
        int c=n;
        for(int j=a;c>i;c--){
            printf("%c",j);
            if(j<b) j++;
        }
        if(i>0){
            for(int j=d;j>=65;j--){
                printf("%c",j);
            }
        }
        if(d<b && i>0) d++;
        a++;
        printf("\n");
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    hcn(m,n);
}