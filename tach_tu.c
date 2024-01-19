#include<stdio.h>
#include<string.h>
#include<ctype.h>
void tachtu(char s[]){
    char *p=strtok(s," ");
    while(p!=NULL){
        printf("%s",strupr(p));
        p=strtok(NULL," ");
        if(p==NULL) break;
        printf("\n");
    }
}
int main(){
    char s[101];
    fgets(s,sizeof(s),stdin);
    strupr(s);
    fputs(s,stdout);
    tachtu(s);
}