#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int t;
    scanf("%d\n",&t);
    while(t--){
        char s[50],s1[50];
        fgets(s,sizeof(s),stdin);
        int size=strlen(s),d=0,a=0,j=0;
    for(int i=0;i<size-1;i++){
        s[i]=tolower(s[i]);
    } 
    for(int i=0;i<size;i++){
        if((s[i]==' ' || s[i]=='\t') && a==1){
            s1[j]='\0';
            break;
        }
        if(isalpha(s[i])){
            s1[j]=s[i];
            s[i]=' ';
            a=1;
            j++;
        }
    } 
    for(int i=0;i<size-1;i++){
        int d=0;
        if(!isalpha(s[i-1]) && isalpha(s[i])){
            s[i]=toupper(s[i]);
        }
    }
    for(int i=0;i<size-1;i++){
        if(isalpha(s[i])){
            printf("%c",s[i]);
            d=1;
        }
        if(!isalpha(s[i]) && isalpha(s[i+1]) && d==1) printf(" ");
    }
    printf(", ");
    for(int i=0;s1[i]!='\0';i++){
        s1[i]=toupper(s1[i]);
        printf("%c",s1[i]);
    } 
        printf("\n");
    }
}