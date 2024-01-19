#include<stdio.h>
#include<string.h>
#include<ctype.h>
void upr(char *c){
    int size=strlen(c);
    for(int i=0;i<size;i++){
        c[i] = toupper(c[i]);
    }
    printf("%s",c);
}
int main(){
    char a[100];
    fgets(a,99,stdin);
    upr(a);
    return 0;
}