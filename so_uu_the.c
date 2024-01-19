#include<stdio.h>
#include<string.h>
int invalid(char s[]){
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]<'0' || s[i]>'9') return 0;
    }
    return 1;
}
int chanle(char s[]){
    int c=0,l=0;
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]=='0' || s[i]=='2' || s[i]=='4' || s[i]=='6'|| s[i]=='8') c++;
        else l++;
    }
    if(l==c) return 0;
    if(strlen(s)%2==0 && l>c) return 1;
    if(strlen(s)%2!=0 && l<c) return 1;
    return 0;
}
int main(){
    int t;
    char s[1000];
    scanf("%d\n",&t);
    while(t--){
        fgets(s,sizeof(s),stdin);
        if(invalid(s)==1){
            if(chanle(s)==1) printf("YES\n");
            else printf("NO\n");
        }else printf("INVALID\n");
    }
}