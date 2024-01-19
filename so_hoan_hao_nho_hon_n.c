#include<stdio.h>
#include<math.h>
int sum(int n){
	int s=1;
	for(int i=2; i<= sqrt(n); i++)
		if(n%i==0 ) s += i + n / i;
	return s;
}
int main(){
	int n,a;
	scanf("%d %d",&a, &n);
	if(a<n){for(int i = a; i <= n; i++){
		if(sum(i)==i && i!=1) printf("%d ", i);
	}
	}
	if(a>n){for(int i = n; i <= a; i++){
		if(sum(i)==i && i!=1) printf("%d ", i);
	}
	}
	return 0;
	}

