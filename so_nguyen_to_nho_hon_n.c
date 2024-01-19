/*#include<stdio.h>
int nguyenTo(int n){
    if(n==2) return 1;
    if(n<=1 || n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(nguyenTo(i)) printf("%d\n",i);
    }
}*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
    scanf("\n");
	scanf("%d",&t);
	scanf("\n");
	while(t--){
	char s[500];
    scanf("\n");
	gets(s);
	int len=strlen(s);
	long long tich=1;
	for (int i=0;i<len;i++){
		if (s[i]!='0') tich*=s[i]-48;
	}
	printf("%lld\n",tich);	
}
}