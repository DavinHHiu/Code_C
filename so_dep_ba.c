#include<stdio.h>
#include<string.h>
int reverse(char s[]){
    int size=strlen(s);
    for(int i=0;i<=strlen(s)/2;i++){
        if(s[i]!=s[size-i-2]) return 0;
        if(s[0]=='0') return 0;
    }
    return 1;
}
int chan(char s[]){
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]!='2' && s[i]!='3' && s[i]!='5' && s[i]!='7')
            return 0;
    }
    return 1;
}
int main(){
    int t;
    char s[550];
    scanf("%d\n",&t);
    while(t--){
        fgets(s,sizeof(s),stdin);
        if(chan(s) && reverse(s)) printf("YES\n");
        else printf("NO\n");
    }
}
