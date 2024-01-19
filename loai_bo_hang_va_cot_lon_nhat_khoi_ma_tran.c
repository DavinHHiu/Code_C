#include<stdio.h>
void getAr(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void loai(int a[][100],int m,int n){
    int max,d;
    for(int i=0;i<m;i++){
        int s=0;
        for(int j=0;j<n;j++){
            s+=a[i][j];
        }
        if(i==0){ max=s;
                  d=i; }
        if(s>max){ max=s;
                   d=i; }
    }
    for(int j=0;j<n;j++){
        a[d][j]=-5;
    }
    for(int j=0;j<n;j++){
        int s=0;
        for(int i=0;i<m;i++){
            s+=a[i][j];
        }
        if(j==0){ max=s;
                  d=j; }
        if(s>max){ max=s;
                   d=j; }
    }
    for(int i=0;i<m;i++){
        a[i][d]=-5;
    }
    for(int i=0;i<m;i++){
        int k=0;
        for(int j=0;j<n;j++){
            if(a[i][j]>=0){ 
            k=1;
            printf("%d ",a[i][j]);
            }
        }
        if(i<m-1) printf("\n");
    }
}
int main(){
    int a[100][100],m,n;
    scanf("%d %d",&m,&n);
    getAr(a,m,n);
    loai(a,m,n);
    return 0;
}