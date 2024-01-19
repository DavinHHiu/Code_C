#include<stdio.h>
#include<math.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
int nguyenTo(int n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void sapxep(int *a,int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void dem(int a[],int n){
    int s=1;
    for(int i=0;i<n;i++){
        if(nguyenTo(a[i])){
            int s=1,d=0;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]) s++;
                }
            for(int k=i-1;k>=0;k--){
                if(a[i]==a[k]) d=1;
            }
            if(d==0) printf("%d xuat hien %d lan\n",a[i],s);
        }
    }
}
int main(){
    int t,a[100],n,d=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getAr(a,n);
        sapxep(a,n);
        printf("Test %d:\n",d);
        dem(a,n);
        d++;
    }
}