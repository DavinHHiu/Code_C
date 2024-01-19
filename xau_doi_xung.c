#include<stdio.h>
#include<string.h>
int reverse(char s[]){
    int size=strlen(s),d=0;
    if(size==2) return 1;
    for(int i=0;i<strlen(s)/2;i++){
        if(s[i]!=s[size-i-2]) d++;
    }
    if(size%2==0 && d==0) return 1;
    if(d>1 || d==0) return 0;
    return 1;
}
int main(){
    int t;
    char s[21];
    scanf("%d\n",&t);
    while(t--){
        fgets(s,sizeof(s),stdin);
        if(reverse(s)==1)
        printf("YES\n");
        else printf("NO\n");
        
    }
}
