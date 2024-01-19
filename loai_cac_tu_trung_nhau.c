#include<stdio.h>
#include<string.h>
void loai(char s[]){
   char s1[50][10];
   int k=0,j=0;
    for(int i=0;i<strlen(s)-1;i++){
        s1[k][j]=s[i];
        if(s[i+1]!=' ') j++;
        if(s[i+1]==' '){
            k++;
            j=0;
            i++;
        }
        if(s[i]=='\0') break;
    }
    for(int i=0;i<=k;i++){
        printf("%d",strlen(s1[k]));
        for(int l=0;l<strlen(s1[i]);l++){
            printf("%c",s1[i][l]);
        }
        printf("\n");
    }
}
int main(){
    char s[100];
    fgets(s,sizeof(s),stdin);
    //fflush(stdin);
    loai(s);
}