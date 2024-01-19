#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void sort(int a[],int n){
    int temp,s=1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("Buoc %d:",s);
        for(int k=0;k<n;k++){
            printf(" %d",a[k]);
        }
        printf("\n");
        s++;
    }
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    getAr(a,n);
    sort(a,n);
}