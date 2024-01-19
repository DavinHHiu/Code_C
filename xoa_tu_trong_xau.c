#include<stdio.h>
#include<string.h>
void xoa(char s1[],int x,int p){
    for(int i=x;i<=strlen(s1)-p;i++){
        s1[i]=s1[i+p+1];
    }
   
}
int main(){
    char s1[100],s2[100];
    fflush(stdin);
    fgets(s1,sizeof(s1),stdin);
    s1[strlen(s1)-1]='\0';
    fflush(stdin);
    fgets(s2,sizeof(s2),stdin);
    s2[strlen(s2)-1]='\0';
    char *p=strtok(s1," ");
    while(p!=NULL){
        
        p=strtok(NULL," ");
    }
    printf("%s",s1);
}