#include <stdio.h>
#define max 100
void printnchars(char ch, int i){

	for (int j= 1; j<=i;j++){

		printf("%c",ch);
	} printf ("\n");
}

int main (){
	int n;
	char ch;
	scanf("%c",&ch);
	scanf("%d",&n);
	for ( int i=1;i<=n;++i){
		printnchars( ch,i);
		}
}
