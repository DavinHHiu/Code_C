#include<stdio.h>

void getAr(int *a,int s,int d){
    for(int i=s-d;i<s;i++){
        printf("nhap diem cho hoc sinh %d:\t",i+1);
        scanf("%d", a+i);
        while(a[i]>10 || a[i]<0){
            printf("diem khong hop le vui long nhap lai:\n");
            printf("nhap diem cho hoc sinh %d:\t",i+1);
            scanf("%d",a+i);
        }
    }
}
float tB(const int a[],int s){

    float sum=0;
    for(int i=0;i<s;i++){
        sum+=a[i];
    }
    return sum/s;
}
int max(const int a[],int s){
    int m=a[0];
    for(int i=0;i<s;i++){
            if(m<a[i]) m=a[i];
    } return m;
}
void loc(const int a[],int s){
    for(int i=0;i<s;i++){
            if(a[i]<4) printf("%d\t",a[i]);
    }
}
int main(){
    int a[100],s,b,c=0,d;
    printf("\t\t\t\t\t1.Nhap so sinh vien va so diem tung ban\n");
    printf("\t\t\t\t\t2.Tinh diem trung binh lop\n");
    printf("\t\t\t\t\t3.Tim diem lon nhat cua lop\n");
    printf("\t\t\t\t\t4.In ra cac diem nho hon 4\n");
    printf("\t\t\t\t\t5.Thoat\n");
    printf("chon so may muon de:");
    scanf("%d",&b);
    while(b!=1 && b<5){
        printf("vui long nhap con me may diem truoc khi chon chuc nang khac: ");
        scanf("%d",&b);
    }
    while(b!=5){
        switch (b){
        case 1:
            if(c>=1){
                printf("nhap them so sinh vien");
                scanf("%d",&d);
                s+=d;
                printf("nhap diem cho moi sinh vien:\n");
                getAr(&a,s,d); break;
            }
            printf("nhap so sinh vien: ");
            scanf("%d",&s);d=s;
            printf("nhap diem cho moi sinh vien:\n");
            getAr(&a,s,d); break;
        case 2:
            printf("diem trung binh cua lop la: %f",tB(a,s)); break;
        case 3:
            printf("diem lon nhat lop la: %d",max(a,s)); break;
        case 4:
             loc(a,s); break;
        }c++;
        printf("\nnhap phim de chon chuc nang khac: ");
        scanf("%d",&b);
    }
}




