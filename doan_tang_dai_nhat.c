#include<stdio.h>
void getAr(int *a,int n){
     for(int i=0;i<n;i++){
         scanf("%d",a+i);
     }
}
void tang(int a[],int n){
    int s=0,max,b[100];
    for(int i=0;i<n;i++){
        b[i]=1;
    }
    for(int i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
            b[i-1]=b[i]+1;
        }
    }
    max=b[0];
    for(int i=1;i<n;i++){
        if(max<b[i]){
            max=b[i];
        }
    }
    printf("%d\n",max);
    for(int i=0;i<n;i++){
        s=0;
        if(b[i]==max){
            for(int j=i;j<n;j++){
                printf("%d ",a[j]);
                s=1;
                if(b[j]==1) break;
            }
        }
        if(s==1)printf("\n");
    }
}
int main(){
    int t,a[100],n,s=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getAr(a,n);
        printf("Test %d:\n",s);
        tang(a,n);
        s++;
    }
}