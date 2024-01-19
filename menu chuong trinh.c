#include<stdio.h>
#define max 100
int  cac(const a1[], const a2[], int size){
    for(int i=0;i<size;++i){
        if(a1[i]!=a2[i]) return 0;
        }
        return 1;
    }
int main(){
    int a1[100],a2[100];
    int size;
    printf("nhap vao cac phan tu trong mang:");
    scanf("%d",&size);
    printf("nhap vao phan tu cua mang 1\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a1[i]);
    }
    printf("nhap vao phan tu cua mang 2\n");
     for(int j=0;j<size;j++){
        scanf("%d",&a2[j]);
    }
    if(cac(a1,a2,size)) printf("hai mang bang nhau");
    else printf("hai mang khac nhau");

}
