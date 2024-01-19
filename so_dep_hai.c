#include<stdio.h>
#include<string.h>
int reverse(char s[]){
    int size=strlen(s);
    for(int i=0;i<strlen(s)/2;i++){
        if(s[i]!=s[size-2-i]) return 0;
        if(s[0]!='8' || s[size-2]!='8') return 0;
    }
    return 1;
}
int chuyenSo(char s){
    switch (s){
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;

    }
}
int check(char s[]){
    int sum=0;
    for(int i=0;i<strlen(s)-1;i++){
        sum+=chuyenSo(s[i]);
    }
    if(sum%10==0) return 1;
    return 0;
}
int main(){
    int t;
    char s[501];
    scanf("%d\n",&t);
    while(t--){
        fgets(s,sizeof(s),stdin);
        if(reverse(s)==1){
            if(check(s)==1) printf("YES\n");
            else printf("NO\n");
        }else printf("NO\n");
    }
}