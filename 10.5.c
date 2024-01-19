#include<stdio.h>
#define max 100
void getAr(int *a,int s){
    for(int i=0;i<s;i++){
        scanf("%d", a+i);
    }
}

int dem(const int a[],int s){
    int b=0;
    for(int i=0;i<s;i++){
        if(a[i]==0) b++;
    }
    return b;
}
/*void tanSo(const int a[],int s){
    int b=0,c=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(a[i]==a[j]){
                b++;
            }
        }
        for(int t=i-1;t>=0;t--){
            if(a[i]==a[t]) {c++;}
        }
        if(c<1){
        printf("so lap lai cua phan tu %d la: %d\n",a[i],b);

        }
        b=0;c=0;*/
int recount(const int a[],int b,int c){
    int dem=0;
    for(int i=b;i>=0;i--){
        if(a[i]==c) dem++;
    }
    return dem;
}
int count(const int a[],int s,int b){
    int dem=0;
    for(int i=0;i<s;i++){
        if(a[i]==b) dem++;
    }
    return dem;
}
int main(){
    int s,a[max],c=0;
    scanf("%d",&s);
    getAr(&a,s);
    for(int i=0;i<s;i++){
        if(count(a,s,a[i])!=1 && recount(a,i,a[i])==1) c++;}
        printf("%d\n",c);
    for(int i=0;i<s;i++){
        if((count(a,s,a[i])!=1) && recount(a,i,a[i])==1)
            printf("%d ",a[i]);

        }
    }
