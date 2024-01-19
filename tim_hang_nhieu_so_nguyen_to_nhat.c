#include<stdio.h>
#include<math.h>
void getAr(int a[][100],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int nguyenTo(int n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void find(int a[][100],int n){
    int s=0,max,d;
    for(int i=1;i<=n;i++){
        s=0;
        for(int j=1;j<=n;j++){
            if(nguyenTo(a[i][j])){
                s++;
            }
        }
        if(i==1){
            max=s;
            d=i;
        }
        if(max<s){
            max=s;
            d=i;
        }
    }
    printf("%d\n",d);
    for(int i=1;i<=n;i++){
        if(nguyenTo(a[d][i])) printf("%d ",a[d][i]);
    }
}
int main(){
    int a[100][100],n;
    scanf("%d",&n);
    getAr(a,n);
    find(a,n);
}