#include<stdio.h>
#include<string.h>
typedef struct{
    char ten[100],nhom[100];
    double tn,tb,ln;
    int stt;
} mat_hang;
mat_hang input(int i){
    mat_hang mh;
    scanf("\n");
    fgets(mh.ten,sizeof(mh.ten),stdin);
    mh.ten[strlen(mh.ten)-1]='\0';
    scanf("\n");
    fgets(mh.nhom,sizeof(mh.nhom),stdin);
    mh.nhom[strlen(mh.nhom)-1]='\0';
    scanf("%lf",&mh.tn);
    scanf("%lf",&mh.tb);
    mh.ln=mh.tb-mh.tn;
    mh.stt=i;
    return mh;
}
void swap(mat_hang *a,mat_hang *b){
    mat_hang temp=*a;
        *a=*b;
        *b=temp;
}
int main(){
    int n;
    mat_hang mh1[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        mh1[i]=input(i+1);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(mh1[i].ln<mh1[j].ln){
                swap(mh1+i,mh1+j);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %s %s %.2lf\n",mh1[i].stt,mh1[i].ten,mh1[i].nhom,mh1[i].ln);
    }
}