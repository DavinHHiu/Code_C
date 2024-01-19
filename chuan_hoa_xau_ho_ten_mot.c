#include<stdio.h>
#include<string.h>
#include<ctype.h>
void sua(char s[]){
    int size=strlen(s);
    for(int i=0;i<size-1;i++){
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<size-1;i++){
        s[0]=toupper(s[0]);
        if(s[i-1]==' ' || s[i-1]=='\t') s[i]=toupper(s[i]);
    }
    for(int i=0;i<size-1;i++){
        if((isalpha(s[i]) && isalpha(s[i+1])) || (isalpha(s[i]) && !isalpha(s[i+1])))
        printf("%c",s[i]);
        if((!isalpha(s[i]) && isalpha(s[i-1]))) printf(" ");
    }
}
int main(){
    int t;
    char s[50];
    scanf("%d\n",&t);
    while(t--){
        scanf("\n");
        fgets(s,sizeof(s),stdin);
        sua(s);
        printf("\n");
    }
}