#include<stdio.h>
void incuoi(int n){
    int s=0;
    s=n%10;
    printf("%d",s);
}
void indau(int n){
    int s=0;
    for(;n>0;n/=10){
        if(n<10) printf("%d ",n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    indau(n);
    incuoi(n);
}
