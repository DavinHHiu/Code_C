#include<stdio.h>
#include<math.h>
void getAr(int a[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
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
int sum(int a[][100],int n){
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(nguyenTo(a[i][j])) s+=a[i][j];
        }
    }
    return s;
}
int main(){
    int a[100][100],n;
    scanf("%d",&n);
    getAr(a,n);
    printf("%d",sum(a,n));
}