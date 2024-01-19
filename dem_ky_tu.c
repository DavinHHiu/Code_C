#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chu(char *c){
    int dem=0;
    int size=strlen(c);
    for(int i=0;i<size;i++){
        if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z')) {
            dem++;
            }
    }
    printf("%d ",dem);
}
void so(char *c){
    int dem=0;
    int size=strlen(c);
    for(int i=0;i<size;i++){
        if(c[i]>='0' && c[i]<='9') dem++;
    }
    printf("%d ",dem);
}
void kytukhac(char *c){
    int dem=-1;
    int size=strlen(c);
    for(int i=0;i<size;i++){
        if(c[i]<'0' || (c[i]>'9' && c[i]<'A') || (c[i]>'Z' && c[i]<'a') || c[i]>'z'){
            dem++;
        }
    }
    printf("%d",dem);
}
int main(){
    char c[100];
    fgets(c,99,stdin);
    chu(c);
    so(c);
    kytukhac(c);
}