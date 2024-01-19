#include<stdio.h>
#include<string.h>
void xoa(char s1[],char x,int len){
    for(int i=x;i<=strlen(s1)-len-1;i++){
        s1[i]=s1[i+len+1];
    }
}
void tim(char s1[],char s2[]){
    int len=strlen(s2);
    for(int i=0;s1[i]!='\0';i++){
        if(strstr(&s1[i],s2)==&s1[i]){
            xoa(s1,i,len);
            i--;
        }
    }
    printf("%s",s1);
}
int main(){
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    tim(s1,s2);
}
