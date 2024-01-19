#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void swap(int *a,int *b){
    int temp=*a;
        *a=*b;
        *b=temp;
}
void sxchen(int a[],int n){
    int b[100],j=0,s=0;
    for(int i=0;i<n;i++){
        b[j]=a[i];
        for(int k=0;k<j;k++){
            for(int l=k+1;l<=j;l++){
                if(b[k]>b[l]) swap(&b[k],&b[l]);
            }
        }
        printf("Buoc %d: ",s);
        for(int h=0;h<=j;h++){
            printf("%d ",b[h]);
        }
        printf("\n");
        j++; s++;
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(a,n);
    sxchen(a,n);
}