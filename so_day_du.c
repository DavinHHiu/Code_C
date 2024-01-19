#include<stdio.h>
#include<string.h>
int invalid(char s[]){
    for(int i=0;i<strlen(s)-1;i++){
        if(s[0]=='0') return 0;
        if(s[i]<'0' || s[i]>'9') return 0;
    }
    return 1;
}
int daydu(char s[]){
    char s1[10]={'0','1','2','3','4','5','6','7','8','9'};
    int s2[10];
    for(int i=0;i<10;i++){
        s2[i]=0;
    }
    for(int i=0;i<strlen(s);i++){
        for(int j=0;j<10;j++){
            if(s[i]==s1[j]){
                s2[j]++;
                break;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(s2[i]==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    char s[1000];
    scanf("%d\n",&t);
    while(t--){
        fgets(s,sizeof(s),stdin);
        if(invalid(s)==1){
            if(daydu(s)==1) printf("YES\n");
            else printf("NO\n");
        }else printf("INVALID\n");
    }
}