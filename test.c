#include<stdio.h>
#include<math.h>
void getAr(int *a,int n){
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
}
int main(){
	int a[10000],n;
	scanf("%d",&n);
	getAr(a,n);
	for(int i=0;i<n-1;i++){
		if((a[i]%2==0)){
			if(a[i+1]%2==0){
				a[i]=-5;
				a[i+1]=-5;
				i++;
			}
		}
		if((a[i]%2!=0)){
			if(a[i+1]%2!=0){
				a[i]=-5;
				a[i+1]=-5;
				i++;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]<0) n--;
	}
	printf("%d",n);
}

