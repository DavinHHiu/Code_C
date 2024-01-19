#include<stdio.h>
#include<math.h>
#include<string.h>
// int main(){
// 	int t; scanf("%d", &t);
// 	while(t--){
// 		char s[1001];
// 		long long sum = 0;
// 		scanf("\n");
// 		fgets(s, sizeof(s), stdin);
// 		s[strlen(s) - 1] = '\0';
// 		for(int i = 0; i < strlen(s); i++){
// 			if(s[i] >= '0' && s[i] <= '9') ans = ans*10 + s[i] - 48;
// 		}
// 		printf("%lld ", ans);
// 		for(;ans > 0; ans /= 10){
// 			sum += ans % 10;
// 		}
// 		printf("%lld\n", sum);
// 	}
// }
int Nt(int n){
	if(n == 2) return 1;
	if(n < 2 || n % 2 == 0) return 0;
	for(int i = 3; i <= sqrt(n); i++)
		if(n % i == 0) return 0;
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s[501];
		scanf("\n");
		gets(s);
		int sum = 0;
		for(int i = 0; i < strlen(s); i++){
			sum += s[i] - 48;
		}
		if(Nt(sum) == 1) printf("YES\n");
		else printf("NO\n");
	}
}

