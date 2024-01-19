#include<stdio.h>
#include<string.h>
#include<ctype.h>
void email(char s[]){
    int size=strlen(s),d=0;
    for(int i=0;i<size-1;i++){
        s[i]=tolower(s[i]);
    }
    for(int i=size-2;;i--){
        if(!isalpha(s[i])){
            for(int j=i+1;j<size-1;j++){
                printf("%c",s[j]);
            }
            break;
        }
    }
    for(int i=size-2;i>0;i--){
        if(!isalpha(s[i])){ d=i;
            for(int j=0;j<d;j++){
                if(isalpha(s[j]) && !isalpha(s[j-1])) printf("%c",s[j]);
            }
            break;
        }
    }
    printf("@ptit.edu.vn\n");
}
int main(){
    char s[100][51];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        fgets(s[i],sizeof(s[i]),stdin);
    }
    email(s[])
}