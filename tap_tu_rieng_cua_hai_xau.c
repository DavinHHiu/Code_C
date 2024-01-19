#include<stdio.h>
#include<string.h>
void xoa(char s1[],int x,int p){
    for(int i=x;i<=strlen(s1)-p;i++){
        s1[i]=s1[i+p+1];
    }
   
}
void tim(char s1[],char s3[]){
    int size=strlen(s3);
    for(int i=0;s1[i]!='\0';i++){
        if(strstr(&s1[i],s3)==&s1[i]){
            xoa(s1,i,size);
            i--;
        }
    }
}
int main(){
    char s1[100],s2[100],s3[100];
    fflush(stdin);
    fgets(s1,sizeof(s1),stdin);
    s1[strlen(s1)-1]='\0';
    fflush(stdin);
    fgets(s2,sizeof(s2),stdin);
    s2[strlen(s2)-1]='\0';
    char *p=strtok(s2," ");
    while(p!=NULL){
        strcpy(s3,p);
        
        tim(s1,s3);
        p=strtok(NULL," ");
    }
    printf("%s",s1);
}