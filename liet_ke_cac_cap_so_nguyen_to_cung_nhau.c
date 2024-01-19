#include<stdio.h>
int uoc(int a,int b){
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++){
        for(int j=i+1;j<=b;j++){
            if(uoc(i,j)==1) printf("(%d,%d)\n",i,j);
        }
    }
}