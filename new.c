#include<stdio.h>
void getAr(int *a,int s){
    for(int i=0;i<s;i++){
        scanf("%d", a+i);
    }
}
void chen(int a[],int c,int s2,int b[]){
    for(int i=0;i<s2;i++){
        a[i+s2+c]=a[i+c];
        a[i+c]=b[i];
    }
}
int main(){
    int a[100],c,b[100],s1,s2;
    scanf("%d %d",&s1,&s2);
    getAr(&a,s1);
    getAr(&b,s2);
    scanf("%d",&c);
    s1+=c;
    /*for(int i=0;i<s1;i++){
        printf("%d ",a[i]);
        for(int j=0;j<s2;j++ ){
            if(i==c-1) printf("%d ",b[j]);
        }
    }*/
    chen(a,c,s2,b);
    for(int k=0;k<s1;k++){
        printf("%d",a[k]);
    }
}
