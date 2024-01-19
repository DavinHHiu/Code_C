#include<stdio.h>
int tinh(int n){
    int s=0;
    for(;n>0;n/=10){
        if(n%2==0) s++;
    }
    return s;
}
int dem(int n){
    int s=0;
    for(;n>0;n/=10 ){
        s++;
    }
    return s;
}

int main(){
    int n;
    scanf("%d",&n);
    if(tinh(n)==dem(n)){
            printf("so nguyen duong n co k chu so deu chan");
            }
    if(tinh(n)==0){
        printf("\nso nguyen duong n co k chu so deu le");
    }
    if(tinh(n)>0 && tinh(n)<dem(n)){
        printf("so nguyen duong n co k chu so ko deu chan ko deu le");
    }

}
