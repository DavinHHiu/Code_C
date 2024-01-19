#include<stdio.h>
#include<string.h>
#include<ctype.h>
int duong(char s){
    switch (s){
    case 'M':
        return 1000;
    case 'D':
        return 500;
    case 'C':
        return 100;
    case 'L':
        return 50;
    case 'X':
        return 10;
    case 'V':
        return 5;
    case 'I':
        return 1;
    }
}
int tinh(char s[],int size){
    int a=0; 
    for(int i=0;i<size-1;i++){
        if(s[i]>'a' && s[i]<'z'){
            s[i]=toupper(s[i]);
        }
    } 
    a+=duong(s[size-2]);
    for(int i=0;i<size-2;i++){
        if(duong(s[i])<duong(s[i+1])){
            a-=duong(s[i]);
        } else a+=duong(s[i]);
    }
    return a;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100];
        fflush(stdin);
        fgets(s,sizeof(s),stdin);
        int size=strlen(s);
        s[size-1]='\0';
        printf("%d\n",tinh(s,size));
    }
}