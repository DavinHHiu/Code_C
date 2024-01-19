#include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
void swap(int *a,int *b){
    int temp=*a;
        *a=*b;
        *b=temp;
}
void sort(int a[],int n){
    int s=1;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]) min=j;
        }
        swap(&a[i],&a[min]);
        printf("Buoc %d:",s);
        for(int i=0;i<n;i++){
            printf(" %d",a[i]);
        }
        printf("\n"); s++;
    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    getAr(a,n);
    sort(a,n);
}