#include<stdio.h>
#include<math.h>
void getAr(int *a,int n){
    int i=0;
    while(i<n){
        scanf("%d",a+i);
        i++;
    }
}
int nguyenTo(int n){
    if(n==2) return 1;
    if(n%2==0 || n<2) return 0;
    for(int i=3;i<=sqrt(n);i++)
    if(n%i==0) return 0;
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a[100],n,i=0,j=0;
        scanf("%d",&n);
        getAr(a,n);
        while(i<n){
            if(nguyenTo(a[i])==1){
                printf("%d ",a[i]);
                j=1;
            }
            i++;
        }
        if(j==0) printf("-1");
        printf("\n");
    }
}
#include<stdio.h>
#include<math.h>
int thuannghich(int n){
	int m=n;
	int dao=0;
	while (n>0){
		dao= dao*10 +n%10;
		n/=10;
	}
	if (dao==m) return 1;
	else return 0;
}
int main(){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m];
		int h=0;
		int b[h];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				scanf("%d",&a[i][j]);	
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){	
			if (thuannghich(a[i][j])==1) {
				b[h]=a[i][j];
				h++;
			}
			}
		}
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				printf("%d ",a[i][j]);	
			}
			printf("\n");
		}
		int max=b[0];
		for (int  i=0;i<h;i++){
				if (b[i]>max) max=b[i];
		}
		printf("%d\n",max);
		int count=0;
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				if (a[i][j]==max){
				printf("%d",a[i][j]);
				count++;
				printf("Vi tri [%d] [%d]\n",i,j);
				}
			}
		}
		if (count==0) printf("NOT FOUND");
	}