#include<stdio.h>
#include<string.h>
int tang(char s[]){
    for(int i=6;i<8;i++){
        if(s[i]>=s[i+1]) return 0;
    }
    if(s[10]>=s[11]) return 0;
    if(s[8]>=s[10]) return 0;
    return 1;
}
int bang(char s[]){
    for(int i=6;i<8;i++){
        if(s[i]!=s[i+1]) return 0;
    }
    if(s[10]!=s[11]) return 0;
    return 1;
}
int locphat(char s[]){
    for(int i=6;i<12;i++){
        if(s[i]=='.'){
            i++;
        }
        if(s[i]!='6' && s[i]!='8') return 0;
    }
    return 1;
}
int main(){
    int t;
    char s[20];
    scanf("%d\n",&t);
    while(t--){
        fgets(s,sizeof(s),stdin);
        if(tang(s)==1 || bang(s)==1 || locphat(s)==1){
            printf("YES\n");
        }else printf("NO\n");
    }
}