#include<stdio.h>
#include<string.h>
int demtu(char s[]){
    int a=0;
    int size=strlen(s);
    for(int i=0;i<size;i++){
        if((s[i+1]==' ' || s[i+1]=='\n' || s[i+1]=='\0') && (s[i]!=' ' && s[i]!='\n' && s[i]!='\0') ) 
            a++;
    }
    return a;
}
int main(){
    int t;
    char s[100];
    scanf("%d\n",&t);
    while(t--){
        fgets(s,sizeof(s),stdin);
        printf("%d\n",demtu(s));
    }
}