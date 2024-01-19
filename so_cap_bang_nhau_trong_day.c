# include<stdio.h>
void getAr(int *a,int n){
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
}
int demcap(int a[],int n){
    int s=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) s++;
    }
    return s;
}
int main(){
    int t,a[100],n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getAr(a,n);
        printf("%d\n",demcap(a,n));
    }
}