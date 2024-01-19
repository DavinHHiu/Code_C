#include<stdio.h>
void check(int n){
    if(n%2==0) printf("CHAN");
    if(n%2!=0) printf("LE");
}
int main(){
    int n;
    scanf("%d",&n);
    check(n);
}
