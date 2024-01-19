#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){
    char t=*a;
    *a=*b;
    *b=t;
}
void tong(char s1[],char s2[]){
    char s3[257];
    for(int i=0;i<256;i++){
        s3[i]='0';
    }
    for(int i=0;i<strlen(s1)/2;i++){
        swap(s1+i,s1+(strlen(s1)-i-1));
    }
    for(int i=0;i<strlen(s2)/2;i++){
        swap(s2+i,s2+(strlen(s2)-i-1));
    }
    int max=strlen(s1);
    if(strlen(s2)>max) max=strlen(s2);
    int size1=strlen(s1),size2=strlen(s2);
    if(strlen(s1)<strlen(s2)){
        strcat(s2,"0");
        for(int i=0;i<=size2-size1;i++){
            strcat(s1,"0");
        }
    }
    if(strlen(s1)>strlen(s2)){
        strcat(s1,"0");
        for(int i=0;i<=size1-size2;i++){
            strcat(s2,"0");
        }
    }
    if(strlen(s1)==strlen(s2)){
        strcat(s1,"0");
        strcat(s2,"0");
    }
    int nho=0,t;
    for(int i=0;i<=max;i++){
        t=s1[i]-'0'+s2[i]-'0'+nho;
        s3[i]=t%10+'0';
        nho=t/10;
    }
    if(s3[max]=='0'){
        s3[max]='\0';
        for(int i=max-1;i>=0;i--){
            printf("%c",s3[i]);
        }
    }
    else{s3[max+1]='\0';
        for(int i=max;i>=0;i--){
            printf("%c",s3[i]);
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s1[257],s2[257];
        scanf("\n");
        gets(s1);
        scanf("\n");
        gets(s2);
        tong(s1,s2);
        printf("\n");
    }
}