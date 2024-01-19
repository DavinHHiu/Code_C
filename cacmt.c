#include<stdio.h>

void getAr(int (*a)[3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            scanf("%d", (*(a+i)+j));
    }
}

void printAr(int a[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void multi(int a[][3],int b[][3], int c[][3]){
    int x=0;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int t=0;t<3;t++){
                        x+=a[i][t]*b[t][j];
                        c[i][j]=x;
                } x=0;
            }
    }
    printAr(c);
}

int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("nhap cac phan tu cua matrix A:\n");
    getAr(&a);
    printf("matrix A la:\n");
    printAr(a);
    printf("nhap cac phan tu cua matrix B:\n");
    getAr(&b);
    printf("matrix B la:\n");
    printAr(b);
    printf("tich cua 2 ma tran la:\n");
    multi(a,b,c);
}
