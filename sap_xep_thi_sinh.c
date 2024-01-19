#include<stdio.h>
#include<string.h>
typedef struct{
    char ten[100],ns[100];
    double m1,m2,m3,s;
    int stt;
} thi_sinh;
thi_sinh input(int i){
    thi_sinh ts;
    scanf("\n");
    gets(ts.ten);
    scanf("\n");
    gets(ts.ns);
    scanf("%lf%lf%lf",&ts.m1,&ts.m2,&ts.m3);
    ts.s=ts.m1+ts.m2+ts.m3;
    ts.stt=i;
    return ts;
}
void swap(thi_sinh *a,thi_sinh *b){
    thi_sinh tmp=*a;
    *a=*b;
    *b=tmp;
}
int main(){
    int t;
    scanf("%d",&t);
    thi_sinh a[100];
    for(int i=0;i<t;i++){
        a[i]=input(i+1);
    }
    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
            if(a[i].s<a[j].s){
                swap(a+i,a+j);
            }
        }
    }
    for(int i=0;i<t;i++){
        printf("%d %s %s %.1lf\n",a[i].stt,a[i].ten,a[i].ns,a[i].s);
    }
}
