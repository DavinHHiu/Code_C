#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int p;
    gets(s1);
    gets(s2);
    scanf("%d",&p);
    for(int i=0;i<p-1;i++){
        printf("%c",s1[i]);
    }
    fputs(s2,stdout);
    for(int i=p-1;i<strlen(s1);i++){
        printf("%c",s1[i]);
    }
}